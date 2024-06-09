#pragma once

#include "MainMenu.h"
#include "MainBook.h"
#include "MainFunc.h"
#include "MainProfile.h"

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
		LoadBook();
		menu = false;

		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("in");

		SetCenter(panelProfileData, lblLogin, 1);
		SetCenter(anim1, lblAnim1, 1);
	}
	Void mainForm::btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		menu == false ? menu = true : menu = false;
		timerMenu->Start();
	}
	Void mainForm::btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("close");
	}
	Void mainForm::btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("minimize");
	}

	// Страница заданий
	Void mainForm::guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//MyPython python;
		//String^ code = richTextBox1->Text;
		//String^ result = python.Start(User, code);
		//MessageBox::Show(User, code);
		//richTextBox2->Text += result;
	}

	



	
