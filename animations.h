#pragma once
#include "libraries.h"

using namespace PythonWave;

//����� �������� ������� ���������� �� �������� ����
System::Void login::fadetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (this->IsDisposed == true) {
		// ��������� �������� �����
		fadetimer->Stop();
		return;
	}
	switch (fade_mode) {
	case 0: // ���������
		if (this->Opacity < 1) {
			this->Opacity += 0.1;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->Size = System::Drawing::Size(1280, 720);
		}
		break;
	case 1: // ��������
		if (this->Opacity > 0) {
			this->Opacity -= 0.2;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->WindowState = Windows::Forms::FormWindowState::Minimized;
		}
		break;
	case 2: // �������
		if (this->Opacity > 0) {
			this->Opacity -= 0.2;
			borderlessForm->HasFormShadow = false;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->Close();
		}
		break;
	}
	// ��������� ���� � ����������� �� ��������� �����
	borderlessForm->HasFormShadow = (fade_mode != 1); // ���� ������ ���� �����, ���� ����� �� ��������������
}
System::Void login::login_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (close_on_close && fade_mode != 2) {
		e->Cancel = true;
		fade_mode = 2;
		fadetimer->Start();
	}
}