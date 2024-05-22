#pragma once
#include "auth.h"
#include "ClassFade.h"
#include "config.h"

#include <Windows.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace PythonWave;
using namespace System::IO;

	int sec = 4;
	int animation_mode = 1; // 1,2,3 - Цепочка анимации регистрации, 4 - Переход на main с приветствием
	bool greeting = true;
	void authToProfile(String^ construct); // Функция для перехода
	void authToMain(String^ construct); // Функция для перехода

	// Функция для чтения last usera
	String^ auth::ReadLogFile() {
		String^ content = "";
		try {
			String^ folderName = "logs";
			String^ filePath = Path::Combine(folderName, "logs.bin");

			// Проверяем, существует ли файл
			if (File::Exists(filePath)) {
				// Открываем файл для чтения в бинарном режиме
				FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
				BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

				// Читаем содержимое файла
				content = binaryReader->ReadString();
				binaryReader->Close();
				fileStream->Close();
			}
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
		return content;
	}	

	// Функция для запоминания last usera
	Void auth::CreateLogFile() {
		try {
			// Создаем папку с полученным логином
			String^ folderName = "logs";
			String^ filePath = Path::Combine(folderName, "logs.bin");

			Directory::CreateDirectory(folderName);
			// Запись в бинарном режиме
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
			BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

			binaryWriter->Write(USER);
			binaryWriter->Close();
			fileStream->Close();
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}


	void SetCenter(Control^ back, Control^ control, int mode);

	Void auth::LastEnter() {
		if (greeting) {

			labelWelcome->Text += USER;
			SetCenter(pageWelcome, labelWelcome, 1);
			pagesTransition->SelectTab(pageWelcome);

			animation_mode = 4;
			sec = 2;
			timerTransition->Start();
		}
		else {
			ClassFade^ fadeEffect = gcnew ClassFade(this);
			fadeEffect->SetAnimation("hide");
			fadeEffect = nullptr;
			authToMain(USER);
		}
	}

	Void auth::loadConfig() {
		Config^ config = Config::LoadConfig();
		// Настройки формы

		// Закругленность, тень формы
		borderlessForm->BorderRadius = config->borderForm;
		borderlessForm->HasFormShadow = config->hasFormShadow;

		// Закругленность кнопок
		buttonComeIn->BorderRadius = config->borderBtn;
		buttonRegister->BorderRadius = config->borderBtn;
		// Приветствие
		greeting = config->greeting;
		// Прозрачность при перетаскивании
		dragControl1->TransparentWhileDrag = config->dragTransparent;
		dragControl2->TransparentWhileDrag = config->dragTransparent;
		dragControl3->TransparentWhileDrag = config->dragTransparent;
		dragControlMain->TransparentWhileDrag = config->dragTransparent;
		dragControlMain2->TransparentWhileDrag = config->dragTransparent;
	}

	Void auth::auth_Load(System::Object^ sender, System::EventArgs^ e) {
		if (File::Exists("config.xml")) {
			loadConfig();
		}

		if (Directory::Exists("logs")) {
			USER = ReadLogFile();
			LastEnter();
		}
		else {
			ClassFade^ fadeEffect = gcnew ClassFade(this);
			fadeEffect->SetAnimation("in");
			fadeEffect = nullptr;
		}


		SetCenter(panelMain, labelMain, 1);
		SetCenter(pageWelcome, labelWelcome, 1);
	}


	//Форма - Анимации, переходы
	Void auth::buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		fadeEffect->SetAnimation("close");
		fadeEffect = nullptr;
	}
	Void auth::buttonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		fadeEffect->SetAnimation("minimize");
		fadeEffect = nullptr;
	}

	Void auth::buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageOption->Show();
	}

	Void auth::buttonShowAuth_Click(System::Object^ sender, System::EventArgs^ e) {
		pagesAuthReg->SelectTab(pageAuth);

		this->Text = "PythonWave: Авторизация";
		labelMain->Text = this->Text;
		SetCenter(panelMain, labelMain, 1);
	}
	Void auth::buttonShowReg_Click(System::Object^ sender, System::EventArgs^ e) {
		pagesAuthReg->SelectTab(pageReg);

		this->Text = "PythonWave: Регистрация";
		labelMain->Text = this->Text;
		SetCenter(panelMain, labelMain, 1);
	}




	//Регистрация, правила
	Void auth::buttonRegister_Click(Object^ sender, EventArgs^ e) {
		// Проверка на пустые поля
		if (textBoxLogin1->Text == "") {
			textBoxLogin1->BorderColor = Color::Red;

			MessageWarning->Show("Введите логин");
			return;
		}

		if (textBoxPassword1->Text == "" || textBoxPassword_1->Text == "") {
			textBoxPassword1->BorderColor = Color::Red;
			textBoxPassword_1->BorderColor = Color::Red;

			MessageWarning->Show("Введите пароль");
			return;
		}

		// Проверка на совпадение паролей
		if (textBoxPassword1->Text != textBoxPassword_1->Text) {

			textBoxPassword1->BorderColor = Color::Red;
			textBoxPassword_1->BorderColor = Color::Red;

			MessageError->Show("Пароли не совпадают", "Ошибка");
			return;
		}

		// Проверка на соглашение
		if (checkBoxTerms->Checked == false) {
			MessageError->Caption = "Предупреждение";
			MessageError->Text = "Для регистрации вам нужно прочесть условия использования";
			MessageError->Show();
			return;
		}
		
		// Проверка на существование уже такого пользователя
		if (Directory::Exists(textBoxLogin1->Text)) {
			MessageError->Caption = "Предупреждение";
			MessageError->Text = "Пользователь под таким логином уже существует";
			MessageError->Show();
			return;
		}

		// Регистрация в случае если все условия соблюдены
		panelMain->Visible = false;
		Register();
	}
	Void auth::Register() {
		// Получаем логин и пароль пользователя 
		String^ cliLogin = textBoxLogin1->Text;
		String^ cliPassword = textBoxPassword1->Text;

		// При получении данных меняем кое че
		USER = cliLogin;
		labelWelcome->Text += cliLogin;
		SetCenter(pageWelcome, labelWelcome, 1);

		// Преобразуем их в std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// Создаем папку с полученным логином
		String^ folderPath = cliLogin;
		Directory::CreateDirectory(folderPath);

		// Путь к файлу Password - data.bin
		String^ filePath = Path::Combine(folderPath, "data.bin");

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

		animation_mode = 1;
		sec = 4;
		timerTransition->Start();
	}

	Void auth::linkLabelTerms_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		//Открывает условия пользования
		textBoxTerms->Visible = true;
		buttonCloseTerms->Visible = true;

		//Корректное отображение элементов
		textBoxTerms->BringToFront();
		buttonCloseTerms->BringToFront();
	}
	Void auth::buttonCloseTerms_Click(System::Object^ sender, System::EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		buttonCloseTerms->Visible = false;
	}




	//Вход
	Void auth::buttonComeIn_Click(Object^ sender, EventArgs^ e) {
		if (textBoxLogin->Text == "") {
			textBoxLogin->BorderColor = Color::Red;
			MessageWarning->Show("Введите логин");
			return;
		}

		if (textBoxPassword->Text == "") {
			textBoxPassword->BorderColor = Color::Red;
			MessageWarning->Show("Введите пароль");
			return;
		}

		if (ComeIn()) {
			if (SwitchRemember->Checked == true) {
				CreateLogFile();
			} 

			if (greeting) {
				animation_mode = 4;
				sec = 4;
			}
			else {
				animation_mode = 5;
				sec = 1;
			}
			labelWelcome->Text += USER;
			SetCenter(pageWelcome, labelWelcome, 1);

			timerTransition->Start();
		}
	}
	Boolean auth::ComeIn() {
		// Получаем логин и пароль пользователя 
		String^ cliLogin = textBoxLogin->Text;
		String^ cliPassword = textBoxPassword->Text;

		// Преобразуем их в std::string
		std::string Login = msclr::interop::marshal_as<std::string>(cliLogin);
		std::string Password = msclr::interop::marshal_as<std::string>(cliPassword);

		// Создаем путь к файлу Password - data.bin
		String^ folderPath = cliLogin;
		String^ filePath = Path::Combine(folderPath, "data.bin");

		// Проверяем существует ли пользователь в бд
		if (!Directory::Exists(folderPath)) {
			MessageError->Caption = "Ошибка";
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
			USER = cliLogin;
			return true; // Пароль совпадает
		}
		else {
			MessageError->Caption = "Предупреждение";
			MessageError->Text = "Введен неверный пароль";
			MessageError->Show();
			return false; // Пароль не совпадает
		}
	}

	//Анимация регистрации
	Void auth::timerTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fadeEffect = gcnew ClassFade(this);
		switch (animation_mode)
		{
		case 1:
			//Анимация появления текста
			--sec;
			pagesTransition->SelectTab(pageWelcome);
			if (sec <= 0) {
				timerTransition->Stop();
				
				//Анимация затухания текста
				sec = 4;
				animation_mode = 2;
				timerTransition->Start();
			}
			break;
		case 2:
			--sec;
			pagesTransition->SelectTab(pageInfo);
			if (sec <= 0) {
				sec = 2;
				animation_mode = 3;
				timerTransition->Start();
			}
			break;
		case 3:
			//Анимка регистрации
			--sec;
			if (sec <= 0) {
				timerTransition->Stop();
				fadeEffect->SetAnimation("hide");
				fadeEffect = nullptr;
				authToProfile(USER);
			}
			break;
			//Анимка входа c приветствием
		case 4:
			pagesTransition->SelectTab(pageWelcome);
			--sec;
			if (sec <= 0) {
				fadeEffect->SetAnimation("hide");
				fadeEffect = nullptr;

				timerTransition->Stop();
				authToMain(USER);
			}
			break;
			//Анимка входа без приветствия
		case 5:
			--sec;
			fadeEffect->SetAnimation("hide");
			fadeEffect = nullptr;
			if (sec <= 0) {
				timerTransition->Stop();
				authToMain(USER);
			}
			break;
		}
	}
