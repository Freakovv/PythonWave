#pragma once
#include "mainForm.h"

Void mainForm::TrackBorderForm_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	borderlessForm->BorderRadius = TrackBorderForm->Value;
	borderForm = TrackBorderForm->Value;

	labelBorderForm->Text = Convert::ToString(borderForm);
}
Void mainForm::TrackBorderBtn_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	borderBtn = TrackBorderBtn->Value;
	btnSettingsCancel->BorderRadius = TrackBorderBtn->Value;
	btnSettingsSave->BorderRadius = TrackBorderBtn->Value;

	labelBorderBtn->Text = Convert::ToString(TrackBorderBtn->Value);
}
Void mainForm::TrackVolume_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	volume = TrackVolume->Value;

	labelVolume->Text = Convert::ToString(volume);
}
Void mainForm::toggleTransparent_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	transparentWhileDrag = toggleTransparent->Checked;

	dragMain->TransparentWhileDrag = transparentWhileDrag;
}
Void mainForm::toggleGreeting_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	greeting = toggleGreeting->Checked;
}
Void mainForm::toggleShadows_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	formShadow = toggleShadows->Checked;
}
Void mainForm::toggleAlwaysHide_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	alwaysHideMenu = toggleAlwaysHide->Checked;
	RegisterMouseDownEvent(this, alwaysHideMenu);
}
Void mainForm::btnMessageShadow_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageWarning->Show("Эта функция на стадии ранней разработки");
}
Void mainForm::btnSettingsSave_Click(System::Object^ sender, System::EventArgs^ e) {
	cfgSave();
	MessageInfo->Show("Настройки успешно сохранены");
}
Void mainForm::toggleStyle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	PythonWaveStyle = toggleStyle->Checked;
	PythonWaveStyleState(PythonWaveStyle);
}
Void mainForm::PythonWaveStyleState(bool enable) {
	if (enable) {
		this->FormBorderStyle = Forms::FormBorderStyle::None;
		Config^ tempCfg = tempCfg->LoadConfig();
		borderForm = tempCfg->borderForm;
		tempCfg = nullptr;
	}
	else {
		this->FormBorderStyle = Forms::FormBorderStyle::FixedToolWindow;
		borderForm = 0;
	}

	btnExit->Visible = enable;
	btnMinimize->Visible = enable;
	TrackBorderForm->Enabled = enable;

	borderlessForm->BorderRadius = borderForm;
	TrackBorderForm->Value = borderForm;
	labelBorderForm->Text = Convert::ToString(borderForm);
}
void mainForm::RegisterMouseDownEvent(Control^ parent, bool enable)
{
	if (enable && parent->Name != "btnMenu")
	{
		parent->MouseDown += mouseDownHandler;
	}
	else
	{
		parent->MouseDown -= mouseDownHandler;
	}

	for each (Control ^ child in parent->Controls)
	{
		RegisterMouseDownEvent(child, enable);
	}
}
//textboxes
Void mainForm::textBoxUserName_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxUserName->BorderColor = Color::Silver;
}
Void mainForm::textBoxUserSurname_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxUserSurname->BorderColor = Color::Silver;
}
Void mainForm::textBoxEmail_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxEmail->BorderColor = Color::Silver;
}
