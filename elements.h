#pragma once
#include "libraries.h"





	//
	// Bar-кнопки, кнопки справочники
	//
	
	//LOGIN
	System::Void login::ExitWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	System::Void login::MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	System::Void login::buttonQuestion_click(System::Object^ sender, System::EventArgs^ e) {
		//Вывод информации об опции сохранения данных
		MessageOption->Text = "Это опция позволяет сохранить ваши данные при последующем входе";
		MessageOption->Show();
	}

	System::Void CreateProfile::ButtonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = Windows::Forms::FormWindowState::Minimized;
	}
	System::Void CreateProfile::ButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageDialogExit->Show();
		if (result == System::Windows::Forms::DialogResult::Yes)
			this->Close();
	}
	System::Void CreateProfile::buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageDialogQuestion->Show();
	}

	//
	// 
	//










	System::Void login::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Открывает условия пользования
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//Корректное отображение элементов
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}
	System::Void login::buttonCloseTerms(System::Object^ sender, System::EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//Спрашивает о согласии, после закрытия
		System::Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
		}
	}
	System::Void login::ShowRegister(bool show) {
		if (show) {
			panelAuthorize->Visible = false;
			panelRegister->Visible = true;
		}
		else {
			panelAuthorize->Visible = true;
			panelRegister->Visible = false;
		}
	}
	System::Void login::buttonShowAuthorize_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(false);
	}
	System::Void login::buttonShowRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(true);

	}
	System::Void login::buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	System::Void login::buttonComeIn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	System::Void login::SetLocations() {
		//Установка корректных координат элементов
		textBoxTerms->Location = System::Drawing::Point(5, 5);
		panelRegister->Location = System::Drawing::Point(4, 47);
		panelAuthorize->Location = System::Drawing::Point(4, 47);
	}