#pragma once

#include "MainMenu.h"
#include "MainBook.h"
#include "MainFunc.h"
#include "MainProfile.h"
#include "MainTasks.h"
#include "MainSettings.h"
#include "MainHome.h"
#include <random>
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

	AppTimer->Start();

	SetCenter(panelProfileData, lblLogin, 1);
	SetCenter(anim1, lblAnim1, 1);
	SetCenter(pageProfile, pictureProfile, 1);
	SetCenter(pageProfile, panelProfileData, 1);
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
		this->Size = Drawing::Size(1600, 900);
	}
}

Void mainForm::ratingUser_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageInfo->Caption = "Информация";
	MessageInfo->Show("Оценка ваших успехов в учебе :)", "Звездочки");
}
Void mainForm::btnQuestionBook_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageInfo->Show("Примените желаемые пометки, выделив текст", "Панель инструментов");
}

String^ GetRandomTask(array<String^>^ tasksArray) {
	Random^ rand = gcnew Random();
	int index = rand->Next(tasksArray->Length);
	return tasksArray[index];
}
bool test = true;
bool messageNeed = false;
Void mainForm::AppTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ EzTasks = { "add", "multiply", "divide", "subtract", "even_or_odd" };
	array<String^>^ MidTasks = { "better_than_average", "positive_sum", "reverse_seq" };
	array<String^>^ HardTasks = { "get_count", "high_and_low", "square_digits" };
	array<String^>^ VeryHardTasks = { "get_char", "symmetric_point", "get_middle" };

	if (hacks) {
		secondsSpent += 5000;
		ClassProgress data(User);
		ClassTasks tasks(User);
		if (!test) {
			if (messageNeed) {
				MessageInfo->Show("Все задачи пройдены", "Тестирование");
				messageNeed = false;
			}
		}
		else if (secondsSpent >= 70000) {
			messageNeed = true;
			test = false;
			data.SolveTaskSplus();
			tasks.SetTaskCompletionDate(GetRandomTask(VeryHardTasks));
		}
		if (secondsSpent >= 55000) {
			data.SolveTaskS();
			tasks.SetTaskCompletionDate(GetRandomTask(HardTasks));
		}
		else if (secondsSpent >= 40000) {
			data.SolveTaskB();
			tasks.SetTaskCompletionDate(GetRandomTask(MidTasks));
		}
		else if (secondsSpent >= 25000) {
			data.SolveTaskA();
			tasks.SetTaskCompletionDate(GetRandomTask(EzTasks));
		}
	}
	else
		++secondsSpent;

	WriteTimeToFile();
	ReadTimeFromFile();
	DataLoad();
	LoadHomePage();
}

Void mainForm::guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	hacks == false ? hacks = true : hacks = false;
	if (hacks) {
		MessageInfo->Show("Тестирование приложения включено", "Информация");
		ClassProgress data(User);
		ClassTasks tasks(User);
		data.SolveTaskA();
		tasks.SetTaskCompletionDate("add");
	}
	else {
		MessageInfo->Show("Тестирование приложения выключено", "Информация");
	}
	DataLoad();
	LoadHomePage();
}
Void mainForm::mainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	WriteTimeToFile();
}
Void mainForm::mainForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	this->Size = Drawing::Size(1600, 900);
}
