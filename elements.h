#pragma once
#include "libraries.h"

System::Void login::ExitWindow_click(System::Object^ sender, System::EventArgs^ e) {
	fade_mode = 2;
	fadetimer->Start();
}

System::Void login::MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e) {
	fade_mode = 1;
	fadetimer->Start();
}
