#pragma once

#include <Windows.h>
#include <string>

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class ClassProgress
{
private:
	double currentProgress;
	String^ pathToProgress;

	static double StepB = 2.5;
	static double StepA = 5;
	static double StepS = 10;
	static double StepSplus = 15;

public:
	Dictionary<int, String^>^ ranks;

	ClassProgress(String^ User) {
		if (!String::IsNullOrEmpty(User))
			pathToProgress = User + "//data1.bin";
		else {
			MessageBox::Show("Code: 404\nUser not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
			return;
		}

		InitializeRanks();

		if (File::Exists(pathToProgress)) {
			currentProgress = LoadProgress();
		}
		else {
			currentProgress = 0;
			SaveProgress();
		}
	}

	int GetCurrentProgress() {
		return currentProgress;
	}

	void SetProgress(int newProgress) {
		currentProgress = newProgress;
		SaveProgress();
	}

	String^ GetUserRank() {
		for each (KeyValuePair<int, String^> kvp in ranks) {
			if (currentProgress < kvp.Key * 20) {
				return kvp.Value;
			}
		}
		// ���� ������� �������� ���� ���� ������������ �������, ������� ������������ ����
		return ranks[ranks->Count - 1];
	}

	int GetUserRankKey() {
		int maxKey = 0;
		for each (int key in ranks->Keys) {
			if (key > maxKey) {
				maxKey = key;
			}
		}
		return maxKey;
	}

	void SolveTaskA() {
		currentProgress += StepA;
		SaveProgress();
	}
	void SolveTaskB() {
		currentProgress += StepB;
		SaveProgress();
	}
	void SolveTaskS() {
		currentProgress += StepS;
		SaveProgress();
	}
	void SolveTaskSplus() {
		currentProgress += StepSplus;
		SaveProgress();
	}

private:
	void InitializeRanks() {
		ranks = gcnew Dictionary<int, String^>();
		ranks->Add(0, "�������");
		ranks->Add(1, "�������������");
		ranks->Add(2, "�������");
		ranks->Add(3, "�����������");
		ranks->Add(4, "������");
		ranks->Add(5, "�������");
	}

	int LoadProgress() {
		FileStream^ fs = gcnew FileStream(pathToProgress, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fs);

		int progress = br->ReadInt32();

		br->Close();
		fs->Close();

		return progress;
	}

	void SaveProgress() {
		FileStream^ fs = gcnew FileStream(pathToProgress, FileMode::Create, FileAccess::Write);
		BinaryWriter^ bw = gcnew BinaryWriter(fs);

		bw->Write(currentProgress);

		bw->Close();
		fs->Close();
	}
};
