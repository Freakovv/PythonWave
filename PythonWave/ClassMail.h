#pragma once
#include <Windows.h>
#include <iostream>

// Формы
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;

// Отправка письма
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Security;
using namespace System::Text;

ref class ClassMail
{
private:
	// Ссылка формы
	Form^ form;
	//Для показа ошибки
	Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;

public:
	ClassMail(Form^ f) : form(f) {
		MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
		MessageError->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
		MessageError->Caption = L"Ошибка";
		MessageError->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
		MessageError->Parent = form;
		MessageError->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
		MessageError->Text = nullptr;
	}

	// Функция для отправки письма
	bool SendEmail(String^ to, String^ subject, String^ body) {
		try {
			// Настройка почты
			MailMessage^ mail = gcnew MailMessage("pythonwaveorg@mail.ru", to, subject, body);
			SmtpClient^ client = gcnew SmtpClient("smtp.mail.ru");

			//Настройка клиента
			client->Port = 587;
			client->Credentials = gcnew NetworkCredential("pythonwaveorg@mail.ru", "UN73qgPCSqmSWg7qpUXT");
			client->EnableSsl = true;

			client->Send(mail);
			return true;
		}
		catch (Exception^ e) {
			// Исключение, вывод ошибки
			MessageError->Show(e->Message);
			return false;
		}
	}
};
