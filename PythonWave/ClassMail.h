#pragma once
#include <Windows.h>
#include <iostream>
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Security;
using namespace System::Text;
ref class ClassMail
{
private:
	Form^ form;
	Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;
public:
	ClassMail(Form^ f) : form(f) {
		MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
		MessageError->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
		MessageError->Caption = L"Îøèáêà";
		MessageError->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
		MessageError->Parent = form;
		MessageError->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
		MessageError->Text = nullptr;
	}
	bool SendEmail(String^ to, String^ subject, String^ body) {
		try {
			MailMessage^ mail = gcnew MailMessage("pythonwaveorg@mail.ru", to, subject, body);
			SmtpClient^ client = gcnew SmtpClient("smtp.mail.ru");
			client->Port = 587;
			client->Credentials = gcnew NetworkCredential("pythonwaveorg@mail.ru", "UN73qgPCSqmSWg7qpUXT");
			client->EnableSsl = true;
			client->Send(mail);
			return true;
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
			return false;
		}
	}
};
