#pragma once
#include <windows.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "mainForm.h"
#include "ClassFade.h"
#include "MyPython.h"

	// Form, Menu
	Void mainForm::main_Load(System::Object^ sender, System::EventArgs^ e) {
		cfgLoad();
		LoadData();
		if (panelMenu->Size == Drawing::Size(80, 820)) {
			menu = false;
		}
		else if (panelMenu->Size == Drawing::Size(250, 820)) {
			menu = true;
		}

		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("in");
		Fade = nullptr;
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
		richTextBox2->Text += result;
	}


	// Профиль
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