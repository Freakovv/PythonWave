#pragma once
#include "mainForm.h"

#include <Windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>


using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace System;
using namespace PythonWave;


// Для перехода с профиля
Void mainForm::SetProfileDefaults() {
	textBoxUserName->Text = UserName;
	textBoxUserSurname->Text = UserSurname;
	textBoxEmail->Text = UserEmail;

	textBoxCode->Enabled = false;
	textBoxCodeNew->Enabled = false;
	buttonCheckCode->Enabled = false;
}
Boolean mainForm::CheckSave() {
	if (isProfileSaved) {
		return true;
	}
	else {
		MessageWarning->Buttons = UI2::WinForms::MessageDialogButtons::YesNo;
		Forms::DialogResult result = MessageWarning->Show("У вас остались несохраненные изменения", "Действительно хотите перейти?");
		if (result == Windows::Forms::DialogResult::Yes) {
			isProfileSaved = true;
			SetProfileDefaults();
			return true;
		}
		else {
			return false;
		}
	}
	MessageWarning->Buttons = UI2::WinForms::MessageDialogButtons::OK;
}

Void mainForm::timerMenu_Tick(System::Object^ sender, System::EventArgs^ e) {
	// 80 Min 250 Max (menu) 

	int newPanelWidth;
	int newPagesWidth;
	int newPagesLocationX;

	switch (menu)
	{
	case true:
		if (panelMenu->Size.Width < 250) {
			int newPanelWidth = panelMenu->Size.Width + 10;
			int newPagesWidth = Pages->Size.Width - 10;
			int newPagesLocationX = Pages->Location.X + 10;

			panelMenu->Width = newPanelWidth;
			Pages->Width = newPagesWidth;
			Pages->Location = Drawing::Point(newPagesLocationX, Pages->Location.Y);
		}
		else {
			newPanelWidth = NULL;
			newPagesWidth = NULL;
			newPagesLocationX = NULL;
			timerMenu->Stop();
		}
		break;
	case false:
		if (panelMenu->Size.Width > 80) {
			int newPanelWidth = panelMenu->Size.Width - 10;
			int newPagesWidth = Pages->Size.Width + 10;
			int newPagesLocationX = Pages->Location.X - 10;

			panelMenu->Width = newPanelWidth;
			Pages->Width = newPagesWidth;
			Pages->Location = Drawing::Point(newPagesLocationX, Pages->Location.Y);
		}
		else {
			newPanelWidth = NULL;
			newPagesWidth = NULL;
			newPagesLocationX = NULL;
			timerMenu->Stop();
		}
		break;
	default:
		break;
	}
}

Void mainForm::funcSelectTab(TabPage^ tabPage) {
	if (CheckSave() && !courseAnimationState)
		Pages->SelectTab(tabPage);
	else if (courseAnimationState)
		btnCourses->Checked = true;
}

Void mainForm::btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (courseAnimationState)
		return;

	menu == false ? menu = true : menu = false;
	timerMenu->Start();
}

Void mainForm::btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageHome);
}
Void mainForm::btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageBook);
}
Void mainForm::btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	logsLoad();
	funcSelectTab(pageProfile);
}
Void mainForm::btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageStats);
}
Void mainForm::btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageSettings);
}
Void mainForm::btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ executablePath = Application::ExecutablePath;

	Process::Start(executablePath);

	// Выключает remember me
	if (Directory::Exists("logs")) {
		try {
			Directory::Delete("logs", true);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	Application::Exit();
}


