#pragma once
#include <windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "mainForm.h"
#include "ClassFade.h"
#include "MyPython.h"

// Объявления
void UnblockFile(const std::wstring& filePath);
std::wstring GetExecutablePath();




	// DATA
	Void mainForm::ChangeData() {

	}

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

		std::wstring exePath = GetExecutablePath() + L"example.docx";
		UnblockFile(exePath);
		LoadDocxFile();
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
	Void mainForm::btnPyRun_click(System::Object^ sender, System::EventArgs^ e) {
		MyPython python;
		String^ code = richTextBox1->Text;
		String^ result = python.Start(User, code);
		MessageBox::Show(User, code);
		richTextBox2->Text += result;
	}

	void UnblockFile(const std::wstring& filePath) {
		std::wstring command = L"powershell.exe -Command \"Unblock-File -Path '" + filePath + L"'\"";
		_wsystem(command.c_str());
	}

	std::wstring GetExecutablePath() {
		wchar_t buffer[MAX_PATH];
		GetModuleFileName(NULL, buffer, MAX_PATH);
		std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
		return std::wstring(buffer).substr(0, pos);
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
				pictureProfile->Image->Save(savePath, imageFormat);
			}
		}
		catch (Exception^ ex) {
			MessageError->Show(ex->Message);
		}
	}

	Void mainForm::buttonResume_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageProfileEdit);
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
	Void mainForm::linkREMOVEACC_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

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
				MessageError->Caption = "Ошибка";
				MessageError->Text = "Неверный старый пароль";
				MessageError->Show();
				return;
			}

			// Преобразование нового пароля
			String^ newPass = textBoxPassNew->Text;
			pin_ptr<const wchar_t> wchNewPass = PtrToStringChars(newPass);
			std::wstring wstrNewPass(wchNewPass);
			std::string strNewPass(wstrNewPass.begin(), wstrNewPass.end());

			size_t newHashPassword = hasher(strNewPass);

			// Запись нового хэша в файл
			writeBinaryFile(filePath, newHashPassword);

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
