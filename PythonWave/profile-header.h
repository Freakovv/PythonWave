#pragma once
#include "profile.h"
#include "ClassFade.h"
#include "ClassMail.h"
#include "config.h"

#include <Windows.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <map>
#include <ctime>

#using <System.dll>
using namespace System;
using namespace PythonWave;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Drawing;
using namespace System::Diagnostics;
// Для письма на почту
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Security;
using namespace System::Text;

// Переменные для работы
int mode = 1; // Режим перехода
int secondsToClose = 2; // Время до закрытия и для переходов
int secondsLeft = 30; 	// Повторная отправка письма
int checkBoxMode = 1; // Тип анимации чекбокса
int checkBoxSec = 2; // Время анимации чекбокса
bool email_confirmed = false; // Состояние подтвердженного email

// func
//-------------------------------------------------------------------------------------------------------------
// Сохранение данных
String^ GetFullDate(String^ day, String^ month, String^ year) {
	// Создаем словарь с соответствиями месяцев
	Dictionary<String^, String^>^ months = gcnew Dictionary<String^, String^>();
	months->Add("Январь", "Января");
	months->Add("Февраль", "Февраля");
	months->Add("Март", "Марта");
	months->Add("Апрель", "Апреля");
	months->Add("Май", "Мая");
	months->Add("Июнь", "Июня");
	months->Add("Июль", "Июля");
	months->Add("Август", "Августа");
	months->Add("Сентябрь", "Сентября");
	months->Add("Октябрь", "Октября");
	months->Add("Ноябрь", "Ноября");
	months->Add("Декабрь", "Декабря");

	// Получаем аббревиатуру месяца из словаря
	String^ monthAbbreviation;
	if (months->ContainsKey(month)) {
		monthAbbreviation = months[month];
	}
	else {
		// Если месяц не найден, оставляем его как есть
		monthAbbreviation = month;
	}

	// Формируем полную дату
	String^ fullDate = day + " " + monthAbbreviation + " " + year;

	return fullDate;
}

Void SaveDataBinary(String^ FilePath, String^ StringToWrite) {
	FileStream^ fileStream = gcnew FileStream(FilePath, FileMode::Create);
	BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

	binaryWriter->Write(StringToWrite);

	binaryWriter->Close();
	fileStream->Close();
}

Void profile::SaveData() {
	try {
		// Получаем данные
		String^ email = textBoxEmail->Text;
		String^ name = textBoxUserName->Text;
		String^ surname = textBoxUserSurname->Text;
		String^ sex = bunifuDropdownSex->Text;

		String^ day = bunifuDropdownDay->Text;
		String^ month = bunifuDropdownMonth->Text;
		String^ year = bunifuDropdownYear->Text;

		String^ birth = day + " " + month + " " + year;

		String^ lvl = "Новичок";

		// Пути сохранения
		String^ fileUserEmail = UserLogin + "//userData.bin";
		String^ fileUserBirth = UserLogin + "//userBirth.bin";
		String^ fileUserSex = UserLogin + "//userSex.bin";
		String^ fileUserName = UserLogin + "//userName.bin";
		String^ fileUserSurname = UserLogin + "//userSurname.bin";
		String^ Rank = UserLogin + "//lvl.bin";

		SaveDataBinary(fileUserEmail, email);
		SaveDataBinary(fileUserBirth, birth);
		SaveDataBinary(fileUserSex, sex);
		SaveDataBinary(fileUserName, name);
		SaveDataBinary(fileUserSurname, surname);
		SaveDataBinary(Rank, lvl);

		String^ LogsPath = "script//logs.bin";
		Boolean isTaskVisited = false;
		SaveDataBinary(LogsPath, Convert::ToString(isTaskVisited));
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message, "Аккаунт будет удален");
	}
}

// Функции
void RestartApplication()
{
	// Получаем путь к текущему исполняемому файлу
	String^ executablePath = Application::ExecutablePath;

	// Запускаем новый процесс с тем же исполняемым файлом
	Process::Start(executablePath);

	// Закрываем текущее приложение
	Application::Exit();
}

int profile::generateSecurityCode() {
	srand(time(NULL));
	int Code = rand() % 900000 + 100000;
	return Code;
}

