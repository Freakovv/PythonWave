#pragma once
#include "mainForm.h"
#include "ClassTasks.h"
using namespace PythonWave;
using namespace System;

String^ mainForm::GetGreetingBasedOnTime() {
	DateTime now = DateTime::Now;
	int hour = now.Hour;

	if (hour >= 5 && hour < 12) {
		return "������ ����, " + User;
	}
	else if (hour >= 12 && hour < 17) {
		return "������ ����, " + User;
	}
	else if (hour >= 17 && hour < 22) {
		return "������ �����, " + User;
	}
	else {
		return "������ ����, " + User;
	}
}
