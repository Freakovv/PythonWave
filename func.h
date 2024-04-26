#pragma once
#include <Windows.h>
#include "transitions.h"

using namespace PythonWave;

void login::MinimizeWindow(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
void login::ExitWindow(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}

