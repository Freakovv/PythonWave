#pragma once
#include "mainForm.h"
#include "ClassFade.h"


	void Restart()
	{
		// �������� ���� � �������� ������������ �����
		String^ executablePath = Application::ExecutablePath;

		// ��������� ����� ������� � ��� �� ����������� ������
		Process::Start(executablePath);

		// ��������� ������� ���������� � ������� ����� logs
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
