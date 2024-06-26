#pragma once
#include "mainForm.h"
#include "ClassTasks.h"

using namespace PythonWave;
using namespace System;

String^ mainForm::GetGreetingBasedOnTime() {
	DateTime now = DateTime::Now;
	int hour = now.Hour;

	if (hour >= 5 && hour < 12) {
		return "������ ����, " + UserName + "!";
	}
	else if (hour >= 12 && hour < 17) {
		return "������ ����, " + UserName;
	}
	else if (hour >= 17 && hour < 22) {
		return "������ �����, " + UserName;
	}
	else {
		return "������ ����, " + UserName;
	}
}

String^ GetDayOfWeek() {
	DateTime now = DateTime::Now;
	DayOfWeek dayOfWeek = now.DayOfWeek;

	String^ dayName;
	switch (dayOfWeek)
	{
	case DayOfWeek::Monday:
		dayName = "��";
		break;
	case DayOfWeek::Tuesday:
		dayName = "��";
		break;
	case DayOfWeek::Wednesday:
		dayName = "��";
		break;
	case DayOfWeek::Thursday:
		dayName = "��";
		break;
	case DayOfWeek::Friday:
		dayName = "��";
		break;
	case DayOfWeek::Saturday:
		dayName = "��";
		break;
	case DayOfWeek::Sunday:
		dayName = "��";
		break;
	}

	return dayName;
}
void mainForm::InitializePhrazes() {
	phrases = gcnew array<String^> {
		"������ ������ ���� ���������� ���� � ������.",
			"������� �� ������ ������� �������.",
			"���� ���, ����� ��� ������� �� ����� ���������.",
			"�� ���� ��� �� ������ ����� ����� ���������.",
			"��� � ��� ���������, � �� � ��������.",
			"�� ����� ������, ��� � ���� ������ �������.",
			"������ ���� � ����� ����������� ����� �����.",
			"������� �� ������ �������� ������ ��� � ����� �����.",
			"�� �������������� �� �����������, ������ �������� � ��������.",
			"����������� � ��� �����������, ����������� ������ �����.",
			"�� ����������� �������� ��� ����, ��� ��������.",
			"���� ���� ����� �������� ���, ������ ����� ������.",
			"������ ���� ������ ���� ����� ��������.",
			"������� �� ������ ��������, ������� �������� �����������.",
			"���� ���, ������� ����� ����������� ������.",
			"������ ������ � ��� ���� �������� ����.",
			"���� ������ ������ � ������ ���������� ��������.",
			"��� � ��� �����, � �� � ���������.",
			"�� ��������, ������� ������ ������� �������.",
			"������� � ��������� ���� ��� �������� ����-�� ������.",
			"������ ������ � ��� ��� � ������������.",
			"������ � ��� ���� ���������.",
			"���� ��������� ������� ����� �����������.",
			"����������� � ��� ���� ����������� ������� ���-�� ����������.",
			"�������� � ������������� � ���� ������ �����������.",
			"����� ������� ����� ���� ������� ����������.",
			"������ ������ ���� ���������� ���� � ����.",
			"���� ������ �����, ���� ������ �����.",
			"������� �� �������� ��, ��� �� ��������� �����.",
			"�� �������� �� ��, ������ ����� ������.",
			"��� � ��� ���� ����������� �������� ���� �����.",
			"�������� ���, ������� ����� �������� �� ����.",
			"������ ����� ���� � ��� ���� ������ ������.",
			"���� ������ ������� �������� � ����������� ������.",
			"���� ���, ������� ����� ����������� ������� ���������."
	};
}
String^ mainForm::GetPhraseForToday() {
	int day = DateTime::Now.Day;
	int index = (day - 1) % phrases->Length;
	return phrases[index];
}
void mainForm::LoadHomePage() {
	InitializePhrazes();
	lblHello->Text = GetGreetingBasedOnTime();
	lblSovet->Text = GetPhraseForToday();

	SetCenter(pageHome, lblHello, 1);
	SetCenter(pnlHome2, lblPnlHome2, 1);
	SetCenter(pageHome, lblHello, 1);
	SetCenter(pnlHome1n1, btnRead, 1);
	SetCenter(pnlHome1, btnReadBook, 1);

	ReadTimeFromFile();
	InitializePanelBook();
	circleProgress->Value = UserProgress;

	ClassTasks tasks(User);
	currentDayOfWeek = GetDayOfWeek();

	array<String^>^ DaysOfWeek = gcnew array<String^>(7);
	DaysOfWeek[0] = "��";
	DaysOfWeek[1] = "��";
	DaysOfWeek[2] = "��";
	DaysOfWeek[3] = "��";
	DaysOfWeek[4] = "��";
	DaysOfWeek[5] = "��";
	DaysOfWeek[6] = "��";

	TasksDataset->DataPoints->Clear();

	DateTime today = DateTime::Now.Date;
	DateTime startOfWeek = today.AddDays(-(int)today.DayOfWeek + (int)DayOfWeek::Monday);

	for (int i = 0; i < DaysOfWeek->Length; ++i) {
		DateTime dayToCheck = startOfWeek.AddDays(i);
		int completedTasks = tasks.getCompletedCount(dayToCheck, dayToCheck.AddDays(1));
		TasksDataset->DataPoints->Add(DaysOfWeek[i], completedTasks);
	}
}

