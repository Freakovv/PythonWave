#pragma once
#include <windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "mainForm.h"
#include "ClassFade.h"
#include "MyPython.h"


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
		const std::wstring& folderPathStr = wch;
		WIN32_FILE_ATTRIBUTE_DATA fileInfo;
		if (GetFileAttributesEx(folderPathStr.c_str(), GetFileExInfoStandard, &fileInfo)) {
			FILETIME creationTime = fileInfo.ftCreationTime;
			SYSTEMTIME systemTime;
			FileTimeToSystemTime(&creationTime, &systemTime);

			String^ creationDateString = String::Format("{0}.{1}.{2}",
				systemTime.wDay, systemTime.wMonth, systemTime.wYear);

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
	Void mainForm::ChangeData() {
	}

	Void mainForm::buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		ClassMail^ EMAIL = gcnew ClassMail(this);

		securityCode = generateSecurityCode();
		String^ userMail = Convert::ToString(textBoxEmail->Text);
		String^ mail = "Здравствуйте, ваш код регистрации: " + Convert::ToString(securityCode);

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
	Void mainForm::buttonCheckCode_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (securityCode == Convert::ToInt32(textBoxCode->Text)) {
				email_confirmed = true;

				// Убираем возможность проверить код
				textBoxCode->Enabled = false;
				buttonCheckCode->Enabled = false;

				// Информируем об успешной валидации
				pictureBoxCheckCode->Visible = true;

				// Убираем возможность отправить емейл повторно
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
