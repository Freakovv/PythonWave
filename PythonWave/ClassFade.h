#pragma once
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

ref class ClassFade
{
private:

	Form^ form; // Ссылка формы
	Timer^ timerFade; // Таймер для управления анимацией

	int animation = 1; // 1 - fade in, 2 - fade out (close), 3 - fade out (minimize), 4 - transition
	const double step = 0.1; // step 0.1
	const double step1 = 0.2; // step 0.2
public:
	ClassFade(Form^ f) : form(f) {
		timerFade = gcnew Timer();
		timerFade->Interval = 20;
		timerFade->Tick += gcnew EventHandler(this, &ClassFade::Animation);
		timerFade->Start();
	}

	void SetAnimation(std::string animationString) {
		if (animationString == "in") {
			animation = 1;
		}
		else if (animationString == "minimize") {
			animation = 2; // По вашему комментарию, minimize должен быть 2, а не 1
		}
		else if (animationString == "close") {
			animation = 3;
		}
		else if (animationString == "hide") {
			animation = 4;
		}
	}

	void Animation(Object^ sender, EventArgs^ e) {
		switch (animation)
		{
		case 1:
			if (form->Opacity < 1)
				form->Opacity += step; // Увеличиваем прозрачность
			else {
				timerFade->Stop(); // Завершение анимации
			}

			break;
		case 2:

			if (form->Opacity > 0)
				form->Opacity -= step1; // Уменьшаем прозрачность
			else {
				timerFade->Stop(); // Завершение анимации

				form->WindowState = FormWindowState::Minimized; // Минимизируем форму
				form->Opacity = 1; // Возвращаем прозрачность формы
			}
			break;
		case 3:
			if (form->Opacity > 0) {
				form->Opacity -= step1; // Уменьшаем прозрачность формы
			}
			else {
				timerFade->Stop(); // Останавливаем таймер после завершения
				Application::Exit();
				form->Close(); // Закрываем форму
			}
			break;
		case 4:
			if (form->Opacity > 0) {
				form->Opacity -= step1; // Уменьшаем прозрачность формы на шаг
			}
			else {
				timerFade->Stop(); // Завершение анимации
				form->Hide(); // Прячем форму
			}
			break;
		default:
			break;
		}
	}
};