void mainForm::InitializePanelBook() {

	String^ filePath = User + "//book//lastpage.txt";
	String^ pageName = "none";

	if (File::Exists(filePath)) {
		pageName = File::ReadAllText(filePath);
		int tabPageIndex = -1;

		for (int i = 0; i < Book->TabCount; ++i) {
			if (Book->TabPages[i]->Text == pageName) {
				tabPageIndex = i;
				break;
			}
		}

		if (tabPageIndex != -1) {
			Book->SelectTab(tabPageIndex);
			dropdownPages->SelectedIndex = tabPageIndex;



			String^ selectedPageText = dropdownPages->Items[tabPageIndex]->ToString();

			StringBuilder^ newText = gcnew StringBuilder();
			for each (Char c in selectedPageText)
			{
				if (!Char::IsDigit(c) && c != '.')
				{
					newText->Append(c);
				}
			}
			String^ resultText = newText->ToString();

			lblLastPage->Text = resultText;
			pnlHome1n1->Visible = true;
		}
		else {
			MessageWarning->Show("tabPageIndex: " + tabPageIndex.ToString(), "������ �������");
			pageName = "none";
		}
	}

	if (pageName == "none") {
		pnlHome1->Visible = true;
		return;
	}
}

Void mainForm::btnReadBook_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageBook);
	btnBook->Checked = true;
}
Void mainForm::btnRead_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageBook);
	btnBook->Checked = true;
}

//timer in app
void mainForm::ReadTimeFromFile()
{
	String^ pathToTimer = User + "//time.bin";
	try
	{
		if (File::Exists(pathToTimer))
		{
			FileStream^ fs = gcnew FileStream(pathToTimer, FileMode::Open, FileAccess::Read);
			BinaryReader^ reader = gcnew BinaryReader(fs);
			String^ line = reader->ReadString();
			secondsSpent = Int32::Parse(line);
			reader->Close();
		}
		else
		{
			secondsSpent = 0;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error reading time from file: " + ex->Message);
		secondsSpent = 0;
	}
	double hoursSpent = secondsSpent / 3600.0;
	lblTimerInApp->Text = hoursSpent.ToString("0.0") + "�";
}
void mainForm::WriteTimeToFile()
{
	String^ pathToTimer = User + "//time.bin";
	try
	{
		FileStream^ fs = gcnew FileStream(pathToTimer, FileMode::OpenOrCreate, FileAccess::Write);
		BinaryWriter^ writer = gcnew BinaryWriter(fs);
		writer->Write(secondsSpent.ToString());
		writer->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error writing time to file: " + ex->Message);
	}
}