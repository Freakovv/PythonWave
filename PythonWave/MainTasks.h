#pragma once

#include "mainForm.h"

#include <Windows.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>

using namespace System;
using namespace PythonWave;
using namespace System::Drawing;
using namespace System::Windows::Forms;

int currentAnim = 1;
double animSeconds = 2;
int secondsToStartAnim = 4;

Void mainForm::btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!courseAnimationState)
		return;

	if (isCoursesVisited)
		funcSelectTab(pageTasks);
	else {
		currentAnim = 1;
		animSeconds = 3;

		Pages->AllowTransitions = true;
		funcSelectTab(anim1);
		timerAnim->Start();
		courseAnimationState = true;

		if (menu) {
			menu = false;
			timerMenu->Start();
		}
	}
}

Void mainForm::btnSync_Click(System::Object^ sender, System::EventArgs^ e) {
	Pages->SelectTab(anim4);

	currentAnim = 4;
	animSeconds = 3;
	timerAnim->Start();
}
Void mainForm::btnSync1_Click(System::Object^ sender, System::EventArgs^ e) {
	funcSelectTab(pageTasks);
	animSeconds = 3;
}
Void mainForm::timerAnim_Tick(System::Object^ sender, System::EventArgs^ e) {
	switch (currentAnim)
	{
	case 1:
		--animSeconds;
		if (animSeconds == 0) {
			Pages->SelectTab(anim2);
			currentAnim = 2;
			animSeconds = 3;
		}
		break;
	case 2:
		--animSeconds;
		if (animSeconds == 0) {
			Pages->SelectTab(anim3);
			currentAnim = 3;
			animSeconds = 3;
		}
		break;
	case 3:
		--animSeconds;
		if (animSeconds == 0) {
			if (lblSync1->Visible == false) {
				ShowWAnimation(lblSync1);
				animSeconds = 1;
				break;
			}
			if (lblSync2->Visible == false) {
				ShowWAnimation(lblSync2);
				animSeconds = 1;
				break;
			}
			if (lblSync3->Visible == false) {
				ShowWAnimation(lblSync3);
				animSeconds = 1;
				break;
			}
			if (lblSync4->Visible == false) {
				ShowWAnimation(lblSync4);
				animSeconds = 1;
				break;
			}
			if (lblSync5->Visible == false) {
				ShowWAnimation(lblSync5);
				animSeconds = 3;
				break;
			}
			if (btnSync->Visible == false) {
				ShowWAnimation(btnSync);
				timerAnim->Stop();
				break;
			}
		}
		break;
	case 4:
		--animSeconds;
		if (animSeconds == 0) {
			currentAnim = 5;
			ShowWAnimation(btnSync1);
		}
		break;
	case 5:
		Pages->AllowTransitions = false;
		isCoursesVisited = true;
		courseAnimationState = false;

		writeBinaryFile("script//logs.bin", Convert::ToString(isCoursesVisited));
		timerAnim->Stop();
		break;
	default:
		break;
	}
}