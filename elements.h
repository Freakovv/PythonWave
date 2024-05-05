#pragma once
#include "libraries.h"

		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									CreateProfile.h                                      //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	//
	// ��������
	// 
	void validate() {

	}
	//
	// Bar-������, ������ �����������
	//
	System::Void CreateProfile::ButtonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	System::Void CreateProfile::ButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageDialogExit->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
			fade_mode = 2;
			fadetimer->Start();
		}

	}

	System::Void CreateProfile::buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageDialogQuestion->Show();
	}

	//
	// ������ �����
	//

	// ���������� ������� ������ �������� ������
	System::Void CreateProfile::buttonSendCode_Click(System::Object^ sender, System::EventArgs^ e) {
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
	System::Void CreateProfile::buttonValidateCode_Click(System::Object^ sender, System::EventArgs^ e) {
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
	System::Void CreateProfile::CreateProfile_Load(System::Object^ sender, System::EventArgs^ e) {
		//ButtonMinimize->BringToFront();
	}
	//
	// ����� �����, ������
	//
	System::Void CreateProfile::textBoxMail_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxMail->BorderColor = Color::White;
	}


	//
	// �������, ������
	//
	// ���������� ������� ������� �� ��������� �������� ������
	System::Void CreateProfile::timer_Tick(System::Object^ sender, System::EventArgs^ e) {
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
	System::Void CreateProfile::linkReMail_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
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
	System::Void login::ExitWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	System::Void login::MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	System::Void login::buttonQuestion_click(System::Object^ sender, System::EventArgs^ e) {
		//����� ���������� �� ����� ���������� ������
		MessageOption->Text = "��� ����� ��������� ��������� ���� ������ ��� ����������� �����";
		MessageOption->Show();
	}


	//
	// ������ �����
	//

	// ��������� ������� �����������
	System::Void login::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//��������� ������� �����������
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//���������� ����������� ���������
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}

	// ��������� ������� �����������, ���������� � �������������
	System::Void login::buttonCloseTerms(System::Object^ sender, System::EventArgs^ e) {
		//��������� ������� �����������
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//���������� � ��������, ����� ��������
		System::Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
		}
	}
	
	// ������� ��� ������ ��������� �����������/�����������
	System::Void login::ShowRegister(bool show) {
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
	System::Void login::buttonShowAuthorize_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(false);
	}

	// ���������� ������� ������ "�����������"
	System::Void login::buttonShowRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(true);
	}

	// �����������
	System::Void login::buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	//����
	System::Void login::buttonComeIn_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	//��������� �������������� ���������
	System::Void login::SetLocations() {
		//��������� ���������� ��������� ���������
		textBoxTerms->Location = System::Drawing::Point(5, 5);
		panelRegister->Location = System::Drawing::Point(4, 47);
		panelAuthorize->Location = System::Drawing::Point(4, 47);
	}