#pragma once
#include "libraries.h"
using namespace PythonWave;
using namespace System;
using namespace System::IO;

		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									CreateProfile.h                                      //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	//
	// Проверки
	// 
	// 
	//
	// Bar-кнопки, кнопки справочники
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
	// Кнопки формы
	//

	// Обработчик события кнопки отправки письма
	Void CreateProfile::buttonSendCode_Click(Object^ sender, EventArgs^ e) {
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
	Void CreateProfile::buttonValidateCode_Click(Object^ sender, EventArgs^ e) {
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
	Void CreateProfile::CreateProfile_Load(Object^ sender, EventArgs^ e) {
		//ButtonMinimize->BringToFront();
	}
	//
	// Текст боксы, визуал
	//
	Void CreateProfile::textBoxMail_Click(Object^ sender, EventArgs^ e) {
		textBoxMail->BorderColor = Color::White;
	}


	//
	// Таймеры, визуал
	//
	// Обработчик события таймера на повторную отправку письма
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
			// Обновляем отображение оставшихся секунд
			labelTimer->Text = "Отправить повторно через " + secondsLeft.ToString() + " секунд";
		}
	}

	// Обработчик события гиперссылки
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
	Void login::ExitWindow_click(Object^ sender, EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	Void login::MinimizeWindow_click(Object^ sender, EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	Void login::buttonQuestion_click(Object^ sender, EventArgs^ e) {
		//Вывод информации об опции сохранения данных
		MessageOption->Text = "Это опция позволяет сохранить ваши данные при последующем входе";
		MessageOption->Show();
	}


	//
	// Кнопки формы
	//

	// Открывает условия пользования
	Void login::linkLabel1_LinkClicked(Object^ sender, Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Открывает условия пользования
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//Корректное отображение элементов
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}

	// Закрывает условия пользования, спрашивает о подтверджении
	Void login::buttonCloseTerms(Object^ sender, EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//Спрашивает о согласии, после закрытия
		Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
		}
	}
	
	// Функция для показа элементов регистрации/авторизации
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

	// Обработчик события кнопки "Авторизация"
	Void login::buttonShowAuthorize_Click(Object^ sender, EventArgs^ e) {
		ShowRegister(false);
	}

	// Обработчик события кнопки "Регистрация"
	Void login::buttonShowRegister_Click(Object^ sender, EventArgs^ e) {
		ShowRegister(true);
	}

	// Регистрация
	Void login::buttonRegister_Click(Object^ sender, EventArgs^ e) {
		
		// Проверка на пустые поля
		if (textBoxLoginReg->Text == "") {
			
			textBoxLoginReg->BorderColor = Color::Red;
			
			MessageError->Text = "Введите логин";
			MessageError->Show();
			return;
		}

		if (textBoxPasswordReg->Text == "" || textBoxPasswordReg2->Text == "") {
			textBoxPasswordReg->BorderColor = Color::Red;
			textBoxPasswordReg2->BorderColor = Color::Red;
			
			MessageError->Text = "Введите пароль";
			MessageError->Show();
			return;
		}
		
		// Проверка на совпадение паролей
		if (textBoxPasswordReg->Text != textBoxPasswordReg2->Text) {
		
			textBoxPasswordReg->BorderColor = Color::Red;
			textBoxPasswordReg2->BorderColor = Color::Red;
			
			MessageError->Text = "Пароли не совпадают";
			MessageError->Show();
			return;
		}
		

		Register();

	}

	Void login::Register() {
		// Получаем логин и пароль пользователя 
		String^ cliLogin = textBoxLoginReg->Text;
		String^ cliPassword = textBoxPasswordReg->Text;

		// Преобразуем их в std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// Создаем папку с полученным логином
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		Directory::CreateDirectory(folderPath);

		// Путь к файлу Password.bin
		String^ filePath = Path::Combine(folderPath, "Password.bin");

		// Хэшируем пароль
		std::hash<std::string> hasher;
		size_t hashPassword = hasher(Password);

		// Открываем файл для записи в бинарном режиме
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
		BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

		// Записываем хэш в файл
		binaryWriter->Write(hashPassword);

		// Закрываем бинарный писатель и файловый поток
		binaryWriter->Close();
		fileStream->Close();

	}

	Boolean login::ReadPassword() {
		// Получаем логин и пароль пользователя 
		String^ cliLogin = textBoxLoginReg->Text;
		String^ cliPassword = textBoxPasswordReg->Text;

		// Преобразуем их в std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// Создаем путь к файлу Password.bin
		String^ folderName = cliLogin;
		String^ folderPath = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath), folderName);
		String^ filePath = Path::Combine(folderPath, "Password.bin");

		// Проверяем существует ли файл
		if (!File::Exists(folderPath)) {
			MessageError->Text = "Пользователя с указанным логином не существует";
			MessageError->Show();
			return false;
		}

		// Хэшируем введенный пароль
		std::hash<std::string> hasher;
		size_t hashPasswordInput = hasher(Password);

		// Открываем файл для чтения в бинарном режиме
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
		BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

		// Читаем данные из файла
		size_t hashPasswordFile = binaryReader->ReadUInt64();

		// Закрываем бинарный читатель и файловый поток
		binaryReader->Close();
		fileStream->Close();

		// Сравниваем хэши паролей
		if (hashPasswordInput == hashPasswordFile) {
			return true; // Пароль совпадает
		}
		else {
			MessageError->Text = "Введен неверный пароль";
			MessageError->Show();
			return false; // Пароль не совпадает
		}
	}

	Void DeleteDirectory(String^ folderPath) {
		DirectoryInfo^ directory = gcnew DirectoryInfo(folderPath);
		if (directory->Exists) {
			// Удаляем папку и все ее содержимое
			directory->Delete(true); 
			MessageBox::Show("Папка удалена");
		}
		else {
			MessageBox::Show("Не удалось удалить папку");
		}
	}
	//Вход
	Void login::buttonComeIn_Click(Object^ sender, EventArgs^ e) {
		if (ReadPassword()) {
			User = textBoxLogin->Text;
			labelWelcome->Text += User + "!";
			bunifuPages->SelectTab(tabPage2);
		}
	}

	//Установка местоположения элементов
	Void login::SetLocations() {
		//Установка корректных координат элементов
		textBoxTerms->Location = Drawing::Point(5, 5);
		panelRegister->Location = Drawing::Point(4, 47);
		panelAuthorize->Location = Drawing::Point(4, 47);
	}