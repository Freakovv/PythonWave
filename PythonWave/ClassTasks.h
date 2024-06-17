#pragma once

#include <Windows.h>
#include <string>

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class ClassTasks
{
private:
	String^ pathToTasksState;
	Dictionary<String^, bool>^ taskDict;

public:
	ClassTasks(String^ User) {
		if (!String::IsNullOrEmpty(User))
			pathToTasksState = User + "//tasks_state.bin";
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
	}

	void SetTaskValue(String^ taskName, bool value) {
		if (taskDict->ContainsKey(taskName)) {
			taskDict[taskName] = value;
			SaveTaskState();
		}
	}

	bool GetTaskValue(String^ taskName) {
		if (taskDict->ContainsKey(taskName)) {
			return taskDict[taskName];
		}
	}

private:
	void InitializeTaskDictionary() {
		taskDict = gcnew Dictionary<String^, bool>();
		taskDict["add"] = false;
		taskDict["multiply"] = false;
		taskDict["divide"] = false;
		taskDict["subtract"] = false;
		taskDict["even_or_odd"] = false;
		taskDict["better_than_average"] = false;
		taskDict["positive_sum"] = false;
		taskDict["reverse_seq"] = false;
		taskDict["get_count"] = false;
		taskDict["high_and_low"] = false;
		taskDict["square_digits"] = false;
		taskDict["get_char"] = false;
		taskDict["symmetric_point"] = false;
		taskDict["get_middle"] = false;

		LoadTaskState();
	}

	void LoadTaskState() {
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
			for each (String ^ taskName in taskDict->Keys) {
				if (index < decryptedData->Length) {
					taskDict[taskName] = BitConverter::ToBoolean(decryptedData, index);
					index += sizeof(bool);
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
};
