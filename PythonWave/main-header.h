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
		if (panelMenu->Size == Drawing::Size(80, 820)) {
			menu = false;
		}
		else if (panelMenu->Size == Drawing::Size(250, 820)) {
			menu = true;
		}

		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("in");
		Fade = nullptr;

		SetCenter(panelProfileData, lblLogin, 1);
		RegisterMouseDownEvent(this, alwaysHideMenu);
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

	Void mainForm::buttonUpload_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// ��������� OpenFileDialog
			openFileDialog1->Filter = "Image Files (*.jpg;*.png;*.bmp)|*.jpg;*.png;*.bmp";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;

			// ���������� ������ ������ �����
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// �������� ���� � ���������� �����
				String^ filePath = openFileDialog1->FileName;

				// ������� ������ Image �� ���������� �����
				Drawing::Image^ image = Image::FromFile(filePath);

				// ������������� ����������� � pictureBoxUploadImage
				pictureProfile->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureProfile->Image = image;
				pictureProfileEdit->Image = image;
				pictureUserBar->Image = image;

				// ����, �� �������� ��������� �����������
				SavePathIMG = User + "\\avatar";

				SaveImage();
			}
		}
		catch (Exception^ ex) {
			MessageError->Show(ex->Message);
		}
	}
	Void mainForm::SaveImage() {
		try
		{
			ImageFormat^ format;

			// ����������� ������� ����������� �� ���������� �����
			if (SavePathIMG->EndsWith(".jpg"))
				format = ImageFormat::Jpeg;
			else if (SavePathIMG->EndsWith(".png"))
				format = ImageFormat::Png;
			else if (SavePathIMG->EndsWith(".bmp"))
				format = ImageFormat::Bmp;
			else
				format = ImageFormat::Jpeg; // �� ��������� JPEG

			// ���������� �����������
			pictureProfileEdit->Image->Save(SavePathIMG, format);
			MessageBox::Show("����������� ���������!", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("������ ��� ���������� �����������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	Void mainForm::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageProfileEdit);
	}
	Void mainForm::ChangeData() {
	}

	Void mainForm::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
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


			MessageInfo->Show("������ �������", "�������");

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
		String^ NEW_NAME;
		String^ NEW_SURNAME;
		String^ NEW_MAIL;
		
	}
