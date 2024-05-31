#pragma once
#include <windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "mainForm.h"
#include "ClassFade.h"
#include "MyPython.h"


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
		const std::wstring& folderPathStr = wch;
		WIN32_FILE_ATTRIBUTE_DATA fileInfo;
		if (GetFileAttributesEx(folderPathStr.c_str(), GetFileExInfoStandard, &fileInfo)) {
			FILETIME creationTime = fileInfo.ftCreationTime;
			SYSTEMTIME systemTime;
			FileTimeToSystemTime(&creationTime, &systemTime);

			String^ creationDateString = String::Format("{0}.{1}.{2}",
				systemTime.wDay, systemTime.wMonth, systemTime.wYear);

			return creationDateString;
		}
		else {
			return "������ ��������� ����";
		}
	}
	Void mainForm::buttonUpload_Click(System::Object^ sender, System::EventArgs^ e) {
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

				// ������������� ����������� � pictureBoxUploadImage
				pictureProfile->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureProfile->Image = image;
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
				pictureProfile->Image->Save(savePath, imageFormat);
			}
		}
		catch (Exception^ ex) {
			MessageError->Show(ex->Message);
		}
	}

	Void mainForm::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageProfileEdit);
	}
	Void mainForm::ChangeData() {
	}

	Void mainForm::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		ClassMail^ EMAIL = gcnew ClassMail(this);

		securityCode = generateSecurityCode();
		String^ userMail = Convert::ToString(textBoxEmail->Text);
		String^ mail = "������������, ��� ��� �����������: " + Convert::ToString(securityCode);

		// ���� ����� ��� ����� ����������, �� ��������� ��������� ������
		if (IsValidEmail(userMail)) {
			if (EMAIL->SendEmail(userMail, "PythonWave: ��� ������������", mail)) {
				// ������� ����������� ��������� ���
				textBoxEmail->Enabled = false;
				buttonSendMail->Enabled = false;

				// ���� ����������� �������� ���
				textBoxCode->Enabled = true;
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
			if (securityCode == Convert::ToInt32(textBoxCode->Text)) {
				email_confirmed = true;

				// ������� ����������� ��������� ���
				textBoxCode->Enabled = false;
				buttonCheckCode->Enabled = false;

				// ����������� �� �������� ���������
				pictureBoxCheckCode->Visible = true;

				// ������� ����������� ��������� ����� ��������
				timerReMail->Stop();
				labelTimer->Visible = false;
				linkReMail->Visible = false;
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
