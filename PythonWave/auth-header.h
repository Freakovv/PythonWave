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
	int animation_mode = 1; // 1,2,3 - ������� �������� �����������, 4 - ������� �� main � ������������
	bool greeting = true;
	void authToProfile(String^ construct); // ������� ��� ��������
	void authToMain(String^ construct); // ������� ��� ��������

	// ������� ��� ������ last usera
	String^ auth::ReadLogFile() {
		String^ content = "";
		try {
			// ���� � �����
			String^ folderName = "logs";
			String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
			String^ filePath = Path::Combine(folderPath, "logs.bin");

			// ���������, ���������� �� ����
			if (File::Exists(filePath)) {
				// ��������� ���� ��� ������ � �������� ������
				FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
				BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

				// ������ ���������� �����
				//size_t hashLogin = binaryReader->ReadUInt32(); // ��������� ���
				content = binaryReader->ReadString();
				// ��������� �������� �������� � �������� �����
				binaryReader->Close();
				fileStream->Close();

				// ����������� ��� � ������ � ���������� ���
				//content = hashLogin.ToString();
			}
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
		return content;
	}	

	// ������� ��� ����������� last usera
	Void auth::CreateLogFile() {
		try {
			//String^ username = USER;
			//std::string Login = msclr::interop::marshal_as<std::string>(USER);

			// ������� ����� � ���������� �������
			String^ folderName = "logs";
			String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
			Directory::CreateDirectory(folderPath);

			// ���� � ����� Password - logs.bin
			String^ filePath = Path::Combine(folderPath, "logs.bin");

			// �������� 
			//std::hash<std::string> hasher;
			//size_t hashLogin = hasher(Login);

			// ��������� ���� ��� ������ � �������� ������
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
			BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

			// ���������� ��� � ����
			binaryWriter->Write(USER);

			// ��������� �������� �������� � �������� �����
			binaryWriter->Close();
			fileStream->Close();

		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}


	void SetCenter(Control^ back, Control^ control, int mode);

	Void auth::CheckLastEnter() {
		if (USER != "") {
			labelWelcome->Text += USER;
			SetCenter(pageWelcome, labelWelcome, 1);
			if (greeting) {
				pagesTransition->SelectTab(pageWelcome);
				animation_mode = 4;
				sec = 2;
			}
			else {
				animation_mode = 5;
				sec = 0;
			}
			timerTransition->Start();

		}
		else {
			pagesTransition->SelectTab(pageMain);
		}
	}

	Void auth::loadConfig() {
		Config^ config = Config::LoadConfig("config.xml");
		// ��������� �����

		// ��������������, ���� �����
		borderlessForm->BorderRadius = config->borderForm;
		borderlessForm->HasFormShadow = config->hasFormShadow;

		// �������������� ������
		buttonComeIn->BorderRadius = config->borderBtn;
		buttonRegister->BorderRadius = config->borderBtn;
		// �����������
		greeting = config->greeting;
		// ������������ ��� ��������������
		dragControl1->TransparentWhileDrag = config->dragTransparent;
		dragControl2->TransparentWhileDrag = config->dragTransparent;
		dragControl3->TransparentWhileDrag = config->dragTransparent;
		dragControlMain->TransparentWhileDrag = config->dragTransparent;
		dragControlMain2->TransparentWhileDrag = config->dragTransparent;
	}

	Void auth::auth_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Directory::Exists("logs")) {
			USER = ReadLogFile();
		}
		if (File::Exists("config.xml")) {
			loadConfig();
		}
		CheckLastEnter();

		SetCenter(panelMain, labelMain, 1);
		SetCenter(pageWelcome, labelWelcome, 1);
	}


	//����� - ��������, ��������
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

		this->Text = "PythonWave: �����������";
		labelMain->Text = this->Text;
		SetCenter(panelMain, labelMain, 1);
	}
	Void auth::buttonShowReg_Click(System::Object^ sender, System::EventArgs^ e) {
		pagesAuthReg->SelectTab(pageReg);

		this->Text = "PythonWave: �����������";
		labelMain->Text = this->Text;
		SetCenter(panelMain, labelMain, 1);
	}




	//�����������, �������
	Void auth::buttonRegister_Click(Object^ sender, EventArgs^ e) {
		// �������� �� ������ ����
		if (textBoxLogin1->Text == "") {

			textBoxLogin1->BorderColor = Color::Red;
			MessageWarning->Show("������� �����");
			return;
		}

		if (textBoxPassword1->Text == "" || textBoxPassword_1->Text == "") {
			textBoxPassword1->BorderColor = Color::Red;
			textBoxPassword_1->BorderColor = Color::Red;

			MessageWarning->Show("������� ������");
			return;
		}

		// �������� �� ���������� �������
		if (textBoxPassword1->Text != textBoxPassword_1->Text) {

			textBoxPassword1->BorderColor = Color::Red;
			textBoxPassword_1->BorderColor = Color::Red;

			MessageError->Show("������ �� ���������", "������");
			return;
		}

		// �������� �� ����������
		if (checkBoxTerms->Checked == false) {
			MessageError->Caption = "��������������";
			MessageError->Text = "��� ����������� ��� ����� �������� ������� �������������";
			MessageError->Show();
			return;
		}
		
		// �������� �� ������������� ��� ������ ������������
		if (Directory::Exists(textBoxLogin1->Text)) {
			MessageError->Caption = "��������������";
			MessageError->Text = "������������ ��� ����� ������� ��� ����������";
			MessageError->Show();
			return;
		}

		// ����������� � ������ ���� ��� ������� ���������
		panelMain->Visible = false;
		Register();
	}
	Void auth::Register() {
		// �������� ����� � ������ ������������ 
		String^ cliLogin = textBoxLogin1->Text;
		String^ cliPassword = textBoxPassword1->Text;

		// ��� ��������� ������ ������ ��� ��
		USER = cliLogin;
		labelWelcome->Text += cliLogin;
		SetCenter(pageWelcome, labelWelcome, 1);

		// ����������� �� � std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// ������� ����� � ���������� �������
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		Directory::CreateDirectory(folderPath);

		// ���� � ����� Password - data.bin
		String^ filePath = Path::Combine(folderPath, "data.bin");

		// �������� ������
		std::hash<std::string> hasher;
		size_t hashPassword = hasher(Password);

		// ��������� ���� ��� ������ � �������� ������
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
		BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

		// ���������� ��� � ����
		binaryWriter->Write(hashPassword);

		// ��������� �������� �������� � �������� �����
		binaryWriter->Close();
		fileStream->Close();

		animation_mode = 1;
		sec = 4;
		timerTransition->Start();
	}

	Void auth::linkLabelTerms_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		//��������� ������� �����������
		textBoxTerms->Visible = true;
		buttonCloseTerms->Visible = true;

		//���������� ����������� ���������
		textBoxTerms->BringToFront();
		buttonCloseTerms->BringToFront();
	}
	Void auth::buttonCloseTerms_Click(System::Object^ sender, System::EventArgs^ e) {
		//��������� ������� �����������
		textBoxTerms->Visible = false;
		buttonCloseTerms->Visible = false;
	}




	//����
	Void auth::buttonComeIn_Click(Object^ sender, EventArgs^ e) {
		if (textBoxLogin->Text == "") {
			textBoxLogin->BorderColor = Color::Red;
			MessageWarning->Show("������� �����");
			return;
		}

		if (textBoxPassword->Text == "") {
			textBoxPassword->BorderColor = Color::Red;
			MessageWarning->Show("������� ������");
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
		// �������� ����� � ������ ������������ 
		String^ cliLogin = textBoxLogin->Text;
		String^ cliPassword = textBoxPassword->Text;

		// ����������� �� � std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// ������� ���� � ����� Password - data.bin
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		String^ filePath = Path::Combine(folderPath, "data.bin");

		// ��������� ���������� �� ������������ � ��
		if (!Directory::Exists(folderPath)) {
			MessageError->Caption = "������";
			MessageError->Text = "������������ � ��������� ������� �� ����������";
			MessageError->Show();
			return false;
		}

		// �������� ��������� ������
		std::hash<std::string> hasher;
		size_t hashPasswordInput = hasher(Password);

		// ��������� ���� ��� ������ � �������� ������
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
		BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

		// ������ ������ �� �����
		size_t hashPasswordFile = binaryReader->ReadUInt64();

		// ��������� �������� �������� � �������� �����
		binaryReader->Close();
		fileStream->Close();

		// ���������� ���� �������
		if (hashPasswordInput == hashPasswordFile) {
			USER = cliLogin;
			return true; // ������ ���������
		}
		else {
			MessageError->Caption = "��������������";
			MessageError->Text = "������ �������� ������";
			MessageError->Show();
			return false; // ������ �� ���������
		}
	}

	//�������� �����������
	Void auth::timerTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		switch (animation_mode)
		{
		case 1:
			//�������� ��������� ������
			--sec;
			pagesTransition->SelectTab(pageWelcome);
			if (sec <= 0) {
				timerTransition->Stop();
				
				//�������� ��������� ������
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
			//������ �����������
			--sec;
			if (sec <= 0) {
				timerTransition->Stop();
				fadeEffect->SetAnimation("hide");
				fadeEffect = nullptr;
				authToProfile(USER);
			}
			break;
			//������ ����� c ������������
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
			//������ ����� ��� �����������
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
