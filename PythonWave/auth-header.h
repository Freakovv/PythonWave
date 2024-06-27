#pragma once
#include "auth.h"
#include "ClassFade.h"
#include "config.h"

#include <Windows.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace PythonWave;
using namespace System::IO;
int sec = 4;
int animation_mode = 1; // 1,2,3 - Цепочка анимации регистрации, 4 - Переход на main с приветствием
bool greeting = true;
void authToProfile(String^ construct); // Функция для перехода определена в general.h
void authToMain(String^ construct); // Функция для перехода определена в general.h
void SetCenter(Control^ back, Control^ control, int mode); // Функция чтобы установил элемент по середине
String^ auth::ReadLogFile() {
	String^ content = "";
	try {
		String^ folderName = "logs";
		String^ filePath = Path::Combine(folderName, "logs.bin");
		if (File::Exists(filePath)) {
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
			BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
			content = binaryReader->ReadString();
			binaryReader->Close();
			fileStream->Close();
		}
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message);
	}
	return content;
}
Void auth::CreateLogFile() {
	try {
		String^ folderName = "logs";
		String^ filePath = Path::Combine(folderName, "logs.bin");
		Directory::CreateDirectory(folderName);
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
		BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);
		binaryWriter->Write(USER);
		binaryWriter->Close();
		fileStream->Close();
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message);
	}
}
Void auth::LastEnter() {
	if (greeting) {
		labelWelcome->Text += USER;
		SetCenter(pageWelcome, labelWelcome, 1);
		pagesTransition->SelectTab(pageWelcome);
		animation_mode = 4;
		sec = 2;
		timerTransition->Start();
	}
	else {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		fadeEffect->SetAnimation("hide");
		fadeEffect = nullptr;
		authToMain(USER);
	}
}
Void auth::loadConfig() {
	if (File::Exists("config.xml")) {
		Config^ config = config->LoadConfig();
		borderlessForm->BorderRadius = config->borderForm;
		borderlessForm->HasFormShadow = config->hasFormShadow;
		buttonComeIn->BorderRadius = config->borderBtn;
		buttonRegister->BorderRadius = config->borderBtn;
		greeting = config->greeting;
		dragControl1->TransparentWhileDrag = config->dragTransparent;
		dragControl2->TransparentWhileDrag = config->dragTransparent;
		dragControl3->TransparentWhileDrag = config->dragTransparent;
		dragControlMain->TransparentWhileDrag = config->dragTransparent;
		dragControlMain2->TransparentWhileDrag = config->dragTransparent;
	}
}
Void auth::auth_Load(System::Object^ sender, System::EventArgs^ e) {
	if (File::Exists("config.xml")) {
		loadConfig();
	}
	if (Directory::Exists("logs")) {
		USER = ReadLogFile();
		LastEnter();
	}
	else {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		fadeEffect->SetAnimation("in");
		fadeEffect = nullptr;
	}
	SetCenter(panelMain, labelMain, 1);
	SetCenter(pageWelcome, labelWelcome, 1);
}
Void auth::buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ fadeEffect = gcnew ClassFade(this);
	fadeEffect->SetAnimation("close");
	fadeEffect = nullptr;
}
Void auth::buttonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ fadeEffect = gcnew ClassFade(this);
	fadeEffect->SetAnimation("minimize");
	fadeEffect = nullptr;
}
Void auth::buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageOption->Show();
}
Void auth::buttonShowAuth_Click(System::Object^ sender, System::EventArgs^ e) {
	pagesAuthReg->SelectTab(pageAuth);
	this->Text = "PythonWave: Авторизация";
	labelMain->Text = this->Text;
	SetCenter(panelMain, labelMain, 1);
}
Void auth::buttonShowReg_Click(System::Object^ sender, System::EventArgs^ e) {
	pagesAuthReg->SelectTab(pageReg);
	this->Text = "PythonWave: Регистрация";
	labelMain->Text = this->Text;
	SetCenter(panelMain, labelMain, 1);
}
Void auth::buttonRegister_Click(Object^ sender, EventArgs^ e) {
	if (textBoxLogin1->Text == "") {
		textBoxLogin1->BorderColor = Color::Red;
		MessageWarning->Show("Введите логин");
		return;
	}
	if (textBoxPassword1->Text == "" || textBoxPassword_1->Text == "") {
		textBoxPassword1->BorderColor = Color::Red;
		textBoxPassword_1->BorderColor = Color::Red;
		MessageWarning->Show("Введите пароль");
		return;
	}
	if (textBoxPassword1->Text != textBoxPassword_1->Text) {
		textBoxPassword1->BorderColor = Color::Red;
		textBoxPassword_1->BorderColor = Color::Red;

		MessageError->Show("Пароли не совпадают", "Ошибка");
		return;
	}
	if (checkBoxTerms->Checked == false) {
		MessageError->Caption = "Предупреждение";
		MessageError->Text = "Для регистрации вам нужно прочесть условия использования";
		MessageError->Show();
		return;
	}
	if (Directory::Exists(textBoxLogin1->Text)) {
		MessageError->Caption = "Предупреждение";
		MessageError->Text = "Пользователь под таким логином уже существует";
		MessageError->Show();
		return;
	}
	panelMain->Visible = false;
	Register();
}
Void auth::Register() {
	String^ cliLogin = textBoxLogin1->Text;
	String^ cliPassword = textBoxPassword1->Text;
	USER = cliLogin;
	labelWelcome->Text += cliLogin;
	SetCenter(pageWelcome, labelWelcome, 1);
	std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
	std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);
	String^ folderPath = cliLogin;
	Directory::CreateDirectory(folderPath);
	String^ filePath = Path::Combine(folderPath, "data.bin");
	std::hash<std::string> hasher;
	size_t hashPassword = hasher(Password);
	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
	BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);
	binaryWriter->Write(hashPassword);
	binaryWriter->Close();
	fileStream->Close();
	animation_mode = 1;
	sec = 4;
	timerTransition->Start();
}
Void auth::linkLabelTerms_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	textBoxTerms->Visible = true;
	buttonCloseTerms->Visible = true;
	textBoxTerms->BringToFront();
	buttonCloseTerms->BringToFront();
}
Void auth::buttonCloseTerms_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxTerms->Visible = false;
	buttonCloseTerms->Visible = false;
}
Void auth::buttonComeIn_Click(Object^ sender, EventArgs^ e) {
	if (textBoxLogin->Text == "") {
		textBoxLogin->BorderColor = Color::Red;
		MessageWarning->Show("Введите логин");
		return;
	}
	if (textBoxPassword->Text == "") {
		textBoxPassword->BorderColor = Color::Red;
		MessageWarning->Show("Введите пароль");
		return;
	}
	if (ComeIn()) {
		if (SwitchRemember->Checked == true) {
			CreateLogFile();
		}
		if (greeting) {
			animation_mode = 4;
			sec = 4;
		}
		else {
			animation_mode = 5;
			sec = 1;
		}
		labelWelcome->Text += USER;
		SetCenter(pageWelcome, labelWelcome, 1);
		timerTransition->Start();
	}
}
Boolean auth::ComeIn() {
	String^ cliLogin = textBoxLogin->Text;
	String^ cliPassword = textBoxPassword->Text;
	std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
	std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);
	String^ folderPath = cliLogin;
	String^ filePath = Path::Combine(folderPath, "data.bin");
	if (!Directory::Exists(folderPath)) {
		MessageError->Show("Пользователя с указанным логином не существует", "Ошибка");
		return false;
	}
	std::hash<std::string> hasher;
	size_t hashPasswordInput = hasher(Password);
	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
	BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
	size_t hashPasswordFile = binaryReader->ReadUInt64();
	binaryReader->Close();
	fileStream->Close();
	if (hashPasswordInput == hashPasswordFile) {
		USER = cliLogin;
		return true;
	}
	else {
		MessageError->Show("Введен неверный пароль", "Предупреждение");
		return false;
	}
}
Void auth::timerTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ fadeEffect = gcnew ClassFade(this);
	switch (animation_mode)
	{
	case 1:
		--sec;
		pagesTransition->SelectTab(pageWelcome);
		if (sec <= 0) {
			timerTransition->Stop();
			sec = 4;
			animation_mode = 2;
			timerTransition->Start();
		}
		break;
	case 2:
		--sec;
		pagesTransition->SelectTab(pageInfo);
		if (sec <= 0) {
			sec = 2;
			animation_mode = 3;
			timerTransition->Start();
		}
		break;
	case 3:
		--sec;
		if (sec <= 0) {
			timerTransition->Stop();
			fadeEffect->SetAnimation("hide");
			fadeEffect = nullptr;
			authToProfile(USER);
		}
		break;
	case 4:
		pagesTransition->SelectTab(pageWelcome);
		--sec;
		if (sec <= 0) {
			fadeEffect->SetAnimation("hide");
			fadeEffect = nullptr;
			timerTransition->Stop();
			authToMain(USER);
		}
		break;
	case 5:
		--sec;
		fadeEffect->SetAnimation("hide");
		fadeEffect = nullptr;
		if (sec <= 0) {
			timerTransition->Stop();
			authToMain(USER);
		}
		break;
	}
}
Void auth::textBoxLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxLogin->BorderColor = Color::White;
}
Void auth::textBoxPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxPassword->BorderColor = Color::White;
}
void auth::setShadows() {
	if (!Directory::Exists("logs")) {
		this->borderlessForm->HasFormShadow = true;
	}
	else if (File::Exists("config.xml")) {
		Config^ cfg = gcnew Config();
		cfg->LoadConfig();
		this->borderlessForm->HasFormShadow = cfg->hasFormShadow;
		cfg = nullptr;
	}
}