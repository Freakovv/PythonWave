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
			// Регистрируем обработчик для самого элемента
			parent->MouseDown += gcnew MouseEventHandler(this, &mainForm::Form_MouseDown);
		}
		else
		{
			// Отменяем регистрацию обработчика
			parent->MouseDown -= gcnew MouseEventHandler(this, &mainForm::Form_MouseDown);
		}

		// Рекурсивно регистрируем/отменяем обработчики для всех дочерних элементов
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

		// Выключает remember me
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

	// Страница заданий
	Void mainForm::guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyPython python;
		String^ code = richTextBox1->Text;
		String^ result = python.Start(User, code);
		MessageBox::Show(User, code);
		richTextBox2->Text += result;
	}


	// Профиль
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
				"Января", "Февраля", "Марта", "Апреля", "Мая", "Июня",
					"Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"
			};

			String^ creationDateString = String::Format("{0} {1} {2}",
				systemTime.wDay, months[systemTime.wMonth - 1], systemTime.wYear);

			return creationDateString;
		}
		else {
			return "Ошибка получения даты";
		}
	}

	Void mainForm::buttonUpload_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Настройка OpenFileDialog
			openFileDialog1->Filter = "Image Files (*.jpg;*.png;*.bmp)|*.jpg;*.png;*.bmp";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;

			// Показываем диалог выбора файла
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Получаем путь к выбранному файлу
				String^ filePath = openFileDialog1->FileName;

				// Создаем объект Image из выбранного файла
				Drawing::Image^ image = Image::FromFile(filePath);

				// Устанавливаем изображение в pictureBoxUploadImage
				pictureProfile->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureProfile->Image = image;
				pictureProfileEdit->Image = image;
				pictureUserBar->Image = image;

				// Путь, по которому сохранить изображение
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

			// Определение формата изображения по расширению файла
			if (SavePathIMG->EndsWith(".jpg"))
				format = ImageFormat::Jpeg;
			else if (SavePathIMG->EndsWith(".png"))
				format = ImageFormat::Png;
			else if (SavePathIMG->EndsWith(".bmp"))
				format = ImageFormat::Bmp;
			else
				format = ImageFormat::Jpeg; // По умолчанию JPEG

			// Сохранение изображения
			pictureProfileEdit->Image->Save(SavePathIMG, format);
			MessageBox::Show("Изображение сохранено!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка при сохранении изображения: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

		// Генерация кода один раз
		securityCode = generateSecurityCode();
		securityCodeNew = generateSecurityCode();

		String^ mail = "Здравствуйте, ваш код для смены почты: " + Convert::ToString(securityCode);
		String^ mailNew = "Здравствуйте, ваш код для подтверждения почты: " + Convert::ToString(securityCodeNew);

		// Если общий вид мейла правильный, то попробуем отправить письмо
		if (IsValidEmail(userMailNew)) {
			if (EMAIL->SendEmail(userMail, "PythonWave: Смена почты", mail) && EMAIL->SendEmail(userMailNew, "PythonWave: Подтверждение новой почты", mailNew)) {
				// Убираем возможность отправить код
				textBoxEmail->Enabled = false;
				buttonSendMail->Enabled = false;

				// Даем возможность написать код
				textBoxCode->Enabled = true;
				textBoxCodeNew->Enabled = true;
				buttonCheckCode->Enabled = true;

				// Информируем об успешной отправке галочкой
				pictureBoxCheckMail->Visible = true;

				// Запускаем отсчет на след отправку
				labelTimer->Visible = true;
				timerReMail->Start();
			}
		}
		else {
			MessageError->Caption = "Письмо не было отправлено";
			MessageError->Text = "Введите корректный адрес эл. почты";
			MessageError->Show();

			textBoxEmail->BorderColor = Color::Red;
			textBoxEmail->Clear();
		}
	}
	Void mainForm::buttonCheckCode_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (securityCode == Convert::ToInt32(textBoxCode->Text) && securityCodeNew == Convert::ToInt32(textBoxCodeNew->Text)) {
				email_confirmed = true;

				// Убираем возможность проверить код
				textBoxCode->Enabled = false;
				textBoxCodeNew->Enabled = false;
				buttonCheckCode->Enabled = false;

				// Информируем об успешной валидации
				pictureBoxCheckCode->Visible = true;

				// Убираем возможность отправить емейл повторно
				timerReMail->Stop();
				labelTimer->Visible = false;
				linkReMail->Visible = false;

				// Почта изменена
				MessageInfo->Show("Почта изменена", "Успешно");
			}
			else {
				MessageError->Text = "Неверный код";
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
			labelTimer->Text = "Отправить повторно через " + secondsLeftt.ToString() + " секунд";
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
				MessageError->Show("Не удалось прочитать старый пароль из файла");
				return;
			}

			// Преобразование введенного старого пароля
			String^ enteredOldPass = textBoxPassOld->Text;
			pin_ptr<const wchar_t> wchEntered = PtrToStringChars(enteredOldPass);
			std::wstring wstrEntered(wchEntered);
			std::string strEntered(wstrEntered.begin(), wstrEntered.end());

			std::hash<std::string> hasher;
			size_t enteredHashPassword = hasher(strEntered);

			if (enteredHashPassword != storedHashPassword) {
				MessageError->Show("Неверный старый пароль");
				return;
			}

			// Преобразование нового пароля
			String^ newPass = textBoxPassNew->Text;
			pin_ptr<const wchar_t> wchNewPass = PtrToStringChars(newPass);
			std::wstring wstrNewPass(wchNewPass);
			std::string strNewPass(wstrNewPass.begin(), wstrNewPass.end());

			size_t newHashPassword = hasher(strNewPass);

			// Запись нового хэша в файл
			try {
				FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
				BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

				binaryWriter->Write(static_cast<UInt64>(newHashPassword));

				binaryWriter->Close();
				fileStream->Close();
			}
			catch (Exception^ e) {
				// Обработка исключений
				MessageError->Show("Ошибка записи файла: " + e->Message);
			}


			MessageInfo->Show("Пароль изменен", "Успешно");

			// Выключаем remember me
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
				// Удаляем папку и все ее содержимое 
				directory->Delete(true);
			}
			else {
				MessageError->Show("Аккаунта не найден");
			}
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}

	Void mainForm::linkREMOVEACC_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		if (textBoxPassOld->Text == "") {
			MessageInfo->Show("Введите ваш пароль в поле 'Старый пароль'");
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
			MessageError->Show("Неверный пароль");
			return;
		}

		Forms::DialogResult result = MessageQuestion->Show("Ваш аккаунт будет удален", "Вы уверены?");
		if (result == Forms::DialogResult::Yes) {
			DeleteDirectory(User);
			MessageDefault->Show("До скорых встреч, " + UserName + "!", "Аккаунт удален");

			// Выключает remember me
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
