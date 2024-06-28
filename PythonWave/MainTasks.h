#pragma once

#include "mainForm.h"
#include "MyPython.h"
#include "ClassTasks.h"

using namespace PythonWave;
using namespace System;

int currentAnim = 1;
double animSeconds = 2;
int secondsToStartAnim = 4;
bool canSaveFunc = false;



// Анимации, хайлайты


void mainForm::SyntaxHighlight(RichTextBox^ richTB) {
	int selectionStart = richTB->SelectionStart;
	int selectionLength = richTB->SelectionLength;

	array<String^>^ keywords = { "False", "None", "True", "and", "as", "assert", "async", "await", "break", "class", "continue", "def", "del", "elif", "else", "except", "finally", "for", "from", "global", "if", "import", "in", "is", "lambda", "nonlocal", "not", "or", "pass", "raise", "return", "try", "while", "with", "yield", "len", "sum" };

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

Void mainForm::richTask1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	SyntaxHighlight(richTask);
	canSaveFunc = false;
}

Void mainForm::TaskText_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	TaskText->Multiline = true;
	TaskText->WordWrap = true;
	TaskText->ScrollBars = ScrollBars::Vertical;
}

// Задачи

Void mainForm::LoadTask() {
	try {
		String^ pathToText = "script//text//" + CurrentDifficulty + "//" + CurrentTask + ".txt";
		String^ pathToFunc = "script//text//" + CurrentDifficulty + "//" + CurrentTask + ".py";

		FileStream^ fsText = gcnew FileStream(pathToText, FileMode::Open, FileAccess::Read);
		StreamReader^ srText = gcnew StreamReader(fsText);

		String^ text = srText->ReadToEnd();
		srText->Close();
		fsText->Close();

		FileStream^ fsFunc = gcnew FileStream(pathToFunc, FileMode::Open, FileAccess::Read);
		StreamReader^ srFunc = gcnew StreamReader(fsFunc);

		String^ func = srFunc->ReadToEnd();
		srFunc->Close();
		fsFunc->Close();

		TaskText->Text = text;
		richTask->Text = func;
		SyntaxHighlight(richTask);
		PagesTasks->SelectTab(TaskPage);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}

void mainForm::InitializeTaskArrays() {
	easyTasks = gcnew array<String^> {"add", "subtract", "multiply", "divide", "even_or_odd"};
	middleTasks = gcnew array<String^> {"positive_sum", "better_than_average", "reverse_seq"};
	hardTasks = gcnew array<String^> {"get_count", "high_and_low", "square_digits"};
	veryHardTasks = gcnew array<String^> {"get_char", "get_middle", "symmetric_point"};
}
array<String^>^ mainForm::GetTaskArray() {
	if (CurrentDifficulty == "easy") {
		return easyTasks;
	}
	else if (CurrentDifficulty == "middle") {
		return middleTasks;
	}
	else if (CurrentDifficulty == "hard") {
		return hardTasks;
	}
	else if (CurrentDifficulty == "very_hard") {
		return veryHardTasks;
	}
	return nullptr;
}

Void mainForm::NextTask() {
	InitializeTaskArrays();
	array<String^>^ tasks = GetTaskArray();
	if (tasks == nullptr) {
		MessageError->Show("Error: Invalid difficulty", "Transition is not possible");
		return;
	}

	TaskIndex = Array::IndexOf(tasks, CurrentTask);
	if (TaskIndex == -1) {
		MessageError->Show("Error: Invalid Index", "Transition is not possible");
		return;
	}

	TaskIndex = (TaskIndex + 1) % tasks->Length;
	CurrentTask = tasks[TaskIndex];

	LoadTask();
}
Void mainForm::PreviousTask() {
	InitializeTaskArrays();
	array<String^>^ tasks = GetTaskArray();
	if (tasks == nullptr) {
		MessageError->Show("Error: Invalid difficulty", "Transition is not possible");
		return;
	}

	TaskIndex = Array::IndexOf(tasks, CurrentTask);
	if (TaskIndex == -1) {
		MessageError->Show("Error: Invalid Index", "Transition is not possible");
		return;
	}

	TaskIndex = (TaskIndex - 1 + tasks->Length) % tasks->Length;
	CurrentTask = tasks[TaskIndex];

	LoadTask();
}

Void mainForm::btnPerviousTask_Click(System::Object^ sender, System::EventArgs^ e) {
	PreviousTask();
}
Void mainForm::btnNextTask_Click(System::Object^ sender, System::EventArgs^ e) {
	NextTask();
}
Void mainForm::btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	PagesTasks->SelectTab(TasksMain);
}

Void mainForm::lblPanelTaskInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPanelTaskInfo->Visible = false;
}
Void mainForm::panelTask_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPanelTaskInfo->Visible = false;
}

void mainForm::SetTaskAndLoad(String^ task, String^ difficulty) {
	CurrentTask = task;
	CurrentDifficulty = difficulty;
	LoadTask();
}