Void profile::enableMail(bool enable) {
	if (enable) {
		textBoxCode->Clear();

		textBoxEmail->Enabled = true;
		textBoxCode->Enabled = false;

		buttonSendMail->Enabled = true;
		buttonCheckCode->Enabled = false;

		pictureBoxCheckMail->Enabled = true;
		pictureBoxCheckCode->Enabled = true;

		pictureBoxCheckMail->Visible = false;
		pictureBoxCheckCode->Visible = false;

		linkReMail->Visible = false;
	}
	else {
		textBoxEmail->Enabled = true;
		textBoxCode->Enabled = true;

		buttonSendMail->Enabled = true;
		buttonCheckCode->Enabled = true;

		pictureBoxCheckMail->Enabled = false;
		pictureBoxCheckCode->Enabled = false;
	}
}

Void profile::DeleteDirectory(String^ folderPath) {
	try {
		DirectoryInfo^ directory = gcnew DirectoryInfo(folderPath);
		if (directory->Exists) {
			// Удаляем папку и все ее содержимое
			directory->Delete(true);
		}
		else {
			MessageError->Show("Аккаунта не существует");
		}
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message);
	}
}

bool profile::IsValidEmail(String^ email) {
	// Проверка корректности введенного email (наличие символов '@' и '.')
	return email->Contains("@") && email->Contains(".");
}

// Форма
//-------------------------------------------------------------------------------------------------------------
Void profile::profile_Load(System::Object^ sender, System::EventArgs^ e) {
	SetCenter(pageSettings, labelSettings, 1);
	SetCenter(pageSettings, labelClose, 1);
	SetCenter(pageSettings, labelEnd, 3);
	SetCenter(pageSettings, labelEnd, 3);
	SetCenter(pageSettings, labelClose, 1);
	SetCenter(panel1, labelMain, 1);
	SetCenter(pageEnd, labelEnd, 3);
	SetCenter(pageEnd, labelClose, 1);

	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("in");
	Fade = nullptr;
}
Void profile::ButtonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassFade^ Fade = gcnew ClassFade(this);
	Fade->SetAnimation("minimize");
	Fade = nullptr;
}
Void profile::ButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Windows::Forms::DialogResult result = MessageDialogExit->Show();
	if (result == Windows::Forms::DialogResult::Yes) {
		DeleteDirectory(UserLogin);
		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("close");
		Fade = nullptr;
	}
}
Void profile::buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageDialogQuestion->Show();
}

// Таймеры
//-------------------------------------------------------------------------------------------------------------

// Переходы между страницами
Void profile::timerTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
	switch (mode)
	{
	case 1:
		//page successfull
		--secondsToClose;
		guna2CustomCheckBox1->Checked = true;
		if (secondsToClose == 0) {
			timerTransition->Stop();
			mode = 2;
			secondsToClose = 5;
			Pages->SelectTab(pageSettings);
		}
		break;
	case 2:
		//page close
		if (secondsToClose == 0) {
			ClassFade^ Fade = gcnew ClassFade(this);
			Fade->SetAnimation("Hide");
			Fade = nullptr;
			RestartApplication();
		}
		else {
			SetCenter(pageEnd, labelClose, 1);
			--secondsToClose;
			labelClose->Text = "Приложение перезапустится через " + secondsToClose + " секунд";
		}
		break;
	default:
		break;
	} {
	}
}

// Отсчтет повторной отправки
Void profile::timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	secondsLeft--;
	if (secondsLeft <= 0)
	{
		secondsLeft = 30;
		timerReMail->Stop();

		labelTimer->Visible = false;

		linkReMail->Visible = true;
		linkReMail->Enabled = true;
	}
	else
	{
		labelTimer->Text = "Отправить повторно через " + secondsLeft.ToString() + " секунд";
	}
}

// Клики по красным полям
//-------------------------------------------------------------------------------------------------------------
Void profile::textBoxMail_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxEmail->BorderColor = Color::Blue;
}
Void profile::textBoxUserName_Click(System::Object^ sender, EventArgs^ e) {
	textBoxUserName->BorderColor = Color::Gray;
}
Void profile::bunifuDropdownSex_Click(System::Object^ sender, EventArgs^ e) {
	bunifuDropdownSex->BorderColor = Color::Gray;
}
Void profile::bunifuDropdownDay_Click(System::Object^ sender, EventArgs^ e) {
	bunifuDropdownDay->BorderColor = Color::Gray;
}
Void profile::bunifuDropdownMonth_Click(System::Object^ sender, EventArgs^ e) {
	bunifuDropdownMonth->BorderColor = Color::Gray;
}
Void profile::bunifuDropdownYear_Click(System::Object^ sender, EventArgs^ e) {
	bunifuDropdownYear->BorderColor = Color::Gray;
}

// Кнопки
//-------------------------------------------------------------------------------------------------------------

