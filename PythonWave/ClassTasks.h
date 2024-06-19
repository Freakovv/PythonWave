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
    Dictionary<String^, bool>^ taskDict;
    Dictionary<String^, DateTime>^ taskCompletionDates;

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

    void SolveTask(String^ TaskName) {
        SetTaskValue(TaskName, true);
        SetTaskCompletionDate(TaskName, DateTime::Now);
    }

    bool GetTaskValue(String^ taskName) {
        if (taskDict->ContainsKey(taskName)) {
            return taskDict[taskName];
        }
        return false;
    }

    void SetTaskCompletionDate(String^ taskName, DateTime completionDate) {
        if (taskDict->ContainsKey(taskName)) {
            taskCompletionDates[taskName] = completionDate;
            SaveTaskState();
        }
    }

    int GetTasksCompletedLastWeek() {
        DateTime endDate = DateTime::Now;
        DateTime startDate = endDate.AddDays(-7);
        return GetCompletedTasksCount(startDate, endDate);
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

        // Загрузить состояние задач после инициализации словаря
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
            taskDict->Keys->CopyTo(keys, 0); // Создать массив ключей
            for each (String ^ taskName in keys) { // Перечислять по массиву ключей
                if (index < decryptedData->Length) {
                    taskDict[taskName] = BitConverter::ToBoolean(decryptedData, index);
                    index += sizeof(bool);
                }
                else {
                    break;
                }
            }

            // Загрузка дат выполнения задач
            while (index < decryptedData->Length) {
                int taskNameLength = BitConverter::ToInt32(decryptedData, index);
                index += sizeof(int);

                String^ taskName = Encoding::UTF8->GetString(decryptedData, index, taskNameLength);
                index += taskNameLength;

                DateTime completionDate = DateTime::FromBinary(BitConverter::ToInt64(decryptedData, index));
                index += sizeof(Int64);

                taskCompletionDates[taskName] = completionDate;
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

            // Сохранение дат выполнения задач
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

            FileStream^ fs = gcnew FileStream(pathToTasksState, FileMode::OpenOrCreate, FileAccess::Write);
            BinaryWriter^ bw = gcnew BinaryWriter(fs);

            bw->Write(encryptedData);
            bw->Close();
            fs->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving task state: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    int GetCompletedTasksCount(DateTime startDate, DateTime endDate) {
        int count = 0;
        for each (KeyValuePair<String^, DateTime> kvp in taskCompletionDates) {
            if (kvp.Value >= startDate && kvp.Value <= endDate) {
                count++;
            }
        }
        return count;
    }

public:
    void ShowTaskStates() {
        String^ message = "Task States:\n";
        for each (KeyValuePair<String^, bool> kvp in taskDict) {
            message += kvp.Key + ": " + kvp.Value.ToString() + "\n";
        }
        MessageBox::Show(message, "Task States", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
};