Void mainForm::btnTaskAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("add", "easy");
}
Void mainForm::btnTaskDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("divide", "easy");
}
Void mainForm::btnTaskMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("multiply", "easy");
}
Void mainForm::btnTaskSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("subtract", "easy");
}
Void mainForm::btnTaskEvenOrOdd_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("even_or_odd", "easy");
}
Void mainForm::btnTaskPositiveSum_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("positive_sum", "middle");
}
Void mainForm::btnTaskBetterThanAverage_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("better_than_average", "middle");
}
Void mainForm::btnReverseSeq_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("reverse_seq", "middle");
}
Void mainForm::btnTaskGetCount_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("get_count", "hard");
}
Void mainForm::btnTaskHighAndLow_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("high_and_low", "hard");
}
Void mainForm::btnTaskSquareDigits_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("square_digits", "hard");
}
Void mainForm::btnTaskGetChar_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("get_char", "very_hard");
}
Void mainForm::btnHero_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("get_middle", "very_hard");
}
Void mainForm::btnSymmetricPoint_Click(System::Object^ sender, System::EventArgs^ e) {
	SetTaskAndLoad("symmetric_point", "very_hard");
}

// Проверка кода и его сохранение
void mainForm::PyRun(String^ code) {
	if (String::IsNullOrEmpty(CurrentTask)) {
		MessageError->Show("CurrentTask is Null or Empty", "Ошибка переменной: String^ CurrentTask");
		return;
	}

	MyPython PyRunner;
	String^ PythonOutput = PyRunner.Start(code);

	String^ pathToResult = "script//result.txt";
	if (!File::Exists(pathToResult)) {
		return;
	}

	FileStream^ fs = gcnew FileStream(pathToResult, FileMode::Open, FileAccess::Read);
	StreamReader^ sr = gcnew StreamReader(fs);
	String^ result = sr->ReadToEnd()->Trim();
	sr->Close();
	fs->Close();

	if (result == "OK") {
		canSaveFunc = true;
		ClassTasks^ validate = gcnew ClassTasks(User);

		bool isTaskCompleted = validate->GetTaskValue(CurrentTask);
		if (isTaskCompleted) {
			MessageInfo->Show("Задача решена верно.", "Поздравляем!");
			MessageWarning->Show("Вы не получите баллов за это решение, так как вы уже решили эту задачу ранее.");
			return;
		}

		ClassProgress^ progress = gcnew ClassProgress(User);
		validate->SolveTask(CurrentTask);
		validate->SetTaskCompletionDate(CurrentTask);

		int points;
		if (CurrentDifficulty == "easy") {
			progress->SolveTaskB();
			points = progress->getTaskPoint(1);
		}
		else if (CurrentDifficulty == "middle") {
			progress->SolveTaskA();
			points = progress->getTaskPoint(2);
		}
		else if (CurrentDifficulty == "hard") {
			progress->SolveTaskS();
			points = progress->getTaskPoint(3);
		}
		else if (CurrentDifficulty == "very_hard") {
			progress->SolveTaskSplus();
			points = progress->getTaskPoint(4);
		}
		else {
			MessageError->Show("CurrentDifficulty не определена", "Ошибка PyRun()");
			return;
		}

		String^ text = "баллов";
		if (points == 1)
			text = "балл";
		else if (points > 1 && points < 5)
			text = "балла";
		else if (points > 4)
			text = "баллов";
		
		MessageInfo->Show("Задача решена верно. Вы получите " + points + " " + text, "Поздравляем!");
		UserProgress = progress->GetCurrentProgress();
	}
	else if (result == "ERROR") {
		MessageError->Show("Ошибка в коде", "Внимание");
	}
	else if (result == "FAILED") {
		MessageWarning->Show("Задача решена неверно", "PythonWave");
	}
	else {
		MessageBox::Show(result, "Неопределенный результат");
	}
	if (result == "ERROR" || result == "FAILED") {
		try {
			String^ trimmedResult = PythonOutput->Substring(PythonOutput->IndexOf("Traceback"));
			MessageBox::Show(trimmedResult, "Вывод Python");
		}
		catch (Exception^ e) {
			MessageBox::Show(PythonOutput, "Вывод Python");
		}
	}
	File::Delete(pathToResult);
}

int mainForm::GetTasksCompletedCount(int substract) {
	ClassTasks date(User);
	DateTime end = DateTime::Now;
	DateTime start = end.AddDays(substract);
	return date.getCompletedCount(start, end);
}

Void mainForm::btnTestCode_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ code = richTask->Text;
	PyRun(code);
}

Void mainForm::btnSaveCode_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ pathToFunc = "script/text/" + CurrentDifficulty + "/" + CurrentTask + ".py";
	String^ code = richTask->Text;

	if (canSaveFunc) {
		try {
			FileStream^ fs = gcnew FileStream(pathToFunc, FileMode::Create, FileAccess::Write);
			StreamWriter^ sw = gcnew StreamWriter(fs);
			sw->Write(code);
			sw->Close();
			fs->Close();
			MessageInfo->Show("Ваше решение сохранено", "Успешно");
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message, "Ошибка сохранения");
		}
	}
	else {
		MessageWarning->Show("Для сохранения вам нужно успешно протестировать код, затем сразу сохранить его.", "Внимание");
	}
}