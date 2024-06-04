#pragma once
#include <windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "mainForm.h"
#include "ClassFade.h"
#include "MyPython.h"

using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace System;


	// Data
	void mainForm::DataLoad() {
		String^ fileUserEmail = User + "//userData.bin";
		String^ fileUserBirth = User + "//userBirth.bin";
		String^ fileUserSex = User + "//userSex.bin";
		String^ fileUserName = User + "//userName.bin";
		String^ fileUserSurname = User + "//userSurname.bin";

		UserEmail = readBinaryFile(fileUserEmail);
		UserBirth = readBinaryFile(fileUserBirth);
		UserSex = readBinaryFile(fileUserSex);
		UserName = readBinaryFile(fileUserName);


		String^ pathToAvatarPng = User + "//avatar.png";
		String^ pathToAvatarJpg = User + "//avatar.jpg";

		if (File::Exists(fileUserSurname)) {
			UserSurname = readBinaryFile(fileUserSurname);
		}

		if (File::Exists(pathToAvatarJpg)) {
			pictureProfile->ImageLocation = pathToAvatarJpg;
			pictureUserBar->ImageLocation = pathToAvatarJpg;
			pictureProfileEdit->ImageLocation = pathToAvatarJpg;
		}
		else if (File::Exists(pathToAvatarPng)) {
			pictureProfile->ImageLocation = pathToAvatarPng;
			pictureUserBar->ImageLocation = pathToAvatarPng;
			pictureProfileEdit->ImageLocation = pathToAvatarPng;
		}

		lblLogin->Text = User;
		lblName->Text = "���: " + UserName;
		lblSurname->Text = "�������: " + UserSurname;
		lblSex->Text = "���: " + UserSex;
		lblBirth->Text = "���� ��������: " + UserBirth;
		lblEmail->Text = "Email: " + UserEmail;
		labelNameBar->Text = UserName;
		lblRegDate->Text = "���� �����������: " + GetFolderCreationDate(User);

		textBoxUserName->Text = UserName;
		textBoxUserSurname->Text = UserSurname;
		textBoxEmail->Text = UserEmail;

		lblSexEdit->Text = "���:\n" + UserSex;
		lblBirthEdit->Text = "���� ��������:\n" + UserBirth;
	}
	void mainForm::DataChange() {
		// Local
		UserName = textBoxUserName->Text;
		UserSurname = textBoxUserSurname->Text;
		UserEmail = textBoxEmail->Text;

		lblName->Text = "���: " + UserName;
		lblSurname->Text = "�������: " + UserSurname;
		lblEmail->Text = "Email: " + UserEmail;
		
		labelNameBar->Text = UserName;
	}

	void mainForm::DataSave() {
		String^ fileUserEmail = User + "//userData.bin";
		String^ fileUserName = User + "//userName.bin";
		String^ fileUserSurname = User + "//userSurname.bin";

		writeBinaryFile(fileUserEmail, UserEmail);
		writeBinaryFile(fileUserName, UserName);
		writeBinaryFile(fileUserSurname, UserSurname);
	}
	void mainForm::cfgLoad() {
		Config^ config = config->LoadConfig();

		// ����������
		borderlessForm->BorderRadius = config->borderForm;
		borderlessForm->HasFormShadow = config->hasFormShadow;
		dragMain->TransparentWhileDrag = config->dragTransparent;
		
		greeting = config->greeting;
		borderBtn = config->borderBtn;
		volume = config->volume;
		alwaysHideMenu = config->alwaysHideMenu;
		borderForm = config->borderForm;
		formShadow = config->hasFormShadow;
		transparentWhileDrag = config->dragTransparent;
		PythonWaveStyle = config->PythonWaveStyle;

		// �������� ��������
		TrackBorderBtn->Value = borderBtn;
		TrackBorderForm->Value = borderForm;
		TrackVolume->Value = volume;
		
		labelBorderBtn->Text = Convert::ToString(borderBtn);
		labelBorderForm->Text = Convert::ToString(borderForm);
		labelVolume->Text = Convert::ToString(volume);

		toggleAlwaysHide->Checked = alwaysHideMenu;
		toggleGreeting->Checked = greeting;
		toggleStyle->Checked = PythonWaveStyle;
		toggleShadows->Checked = formShadow;
		toggleTransparent->Checked = transparentWhileDrag;

		RegisterMouseDownEvent(this, alwaysHideMenu);
		PythonWaveStyleState(PythonWaveStyle);
	}

	void mainForm::cfgSave() {
		Config^ config = gcnew Config();
		config->alwaysHideMenu = alwaysHideMenu;
		config->borderBtn = borderBtn;
		config->borderForm = borderForm;
		config->hasFormShadow = formShadow;
		config->dragTransparent = transparentWhileDrag;
		config->PythonWaveStyle = PythonWaveStyle;
		config->greeting = greeting;
		config->volume = volume;

		config->SaveConfig();
	}

	// Form, Menu
	void mainForm::RegisterMouseDownEvent(Control^ parent, bool enable)
	{

		if (enable)
		{
			// ������������ ���������� ��� ������ ��������
			parent->MouseDown += gcnew MouseEventHandler(this, &mainForm::Form_MouseDown);
		}
		else
		{
			// �������� ����������� �����������
			parent->MouseDown -= gcnew MouseEventHandler(this, &mainForm::Form_MouseDown);
		}

		// ���������� ������������/�������� ����������� ��� ���� �������� ���������
		for each (Control ^ child in parent->Controls)
		{
			RegisterMouseDownEvent(child, enable);
		}
	}
	Void mainForm::main_Load(System::Object^ sender, System::EventArgs^ e) {
		DataLoad();
		cfgLoad();
		menu = false;

		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("in");

		SetCenter(panelProfileData, lblLogin, 1);
	}
	Void mainForm::btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		menu == false ? menu = true : menu = false;
		timerMenu->Start();
	}
	Void mainForm::btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fade = gcnew ClassFade(this);
		fade->SetAnimation("close");
	}
	Void mainForm::btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fade = gcnew ClassFade(this);
		fade->SetAnimation("minimize");
	}
	Void mainForm::btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ executablePath = Application::ExecutablePath;

		Process::Start(executablePath);

		// ��������� remember me
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

	// �������� �������
	Void mainForm::guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPython python;
		String^ code = richTextBox1->Text;
		String^ result = python.Start(User, code);
		MessageBox::Show(User, code);
		richTextBox2->Text += result;
	}


	// �������
	int secondsLeftt = 30;

	Void mainForm::btnCancelChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckSave())
			Pages->SelectTab(pageProfile);
	}

	String^ mainForm::GetFolderCreationDate(String^ folderPath) {
		pin_ptr<const wchar_t> wch = PtrToStringChars(folderPath);
		const std::wstring folderPathStr(wch);
		WIN32_FILE_ATTRIBUTE_DATA fileInfo;
		if (GetFileAttributesEx(folderPathStr.c_str(), GetFileExInfoStandard, &fileInfo)) {
			FILETIME creationTime = fileInfo.ftCreationTime;
			SYSTEMTIME systemTime;
			FileTimeToSystemTime(&creationTime, &systemTime);

			array<String^>^ months = gcnew array<String^> {
				"������", "�������", "�����", "������", "���", "����",
					"����", "�������", "��������", "�������", "������", "�������"
			};

			String^ creationDateString = String::Format("{0} {1} {2}",
				systemTime.wDay, months[systemTime.wMonth - 1], systemTime.wYear);

			return creationDateString;
		}
		else {
			return "������ ��������� ����";
		}
	}
	Void mainForm::buttonUploadImage_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ��������� OpenFileDialog
			openFileDialog1->Filter = "Image Files (*.jpg;*.png)|*.jpg;*.png";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;

			// ���������� ������ ������ �����
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// �������� ���� � ���������� �����
				String^ filePath = openFileDialog1->FileName;

				// ������� ������ Image �� ���������� �����
				Drawing::Image^ image = System::Drawing::Image::FromFile(filePath);

				// ������������� �����������
				pictureProfile->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureProfile->Image = image;
				pictureProfileEdit->Image = image;
				pictureUserBar->Image = image;


				// ���������� ������ ������������ �����������
				Drawing::Imaging::ImageFormat^ imageFormat = image->RawFormat;

				// ����, �� �������� ��������� �����������
				String^ savePath = User + "\\avatar";

				// ��������� �����������, �������� ���� ������
				if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Jpeg)) {
					savePath += ".jpg";
					image->Save(savePath, System::Drawing::Imaging::ImageFormat::Jpeg);
				}
				else if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Png)) {
					savePath += ".png";
					image->Save(savePath, System::Drawing::Imaging::ImageFormat::Png);
				}
				// ��������� �����������
				pictureProfileEdit->Image->Save(savePath, imageFormat);

			}
		}
		catch (Exception^ ex) {
			MessageError->Show(ex->Message);
		}
	}
	Void mainForm::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageProfileEdit);
	}

	Void mainForm::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxEmail->Text == UserEmail) {
			MessageWarning->Show("���� Email ��� �������� � ������ �������");
			return;
		}

		ClassMail^ EMAIL = gcnew ClassMail(this);

		String^ userMail = UserEmail;
		String^ userMailNew = Convert::ToString(textBoxEmail->Text);

		// ��������� ���� ���� ���
		securityCode = generateSecurityCode();
		securityCodeNew = generateSecurityCode();

		String^ mail = "������������, ��� ��� ��� ����� �����: " + Convert::ToString(securityCode);
		String^ mailNew = "������������, ��� ��� ��� ������������� �����: " + Convert::ToString(securityCodeNew);

		// ���� ����� ��� ����� ����������, �� ��������� ��������� ������
		if (IsValidEmail(userMailNew)) {
			if (EMAIL->SendEmail(userMail, "PythonWave: ����� �����", mail) && EMAIL->SendEmail(userMailNew, "PythonWave: ������������� ����� �����", mailNew)) {
				// ������� ����������� ��������� ���
				textBoxEmail->Enabled = false;
				buttonSendMail->Enabled = false;

				// ���� ����������� �������� ���
				textBoxCode->Enabled = true;
				textBoxCodeNew->Enabled = true;
				buttonCheckCode->Enabled = true;

				// ����������� �� �������� �������� ��������
				pictureBoxCheckMail->Visible = true;

				// ��������� ������ �� ���� ��������
				labelTimer->Visible = true;
				timerReMail->Start();
			}
		}
		else {
			MessageError->Caption = "������ �� ���� ����������";
			MessageError->Text = "������� ���������� ����� ��. �����";
			MessageError->Show();

			textBoxEmail->BorderColor = Color::Red;
			textBoxEmail->Clear();
		}
	}
	Void mainForm::buttonCheckCode_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (securityCode == Convert::ToInt32(textBoxCode->Text) && securityCodeNew == Convert::ToInt32(textBoxCodeNew->Text)) {
				email_confirmed = true;

				// ������� ����������� ��������� ���
				textBoxCode->Enabled = false;
				textBoxCodeNew->Enabled = false;
				buttonCheckCode->Enabled = false;

				// ����������� �� �������� ���������
				pictureBoxCheckCode->Visible = true;

				// ������� ����������� ��������� ����� ��������
				timerReMail->Stop();
				labelTimer->Visible = false;
				linkReMail->Visible = false;

				// ����� ��������
				MessageInfo->Show("����� ��������", "�������");
			}
			else {
				MessageError->Text = "�������� ���";
				MessageError->Show();
			}
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}

	}
	Void mainForm::timerEmail_Tick(System::Object^ sender, System::EventArgs^ e) {
		secondsLeftt--;
		if (secondsLeftt <= 0)
		{
			secondsLeftt = 30;
			timerReMail->Stop();

			labelTimer->Visible = false;

			linkReMail->Visible = true;
			linkReMail->Enabled = true;
		}
		else
		{
			labelTimer->Text = "��������� �������� ����� " + secondsLeftt.ToString() + " ������";
		}
	}
	Void mainForm::linkReMail_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		enableMail(true);
		email_confirmed = false;
	}

	Void mainForm::btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ filePath = User + "//data.bin";
			size_t storedHashPassword = readPassword(filePath);

			if (storedHashPassword == 0) {
				MessageError->Show("�� ������� ��������� ������ ������ �� �����");
				return;
			}

			// �������������� ���������� ������� ������
			String^ enteredOldPass = textBoxPassOld->Text;
			pin_ptr<const wchar_t> wchEntered = PtrToStringChars(enteredOldPass);
			std::wstring wstrEntered(wchEntered);
			std::string strEntered(wstrEntered.begin(), wstrEntered.end());

			std::hash<std::string> hasher;
			size_t enteredHashPassword = hasher(strEntered);

			if (enteredHashPassword != storedHashPassword) {
				MessageError->Show("�������� ������ ������");
				return;
			}

			// �������������� ������ ������
			String^ newPass = textBoxPassNew->Text;
			pin_ptr<const wchar_t> wchNewPass = PtrToStringChars(newPass);
			std::wstring wstrNewPass(wchNewPass);
			std::string strNewPass(wstrNewPass.begin(), wstrNewPass.end());

			size_t newHashPassword = hasher(strNewPass);

			// ������ ������ ���� � ����
			try {
				FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
				BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

				binaryWriter->Write(static_cast<UInt64>(newHashPassword));

				binaryWriter->Close();
				fileStream->Close();
			}
			catch (Exception^ e) {
				// ��������� ����������
				MessageError->Show("������ ������ �����: " + e->Message);
			}


			MessageInfo->Show("������ ������� �������", "�����������");

			// ��������� remember me
			if (Directory::Exists("logs")) {
				try {
					Directory::Delete("logs", true);
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message);
				}
			}

		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}


	void mainForm::DeleteDirectory(String^ folderPath) {
		try {
			DirectoryInfo^ directory = gcnew DirectoryInfo(folderPath);
			if (directory->Exists) {
				// ������� ����� � ��� �� ���������� 
				directory->Delete(true);
			}
			else {
				MessageError->Show("�������� �� ������");
			}
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}

	Void mainForm::linkREMOVEACC_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		if (textBoxPassOld->Text == "") {
			MessageInfo->Show("������� ��� ������ � ���� '������ ������'");
			return;
		}
		
		String^ enteredOldPass = textBoxPassOld->Text;
		
		pin_ptr<const wchar_t> wchEntered = PtrToStringChars(enteredOldPass);
		std::wstring wstrEntered(wchEntered);
		std::string strEntered(wstrEntered.begin(), wstrEntered.end());

		String^ filePath = User + "//data.bin";
		std::hash<std::string> hasher;
		
		size_t enteredHashPassword = hasher(strEntered);
		size_t storedHashPassword = readPassword(filePath);

		if (enteredHashPassword != storedHashPassword) {
			MessageError->Show("�������� ������");
			return;
		}

		Forms::DialogResult result = MessageQuestion->Show("��� ������� ����� ������", "�� �������?");
		if (result == Forms::DialogResult::Yes) {
			DeleteDirectory(User);
			MessageDefault->Show("�� ������ ������, " + UserName + "!", "������� ������");

			// ��������� remember me
			if (Directory::Exists("logs")) {
				try {
					Directory::Delete("logs", true);
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message);
				}
			}

			ClassFade^ Fade = gcnew ClassFade(this);
			Fade->SetAnimation("close");
		}

	}
	
	Void mainForm::btnProfileSave_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBoxUserName->TextLength < 3) {
			textBoxUserName->BorderColor = Color::Red;
			if (textBoxUserSurname->TextLength < 3) {
				textBoxUserSurname->BorderColor = Color::Red;
			}

			MessageWarning->Show("������� ������ ��� � �������");
			return;
		}

		if (!email_confirmed) {
			MessageWarning->Show("�� ����� ����� Email, ����������� ��� ��� ������� ������");
			textBoxEmail->BorderColor = Color::Red;
			return;
		}

		DataChange();
		DataSave();
		MessageInfo->Show("���������", "�������");
	}

	Boolean mainForm::CheckSave() {
		if (isProfileSaved) {
			return true;
		}
		else {
			MessageWarning->Buttons = UI2::WinForms::MessageDialogButtons::YesNo;
			Forms::DialogResult result = MessageWarning->Show("� ��� �������� ������������� ���������", "������������� ������ �������?");
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
	
	Void mainForm::SetProfileDefaults() {
		textBoxUserName->Text = UserName;
		textBoxUserSurname->Text = UserSurname;
		textBoxEmail->Text = UserEmail;

		textBoxCode->Enabled = false;
		textBoxCodeNew->Enabled = false;
		buttonCheckCode->Enabled = false;
	}
