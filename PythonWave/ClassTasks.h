#pragma once
#include <Windows.h>
#include <string>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Text;
ref class ClassTasks
{
private:
	String^ pathToTasksState;
	String^ pathToCounters;
public:
	Dictionary<String^, bool>^ taskDict;
	Dictionary<String^, DateTime>^ taskCompletionDates;
	int completedA_count = 0;
	int completedB_count = 0;
	int completedS_count = 0;
	int completedSplus_count = 0;
	ClassTasks(String^ User) {
		if (!String::IsNullOrEmpty(User)) {
			pathToTasksState = User + "//tasks_state.bin";
			pathToCounters = User + "//counters.bin";
		}
		else {
			MessageBox::Show("Code: 404\nUser not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
			return;
		}

		InitializeTaskDictionary();

		if (File::Exists(pathToTasksState)) {
			LoadTaskState();
		}
		else {
			SaveTaskState();
		}
		if (File::Exists(pathToCounters)) {
			LoadCounters();
		}
		else {
			SaveCounters();
		}
	}
	String^ GetTaskStates() {
		String^ message;
		for each (KeyValuePair<String^, bool> kvp in taskDict) {
			message += kvp.Key + ": " + kvp.Value.ToString() + "\n";
		}
		return message;
	}
	void SolveTask(String^ TaskName) {
		SetTaskValue(TaskName, true);
		SetTaskCompletionDate(TaskName);
	}
	bool GetTaskValue(String^ taskName) {
		if (taskDict->ContainsKey(taskName)) {
			return taskDict[taskName];
		}
		return false;
	}
	void SetTaskCompletionDate(String^ taskName) {
		array<String^>^ EzTasks = { "add", "multiply", "divide", "subtract", "even_or_odd" };
		array<String^>^ MidTasks = { "better_than_average", "positive_sum", "reverse_seq" };
		array<String^>^ HardTasks = { "get_count", "high_and_low", "square_digits" };
		array<String^>^ VeryHardTasks = { "get_char", "symmetric_point", "get_middle" };

		if (taskDict->ContainsKey(taskName)) {
			taskCompletionDates[taskName] = DateTime::Now;
			SaveCounters();
			SaveTaskState();
		}
	}
	String^ getMaxDifficulty() {
		if (completedSplus_count > 0)
			return "Очень сложная";
		else if (completedS_count > 0)
			return "Сложная";
		else if (completedA_count > 0)
			return "Средняя";
		else if (completedB_count > 0)
			return "Легкая";
		else
			return "Нет выполненных задач";
	}
	int getCompletedCount(DateTime start, DateTime end) {
		return CompletedTasksCount(start, end);
	}
private:
	void SetTaskValue(String^ taskName, bool value) {
		if (taskDict->ContainsKey(taskName)) {
			taskDict[taskName] = value;
			SaveTaskState();
		}
	}
	void InitializeTaskDictionary() {
		taskDict = gcnew Dictionary<String^, bool>();
		taskCompletionDates = gcnew Dictionary<String^, DateTime>();
		array<String^>^ tasks = { "add", "multiply", "divide", "subtract", "even_or_odd",
			"better_than_average", "positive_sum", "reverse_seq",
			"get_count", "high_and_low", "square_digits",
			"get_char", "symmetric_point", "get_middle" };
		for each (String ^ task in tasks) {
			taskDict[task] = false;
		}
		LoadTaskState();
	}
	void LoadTaskState() {
		if (!File::Exists(pathToTasksState))
			return;
		array<Byte>^ key = { 0x10, 0x20, 0x30, 0x40, 0x50 };
		try {
			FileStream^ fs = gcnew FileStream(pathToTasksState, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			array<Byte>^ encryptedData = br->ReadBytes((int)fs->Length);
			array<Byte>^ decryptedData = gcnew array<Byte>(encryptedData->Length);
			for (int i = 0; i < encryptedData->Length; i++) {
				decryptedData[i] = encryptedData[i] ^ key[i % key->Length];
			}
			int index = 0;
			array<String^>^ keys = gcnew array<String^>(taskDict->Keys->Count);
			taskDict->Keys->CopyTo(keys, 0);
			for each (String ^ taskName in keys) {
				if (index + sizeof(bool) <= decryptedData->Length) {
					taskDict[taskName] = BitConverter::ToBoolean(decryptedData, index);
					index += sizeof(bool);
				}
				else {
					break;
				}
			}
			while (index + sizeof(int) <= decryptedData->Length) {
				int taskNameLength = BitConverter::ToInt32(decryptedData, index);
				index += sizeof(int);
				if (index + taskNameLength <= decryptedData->Length) {
					String^ taskName = Encoding::UTF8->GetString(decryptedData, index, taskNameLength);
					index += taskNameLength;
					if (index + sizeof(Int64) <= decryptedData->Length) {
						DateTime completionDate = DateTime::FromBinary(BitConverter::ToInt64(decryptedData, index));
						index += sizeof(Int64);
						taskCompletionDates[taskName] = completionDate;
					}
					else {
						break;
					}
				}
				else {
					break;
				}
			}
			br->Close();
			fs->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading task state: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	void SaveTaskState() {
		array<Byte>^ key = { 0x10, 0x20, 0x30, 0x40, 0x50 };
		try {
			List<Byte>^ dataBytes = gcnew List<Byte>();
			for each (bool value in taskDict->Values) {
				array<Byte>^ boolBytes = BitConverter::GetBytes(value);
				for each (Byte b in boolBytes) {
					dataBytes->Add(b);
				}
			}
			for each (KeyValuePair<String^, DateTime> kvp in taskCompletionDates) {
				array<Byte>^ taskNameBytes = Encoding::UTF8->GetBytes(kvp.Key);
				array<Byte>^ taskNameLengthBytes = BitConverter::GetBytes(taskNameBytes->Length);

				dataBytes->AddRange(taskNameLengthBytes);
				dataBytes->AddRange(taskNameBytes);

				array<Byte>^ dateBytes = BitConverter::GetBytes(kvp.Value.ToBinary());
				dataBytes->AddRange(dateBytes);
			}
			array<Byte>^ encryptedData = gcnew array<Byte>(dataBytes->Count);
			for (int i = 0; i < dataBytes->Count; i++) {
				encryptedData[i] = dataBytes[i] ^ key[i % key->Length];
			}
			FileStream^ fs = gcnew FileStream(pathToTasksState, FileMode::Create, FileAccess::Write);
			BinaryWriter^ bw = gcnew BinaryWriter(fs);
			bw->Write(encryptedData);
			bw->Close();
			fs->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error saving task state: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	void SaveCounters() {
		array<Byte>^ key = { 0x10, 0x20, 0x30, 0x40, 0x50 };
		try {
			List<Byte>^ dataBytes = gcnew List<Byte>();
			array<Byte>^ bCountBytes = BitConverter::GetBytes(completedB_count);
			array<Byte>^ aCountBytes = BitConverter::GetBytes(completedA_count);
			array<Byte>^ sCountBytes = BitConverter::GetBytes(completedS_count);
			array<Byte>^ sPlusCountBytes = BitConverter::GetBytes(completedSplus_count);
			dataBytes->AddRange(bCountBytes);
			dataBytes->AddRange(aCountBytes);
			dataBytes->AddRange(sCountBytes);
			dataBytes->AddRange(sPlusCountBytes);
			array<Byte>^ encryptedData = gcnew array<Byte>(dataBytes->Count);
			for (int i = 0; i < dataBytes->Count; i++) {
				encryptedData[i] = dataBytes[i] ^ key[i % key->Length];
			}
			FileStream^ fs = gcnew FileStream(pathToCounters, FileMode::Create, FileAccess::Write);
			BinaryWriter^ bw = gcnew BinaryWriter(fs);
			bw->Write(encryptedData);
			bw->Close();
			fs->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error saving counters: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	void LoadCounters() {
		array<Byte>^ key = { 0x10, 0x20, 0x30, 0x40, 0x50 };

		if (!File::Exists(pathToCounters))
			return;

		try {
			FileStream^ fs = gcnew FileStream(pathToCounters, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);

			array<Byte>^ encryptedData = br->ReadBytes((int)fs->Length);
			array<Byte>^ decryptedData = gcnew array<Byte>(encryptedData->Length);

			for (int i = 0; i < encryptedData->Length; i++) {
				decryptedData[i] = encryptedData[i] ^ key[i % key->Length];
			}

			int index = 0;
			completedB_count = BitConverter::ToInt32(decryptedData, index);
			index += sizeof(int);
			completedA_count = BitConverter::ToInt32(decryptedData, index);
			index += sizeof(int);
			completedS_count = BitConverter::ToInt32(decryptedData, index);
			index += sizeof(int);
			completedSplus_count = BitConverter::ToInt32(decryptedData, index);
			index += sizeof(int);

			br->Close();
			fs->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading counters: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	int CompletedTasksCount(DateTime start, DateTime end) {
		int count = 0;
		for each (KeyValuePair<String^, DateTime> kvp in taskCompletionDates) {
			if (kvp.Value >= start && kvp.Value < end) {
				count++;
			}
		}
		return count;
	}
};