// Повторная отправка - гиперссылка
Void profile::linkReMail_Click(System::Object^ sender, System::EventArgs^ e) {
	enableMail(true);
	email_confirmed = false;
}

// Переход на сообщении успешной регистрации
Void profile::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
	bool confirmed = true;
	if (textBoxUserName->Text == "") {
		textBoxUserName->BorderColor = Color::Red;
		confirmed = false;
	}

	if (bunifuDropdownSex->Text == "Пол") {
		bunifuDropdownSex->BorderColor = Color::Red;
		confirmed = false;
	}

	if (bunifuDropdownDay->Text == "День") {
		bunifuDropdownDay->BorderColor = Color::Red;
		confirmed = false;
	}

	if (bunifuDropdownMonth->Text == "Месяц") {
		bunifuDropdownMonth->BorderColor = Color::Red;
		confirmed = false;
	}

	if (bunifuDropdownYear->Text == "Год") {
		bunifuDropdownMonth->BorderColor = Color::Red;
		confirmed = false;
	}

	if (!confirmed) {
		MessageError->Show("Заполните все необходимые данные");
		return;
	}
	else if (!email_confirmed) {
		MessageWarning->Show("Подтвердите email");
		textBoxEmail->BorderColor = Color::Red;
		return;
	}

	SaveData();
	succesful = true;
	Pages->SelectTab(pageSuccessful);
	timerTransition->Start();
}

// Кнопка отправки письма
Void profile::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassMail^ EMAIL = gcnew ClassMail(this);

	String^ userMail = Convert::ToString(textBoxEmail->Text);
	String^ mail = "Здравствуйте, ваш код регистрации: " + Convert::ToString(SecurityCode);

	// Если общий вид мейла правильный, то попробуем отправить письмо
	if (IsValidEmail(userMail)) {
		if (EMAIL->SendEmail(userMail, "PythonWave: Код безопасности", mail)) {
			// Убираем возможность отправить код
			textBoxEmail->Enabled = false;
			buttonSendMail->Enabled = false;

			// Даем возможность написать код
			textBoxCode->Enabled = true;
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
void profile::SaveConfig() {
	Config^ config = gcnew Config();

	// Заполнение конфигурационного объекта текущими значениями из формы
	config->borderForm = TrackBorderForm->Value;
	config->borderBtn = TrackBorderBtn->Value;
	config->volume = TrackVolume->Value;

	config->dragTransparent = toggleTransparent->Checked;
	config->greeting = toggleGreeting->Checked;
	config->hasFormShadow = toggleShadows->Checked;

	// Сохранение конфигурации в файл
	config->SaveConfig();
}

// Переход, завершение настройки
Void profile::buttonResume1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveConfig();
	Pages->SelectTab(pageEnd);
	mode = 2;
	timerTransition->Start();
}

// Проверка кода безопасности
Void profile::buttonValidateCode_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (SecurityCode == Convert::ToInt32(textBoxCode->Text)) {
			email_confirmed = true;

			textBoxCode->Enabled = false;
			buttonCheckCode->Enabled = false;

			pictureBoxCheckCode->Visible = true;

			timerReMail->Stop();
			labelTimer->Visible = false;
			linkReMail->Visible = false;
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

// Загрузка изображения в профиль
//-------------------------------------------------------------------------------------------------------------
Void profile::buttonUpload_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Настройка OpenFileDialog
		openFileDialog1->Filter = "Image Files (*.jpg;*.png)|*.jpg;*.png";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		// Показываем диалог выбора файла
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Получаем путь к выбранному файлу
			String^ filePath = openFileDialog1->FileName;

			// Создаем объект Image из выбранного файла
			Drawing::Image^ image = System::Drawing::Image::FromFile(filePath);

			// Устанавливаем изображение в pictureBoxUploadImage
			pictureBoxUploadImage->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBoxUploadImage->Image = image;

			// Определяем формат загруженного изображения
			Drawing::Imaging::ImageFormat^ imageFormat = image->RawFormat;

			// Путь, по которому сохранить изображение
			String^ savePath = UserLogin + "\\avatar";

			// Сохраняем изображение, указывая явно формат
			if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Jpeg)) {
				savePath += ".jpg";
				image->Save(savePath, System::Drawing::Imaging::ImageFormat::Jpeg);
			}
			else if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Png)) {
				savePath += ".png";
				image->Save(savePath, System::Drawing::Imaging::ImageFormat::Png);
			}
			// Сохраняем изображение
			pictureBoxUploadImage->Image->Save(savePath, imageFormat);
		}
	}
	catch (Exception^ ex) {
		MessageDialogUpload->Show(ex->Message);
	}
}