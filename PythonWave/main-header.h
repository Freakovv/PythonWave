#pragma once

#include "MainMenu.h"
#include "MainBook.h"
#include "MainFunc.h"
#include "MainProfile.h"
#include "MainTasks.h"
#include "MainSettings.h"
#include "MainHome.h"

void SetCenter(Control^ background, Control^ control, int mode);

// Form
void mainForm::Form_MouseDown(Object^ sender, MouseEventArgs^ e)
{
	if (alwaysHideMenu) {
		menu = false;
		timerMenu->Start();
	}
}
Void mainForm::main_Load(System::Object^ sender, System::EventArgs^ e) {
	isDataLoaded = false;
	menu = false;
	DataLoad();
	cfgLoad();
	logsLoad();
	LoadBook();
	LoadHomePage();

	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("in");

	SetCenter(panelProfileData, lblLogin, 1);
	SetCenter(anim1, lblAnim1, 1);
	SetCenter(pageProfile, pictureProfile, 1);
	SetCenter(pageProfile, panelProfileData, 1);
	ShowWAnimation(lblLastPage);
	ShowWAnimation(lblSovet);
	ShowWAnimation(circleProgress);
	ShowWAnimation(lblTimerInApp);
	isDataLoaded = true;
}
Void mainForm::btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("close");
}
Void mainForm::btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("minimize");
}
Void mainForm::btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Normal) {
		this->WindowState = FormWindowState::Maximized;
	}
	else {
		this->WindowState = FormWindowState::Normal;
	}
}

Void mainForm::ratingUser_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageInfo->Caption = "Информация";
	MessageInfo->Show("Оценка ваших успехов в учебе :)", "Звездочки");
}
Void mainForm::btnQuestionBook_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageInfo->Show("Примените желаемые пометки, выделив текст", "Панель инструментов");
}
