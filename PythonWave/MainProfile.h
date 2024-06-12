#pragma once
#include "mainForm.h"

using namespace PythonWave;
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

int secondsLeftt = 30;

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

Void mainForm::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
	Pages->SelectTab(pageProfileEdit);
}
Void mainForm::btnCancelChanges_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CheckSave())
		Pages->SelectTab(pageProfile);
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