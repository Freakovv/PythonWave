#pragma once

#include "mainForm.h"
#include "MyPython.h"

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

void mainForm::SyntaxHighlight(RichTextBox^ richTB) {
	int selectionStart = richTB->SelectionStart;
	int selectionLength = richTB->SelectionLength;

	array<String^>^ keywords = { "False", "None", "True", "and", "as", "assert", "async", "await", "break", "class", "continue", "def", "del", "elif", "else", "except", "finally", "for", "from", "global", "if", "import", "in", "is", "lambda", "nonlocal", "not", "or", "pass", "raise", "return", "try", "while", "with", "yield", "len", "sum"};

	Color defaultTextColor = Color::FromArgb(238, 238, 238);
	Color keywordColor = Color::Violet;

	richTB->SelectAll();
	richTB->SelectionColor = defaultTextColor;
	richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Regular);

	// Преобразование текста RichTextBox в строку std::string
	std::string text = msclr::interop::marshal_as<std::string>(richTB->Text);

	// Подготовка регулярного выражения для поиска ключевых слов
	for each (String ^ keyword in keywords) {
		// Преобразование ключевого слова в std::string
		std::string keyword_pattern = msclr::interop::marshal_as<std::string>(keyword);

		// Подготовка регулярного выражения для поиска ключевого слова
		std::regex word_regex("\\b" + keyword_pattern + "\\b");

		// Поиск всех вхождений ключевого слова в тексте
		std::sregex_iterator words_begin(text.begin(), text.end(), word_regex);
		std::sregex_iterator words_end;

		// Обработка каждого найденного вхождения ключевого слова
		while (words_begin != words_end) {
			std::smatch match = *words_begin;
			int start = match.position();
			int length = match.length();

			richTB->Select(start, length);
			richTB->SelectionColor = keywordColor;
			richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Bold);

			// Переход к следующему вхождению
			++words_begin;
		}
	}

	// Восстановление исходного выделения
	richTB->Select(selectionStart, selectionLength);
	richTB->SelectionColor = defaultTextColor;
}

Void mainForm::btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isCoursesVisited)
		funcSelectTab(pageTasks);
	else if (!courseAnimationState)
	{
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

void mainForm::PyRun(String^ code) {
	if (String::IsNullOrEmpty(CurrentTask)) {
		MessageError->Show("CurrentTask is Null or Empty", "String^ CurrentTask");
		return;
	}

	MyPython PyRunner;
	String^ result = PyRunner.Start(code);
	MessageBox::Show(result);
}
Void mainForm::btnTestCode_Click(System::Object^ sender, System::EventArgs^ e){
	String^ code = richTask->Text;
	PyRun(code);
}

Void mainForm::richTask1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	SyntaxHighlight(richTask);
}
Void mainForm::TaskText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Получаем размер текста в текстовом поле
	System::Drawing::Size textSize = TextRenderer::MeasureText(TaskText->Text, TaskText->Font);

	// Рассчитываем новую позицию панели, учитывая размер текста, отступы и дополнительные 100 пикселей
	int Y = TaskText->Location.Y + textSize.Height + TaskText->Margin.Bottom + 30;

	// Устанавливаем новую позицию панели
	panelTask->Location = Point(panelTask->Location.X, Y);
}
Void mainForm::btnSaveCode_Click(System::Object^ sender, System::EventArgs^ e) {
	TaskText->Text = "Простое умножение чисел.\nВерните из функции произведение двцвшоатцуфагртфкпгшрт\n3123i129ijf9e2\n2eoikfjwqeo9ifmewokfm\n";
}
