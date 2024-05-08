#pragma once
#include "libraries.h"
using namespace PythonWave;
using namespace System;
using namespace System::IO;

		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									CreateProfile.h                                      //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	//
	// ��������
	// 
	// 
	//
	// Bar-������, ������ �����������
	//
	Void CreateProfile::ButtonMinimize_Click(Object^ sender, EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	Void CreateProfile::ButtonExit_Click(Object^ sender, EventArgs^ e) {
		Windows::Forms::DialogResult result = MessageDialogExit->Show();
		if (result == Windows::Forms::DialogResult::Yes) {
			this->Close();
			fade_mode = 2;
			fadetimer->Start();
		}

	}

	Void CreateProfile::buttonQuestion_Click(Object^ sender, EventArgs^ e) {
		MessageDialogQuestion->Show();
	}

	//
	// ������ �����
	//

	// ���������� ������� ������ �������� ������
	Void CreateProfile::buttonSendCode_Click(Object^ sender, EventArgs^ e) {
		labelSendStatus->Text = "� ��������..";
		labelSendStatus->Visible = true;
		String^ userMail = Convert::ToString(textBoxMail->Text);
		if (IsValidEmail(userMail)) {
			String^ mail = "������������, ��� ��� �����������:" + Convert::ToString(SecurityCode);
			SendEmail(userMail, "PythonWave: ��� ������������", mail);
			//���������� ����� � ������ �������
			textBoxMail->Enabled = false;
			buttonSendCode->Enabled = false;
			timer->Start();
		}
		else {
			textBoxMail->BorderColor = Color::Red;
			MessageErrorSend->Show();
			textBoxMail->Clear();
			labelSendStatus->Text = "������";
		}
	}
	// ������� ��� �������� ������
	void CreateProfile::SendEmail(String^ to, String^ subject, String^ body) {
		try {
			// ����������� �������� ������
			MailMessage^ mail = gcnew MailMessage("pythonwaveorg@mail.ru", to, subject, body);
			SmtpClient^ client = gcnew SmtpClient("smtp.mail.ru");

			//��������� �������
			client->Port = 587;
			client->Credentials = gcnew NetworkCredential("pythonwaveorg@mail.ru", "UN73qgPCSqmSWg7qpUXT");
			client->EnableSsl = true;
			client->Send(mail);

			// ����� �� �������� ������
			labelSendStatus->Text = "�������";

			//����� ������ ��� ����� ���� ������������ 
			textBoxSecurityCode->Enabled = true;
			buttonValidateCode->Enabled = true;
			labelValidateStatus->Visible = true;

			// ������ �� ��������� ��������
			labelTimer->Visible = true;
		}
		catch (Exception^ e) {
			// ����������, ����� ������ (������������ ��� ������ �����, ��������� Exception)
			labelSendStatus->Text = "������";
			MessageBox::Show(e->Message);
		}
	}

	// ���������� ������� ������ �������� ���� ������������
	Void CreateProfile::buttonValidateCode_Click(Object^ sender, EventArgs^ e) {
		try {
			if (SecurityCode == Convert::ToInt32(textBoxSecurityCode->Text)) {
				labelValidateStatus->Visible = true;
				labelValidateStatus->Text = "�������";
				textBoxSecurityCode->Enabled = false;
				buttonSendCode->Enabled = false;
			}
			else {
				MessageErrorValidate->Show();
			}
		}
		catch (Exception^ e) {
			MessageErrorValidate->Text = e->ToString();
			MessageErrorValidate->Show();
			MessageErrorValidate->Text = "";
		}
	}

	//
	// Load
	//
	Void CreateProfile::CreateProfile_Load(Object^ sender, EventArgs^ e) {
		//ButtonMinimize->BringToFront();
	}
	//
	// ����� �����, ������
	//
	Void CreateProfile::textBoxMail_Click(Object^ sender, EventArgs^ e) {
		textBoxMail->BorderColor = Color::White;
	}


	//
	// �������, ������
	//
	// ���������� ������� ������� �� ��������� �������� ������
	Void CreateProfile::timer_Tick(Object^ sender, EventArgs^ e) {
		secondsLeft--;
		if (secondsLeft <= 0)
		{
			timer->Stop();
			secondsLeft = 30;

			//visible
			labelTimer->Visible = false;
			linkReMail->Visible = true;
		}
		else
		{
			// ��������� ����������� ���������� ������
			labelTimer->Text = "��������� �������� ����� " + secondsLeft.ToString() + " ������";
		}
	}

	// ���������� ������� �����������
	Void CreateProfile::linkReMail_LinkClicked(Object^ sender, Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		textBoxMail->Enabled = true;
		textBoxSecurityCode->Visible = false;

		buttonSendCode->Enabled = true;
		buttonValidateCode->Visible = false;

		linkReMail->Visible = false;
		labelSendStatus->Visible = false;
		labelValidateStatus->Visible = false;
	}


	//
	// ������ �������
	//

	// �������� ������������ ���������� email
	bool CreateProfile::IsValidEmail(String^ email) {
		// ��������� ������� �������� '@' � '.'
		return email->Contains("@") && email->Contains(".");
	}

	

	// ������� ��� ��������� ����
	int CreateProfile::generateSecurityCode() {
		srand(time(NULL));
		int Code = rand() % 900000 + 100000;
		return Code;
	}







		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									login.h												 //
		   ////////////////////////////////////////////////////////////////////////////////////////////





	//
	// Bar-������, ������ �����������
	//
	Void login::ExitWindow_click(Object^ sender, EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	Void login::MinimizeWindow_click(Object^ sender, EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	Void login::buttonQuestion_click(Object^ sender, EventArgs^ e) {
		//����� ���������� �� ����� ���������� ������
		MessageOption->Text = "��� ����� ��������� ��������� ���� ������ ��� ����������� �����";
		MessageOption->Show();
	}


	//
	// ������ �����
	//

	// ��������� ������� �����������
	Void login::linkLabel1_LinkClicked(Object^ sender, Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//��������� ������� �����������
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//���������� ����������� ���������
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}

	// ��������� ������� �����������, ���������� � �������������
	Void login::buttonCloseTerms(Object^ sender, EventArgs^ e) {
		//��������� ������� �����������
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//���������� � ��������, ����� ��������
		Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
		}
	}
	
	// ������� ��� ������ ��������� �����������/�����������
	Void login::ShowRegister(bool show) {
		if (show) {
			panelAuthorize->Visible = false;
			panelRegister->Visible = true;
		}
		else {
			panelAuthorize->Visible = true;
			panelRegister->Visible = false;
		}
	}

	// ���������� ������� ������ "�����������"
	Void login::buttonShowAuthorize_Click(Object^ sender, EventArgs^ e) {
		ShowRegister(false);
	}

	// ���������� ������� ������ "�����������"
	Void login::buttonShowRegister_Click(Object^ sender, EventArgs^ e) {
		ShowRegister(true);
	}

	// �����������
	Void login::buttonRegister_Click(Object^ sender, EventArgs^ e) {
		
		// �������� �� ������ ����
		if (textBoxLoginReg->Text == "") {
			
			textBoxLoginReg->BorderColor = Color::Red;
			
			MessageError->Text = "������� �����";
			MessageError->Show();
			return;
		}

		if (textBoxPasswordReg->Text == "" || textBoxPasswordReg2->Text == "") {
			textBoxPasswordReg->BorderColor = Color::Red;
			textBoxPasswordReg2->BorderColor = Color::Red;
			
			MessageError->Text = "������� ������";
			MessageError->Show();
			return;
		}
		
		// �������� �� ���������� �������
		if (textBoxPasswordReg->Text != textBoxPasswordReg2->Text) {
		
			textBoxPasswordReg->BorderColor = Color::Red;
			textBoxPasswordReg2->BorderColor = Color::Red;
			
			MessageError->Text = "������ �� ���������";
			MessageError->Show();
			return;
		}
		

		Register();

	}

	Void login::Register() {
		// �������� ����� � ������ ������������ 
		String^ cliLogin = textBoxLoginReg->Text;
		String^ cliPassword = textBoxPasswordReg->Text;

		// ����������� �� � std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// ������� ����� � ���������� �������
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		Directory::CreateDirectory(folderPath);

		// ���� � ����� Password.bin
		String^ filePath = Path::Combine(folderPath, "Password.bin");

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

	}

	Boolean login::ReadPassword() {
		// �������� ����� � ������ ������������ 
		String^ cliLogin = textBoxLoginReg->Text;
		String^ cliPassword = textBoxPasswordReg->Text;

		// ����������� �� � std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// ������� ���� � ����� Password.bin
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		String^ filePath = Path::Combine(folderPath, "Password.bin");

		// ��������� ���������� �� ����
		if (!File::Exists(folderPath)) {
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
			return true; // ������ ���������
		}
		else {
			MessageError->Text = "������ �������� ������";
			MessageError->Show();
			return false; // ������ �� ���������
		}
	}

	Void DeleteDirectory(String^ folderPath) {
		DirectoryInfo^ directory = gcnew DirectoryInfo(folderPath);
		if (directory->Exists) {
			// ������� ����� � ��� �� ����������
			directory->Delete(true); 
			MessageBox::Show("����� �������");
		}
		else {
			MessageBox::Show("�� ������� ������� �����");
		}
	}
	//����
	Void login::buttonComeIn_Click(Object^ sender, EventArgs^ e) {
		if (ReadPassword()) {
			User = textBoxLogin->Text;
			labelWelcome->Text += User + "!";
			bunifuPages->SelectTab(tabPage2);
		}
	}

	//��������� �������������� ���������
	Void login::SetLocations() {
		//��������� ���������� ��������� ���������
		textBoxTerms->Location = Drawing::Point(5, 5);
		panelRegister->Location = Drawing::Point(4, 47);
		panelAuthorize->Location = Drawing::Point(4, 47);
	}