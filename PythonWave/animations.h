#pragma once
#include "libraries.h"


using namespace PythonWave;
//Здесь хранятся функции отвечающие за анимацию окна

short fade_mode = 0; 	//0 — появление, 1 — минимизация, 2 — закрытие
short close_on_close = FALSE; //сообщает обработчику закрытия повторно анимировать или нет
//WndProc
//Обработчик закрытия формы
void login::WndProc(System::Windows::Forms::Message% msg) {
		switch (msg.Msg) {
		case WM_SYSCOMMAND:
			switch (msg.WParam.ToInt32()) {
			case SC_MINIMIZE:
				msg.Result = IntPtr::Zero;
				fade_mode = 1;
				fadetimer->Start();
				return;
				break;
			}
			break;
		case WM_ACTIVATE: {
			if (HIWORD(msg.WParam.ToInt32()) == 0) { //потому что ненулевое значение wpa здесь означает, что форма свернута
				this->WindowState = FormWindowState::Normal;
				fade_mode = 0;
				fadetimer->Start();
				msg.Result = IntPtr::Zero;
				return;
			}
		}
		}

		Form::WndProc(msg);
	}
System::Void login::fadetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (this->IsDisposed == true) {
		// Обработка закрытия формы
		fadetimer->Stop();
		return;
	}
	switch (fade_mode) {
	case 0: // Появление
		if (this->Opacity < 1) {
			this->Opacity += 0.1;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->Size = System::Drawing::Size(1280, 720);
		}
		break;
	case 1: // Свернуть
		if (this->Opacity > 0) {
			this->Opacity -= 0.2;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->WindowState = Windows::Forms::FormWindowState::Minimized;
		}
		break;
	case 2: // Закрыть
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
	// Установка тени в зависимости от состояния формы
	borderlessForm->HasFormShadow = (fade_mode != 1); // Тень должна быть видна, если форма не минимизирована
}
System::Void login::login_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (close_on_close && fade_mode != 2) {
		e->Cancel = true;
		fade_mode = 2;
		fadetimer->Start();
	}
}