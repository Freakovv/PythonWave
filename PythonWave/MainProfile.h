#pragma once
#include "mainForm.h"

using namespace PythonWave;
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

int secondsLeftt = 30;

Void mainForm::buttonUploadImage_Click(System::Object^ sender, System::EventArgs^ e) {
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

			// Устанавливаем изображение
			pictureProfile->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureProfile->Image = image;
			pictureProfileEdit->Image = image;
			pictureUserBar->Image = image;

			// Определяем формат загруженного изображения
			Drawing::Imaging::ImageFormat^ imageFormat = image->RawFormat;

			// Путь, по которому сохранить изображение
			String^ savePath = User + "\\avatar";

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
			pictureProfileEdit->Image->Save(savePath, imageFormat);
		}
	}
	catch (Exception^ ex) {
		MessageError->Show(ex->Message);
	}
}

Void mainForm::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxEmail->Text == UserEmail) {
		MessageWarning->Show("Этот Email уже привязан к вашему акканту");
		return;
	}

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

		MessageInfo->Show("Пароль успешно изменен", "Поздравляем");

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

		MessageWarning->Show("Введите полное имя и фамилию");
		return;
	}

	if (!email_confirmed) {
		MessageWarning->Show("Вы ввели новый Email, подтвердите его или введите старый");
		textBoxEmail->BorderColor = Color::Red;
		return;
	}

	DataChange();
	DataSave();
	MessageInfo->Show("Сохранено", "Успешно");
}