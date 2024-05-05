#pragma once
#include "libraries.h"

		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									CreateProfile.h                                      //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	//
	// Проверки
	// 
	void validate() {

	}
	//
	// Bar-кнопки, кнопки справочники
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
	// Кнопки формы
	//

	// Обработчик события кнопки отправки письма
	System::Void CreateProfile::buttonSendCode_Click(System::Object^ sender, System::EventArgs^ e) {
		labelSendStatus->Text = "В процессе..";
		labelSendStatus->Visible = true;
		String^ userMail = Convert::ToString(textBoxMail->Text);
		if (IsValidEmail(userMail)) {
			String^ mail = "Здравствуйте, ваш код регистрации:" + Convert::ToString(SecurityCode);
			SendEmail(userMail, "PythonWave: Код безопасности", mail);
			//Выключение ввода и отсчет таймера
			textBoxMail->Enabled = false;
			buttonSendCode->Enabled = false;
			timer->Start();
		}
		else {
			textBoxMail->BorderColor = Color::Red;
			MessageErrorSend->Show();
			textBoxMail->Clear();
			labelSendStatus->Text = "Ошибка";
		}
	}
	// Функция для отправки письма
	void CreateProfile::SendEmail(String^ to, String^ subject, String^ body) {
		try {
			// Стандартная отправка письма
			MailMessage^ mail = gcnew MailMessage("pythonwaveorg@mail.ru", to, subject, body);
			SmtpClient^ client = gcnew SmtpClient("smtp.mail.ru");

			//Настройка клиента
			client->Port = 587;
			client->Credentials = gcnew NetworkCredential("pythonwaveorg@mail.ru", "UN73qgPCSqmSWg7qpUXT");
			client->EnableSsl = true;
			client->Send(mail);

			// Отчет об отправке письма
			labelSendStatus->Text = "Успешно";

			//Показ кнопок для ввода кода безопасности 
			textBoxSecurityCode->Enabled = true;
			buttonValidateCode->Enabled = true;
			labelValidateStatus->Visible = true;

			// Отсчет до следующей отправки
			labelTimer->Visible = true;
		}
		catch (Exception^ e) {
			// Исключение, вывод ошибки (пользователь мог ввести текст, использую Exception)
			labelSendStatus->Text = "Ошибка";
			MessageBox::Show(e->Message);
		}
	}

	// Обработчик события кнопки проверки кода безопасности
	System::Void CreateProfile::buttonValidateCode_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (SecurityCode == Convert::ToInt32(textBoxSecurityCode->Text)) {
				labelValidateStatus->Visible = true;
				labelValidateStatus->Text = "Успешно";
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
	// Текст боксы, визуал
	//
	System::Void CreateProfile::textBoxMail_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxMail->BorderColor = Color::White;
	}


	//
	// Таймеры, визуал
	//
	// Обработчик события таймера на повторную отправку письма
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
			// Обновляем отображение оставшихся секунд
			labelTimer->Text = "Отправить повторно через " + secondsLeft.ToString() + " секунд";
		}
	}

	// Обработчик события гиперссылки
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
	// Кастом функции
	//

	// Проверка корректности введенного email
	bool CreateProfile::IsValidEmail(String^ email) {
		// Проверяем наличие символов '@' и '.'
		return email->Contains("@") && email->Contains(".");
	}

	

	// Функция для генерации кода
	int CreateProfile::generateSecurityCode() {
		srand(time(NULL));
		int Code = rand() % 900000 + 100000;
		return Code;
	}







		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									login.h												 //
		   ////////////////////////////////////////////////////////////////////////////////////////////





	//
	// Bar-кнопки, кнопки справочники
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
		//Вывод информации об опции сохранения данных
		MessageOption->Text = "Это опция позволяет сохранить ваши данные при последующем входе";
		MessageOption->Show();
	}


	//
	// Кнопки формы
	//

	// Открывает условия пользования
	System::Void login::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Открывает условия пользования
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//Корректное отображение элементов
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}

	// Закрывает условия пользования, спрашивает о подтверджении
	System::Void login::buttonCloseTerms(System::Object^ sender, System::EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//Спрашивает о согласии, после закрытия
		System::Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
		}
	}
	
	// Функция для показа элементов регистрации/авторизации
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

	// Обработчик события кнопки "Авторизация"
	System::Void login::buttonShowAuthorize_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(false);
	}

	// Обработчик события кнопки "Регистрация"
	System::Void login::buttonShowRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(true);
	}

	// Регистрация
	System::Void login::buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	//Вход
	System::Void login::buttonComeIn_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	//Установка местоположения элементов
	System::Void login::SetLocations() {
		//Установка корректных координат элементов
		textBoxTerms->Location = System::Drawing::Point(5, 5);
		panelRegister->Location = System::Drawing::Point(4, 47);
		panelAuthorize->Location = System::Drawing::Point(4, 47);
	}