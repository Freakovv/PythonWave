#pragma once

#include "MainMenu.h"
#include "MainBook.h"
#include "MainFunc.h"
#include "MainProfile.h"
#include "MainTasks.h"

// Classes
#include "MyPython.h"
#include "ClassFade.h"
#include "ClassMail.h"

#include <Windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>

using namespace PythonWave;
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

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
	DataLoad();
	cfgLoad();
	logsLoad();
	LoadBook();
	menu = false;
	
	
	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("in");

	SetCenter(panelProfileData, lblLogin, 1);
	SetCenter(anim1, lblAnim1, 1);
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
