#pragma once
#include "mainForm.h"
#include "ClassFade.h"


	void Restart()
	{
		// Получаем путь к текущему исполняемому файлу
		String^ executablePath = Application::ExecutablePath;

		// Запускаем новый процесс с тем же исполняемым файлом
		Process::Start(executablePath);

		// Закрываем текущее приложение и удаляем папку logs
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

	Void mainForm::btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		Restart();
	}
