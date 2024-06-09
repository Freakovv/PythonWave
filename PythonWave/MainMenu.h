#pragma once
#include "mainForm.h"

#include <Windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>


using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace System;
using namespace PythonWave;

int currentAnim = 1;
double animSeconds = 2;

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
	if (CheckSave())
		Pages->SelectTab(tabPage);
}
Void mainForm::btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageHome);
}
Void mainForm::btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageBook);
}
Void mainForm::btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isCoursesVisited)
		funcSelectTab(pageCourses);
	else
		timerAnim->Start();
}
Void mainForm::btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
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

Void mainForm::timerAnim_Tick(System::Object^ sender, System::EventArgs^ e) {
	switch (currentAnim)
	{
	case 1:
		Pages->SelectTab(anim1);
		Pages->AllowTransitions = true;
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 2;
			animSeconds = 4;
		
			Pages->SelectTab(anim2);
		}
		break;
	case 2:
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 3;
			animSeconds = 3;

			Pages->SelectTab(anim3);
		}
		break;
	case 3:
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 4;
			animSeconds = 3;

			Pages->SelectTab(anim4);
		}
	case 4:
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 5;
			animSeconds = 3;

			Pages->SelectTab(anim5);
		}
	case 5:
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 6;
			animSeconds = 3;

			Pages->SelectTab(anim6);
		}
	default:
		break;
	}
}