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
void mainForm::SyntaxHighlight(RichTextBox^ richTB) {
	int selectionStart = richTB->SelectionStart;
	int selectionLength = richTB->SelectionLength;
	array<String^>^ keywords = { "False", "None", "True", "and", "as", "assert", "async", "await", "break", "class", "continue", "def", "del", "elif", "else", "except", "finally", "for", "from", "global", "if", "import", "in", "is", "lambda", "nonlocal", "not", "or", "pass", "raise", "return", "try", "while", "with", "yield", "len", "sum" };
	Color defaultTextColor = Color::FromArgb(238, 238, 238);
	Color keywordColor = Color::Violet;
	richTB->SelectAll();
	richTB->SelectionColor = defaultTextColor;
	richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Regular);
	std::string text = msclr::interop::marshal_as<std::string>(richTB->Text);
	for each (String ^ keyword in keywords) {
		std::string keyword_pattern = msclr::interop::marshal_as<std::string>(keyword);
		std::regex word_regex("\\b" + keyword_pattern + "\\b");
		std::sregex_iterator words_begin(text.begin(), text.end(), word_regex);
		std::sregex_iterator words_end;
		while (words_begin != words_end) {
			std::smatch match = *words_begin;
			int start = match.position();
			int length = match.length();
			richTB->Select(start, length);
			richTB->SelectionColor = keywordColor;
			richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Bold);
			++words_begin;
		}
	}
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
void mainForm::PyRun(String^ code) {
	if (String::IsNullOrEmpty(CurrentTask)) {
		MessageError->Show("CurrentTask is Null or Empty", "������ ����������: String^ CurrentTask");
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
			MessageInfo->Show("������ ������ �����.", "�����������!");
			MessageWarning->Show("�� �� �������� ������ �� ��� �������, ��� ��� �� ��� ������ ��� ������ �����.");
			return;
		}
		ClassProgress^ progress = gcnew ClassProgress(User);
		int points;
		if (CurrentDifficulty == "easy") {
			progress->SolveTaskB();
			points = progress->getTaskPoint(1);
			validate->completedB_count++;
		}
		else if (CurrentDifficulty == "middle") {
			progress->SolveTaskA();
			points = progress->getTaskPoint(2);
			validate->completedA_count++;
		}
		else if (CurrentDifficulty == "hard") {
			progress->SolveTaskS();
			points = progress->getTaskPoint(3);
			validate->completedS_count++;
		}
		else if (CurrentDifficulty == "very_hard") {
			progress->SolveTaskSplus();
			points = progress->getTaskPoint(4);
			validate->completedSplus_count++;
		}
		else {
			MessageError->Show("CurrentDifficulty �� ����������", "������ PyRun()");
			return;
		}
		validate->SolveTask(CurrentTask);
		validate->SetTaskCompletionDate(CurrentTask);
		String^ text = "������";
		if (points == 1)
			text = "����";
		else if (points > 1 && points < 5)
			text = "�����";
		else if (points > 4)
			text = "������";
		MessageInfo->Show("������ ������ �����. �� �������� " + points + " " + text, "�����������!");
		UserProgress = progress->GetCurrentProgress();
	}
	else if (result == "ERROR") {
		MessageError->Show("������ � ����", "��������");
	}
	else if (result == "FAILED") {
		MessageWarning->Show("������ ������ �������", "PythonWave");
	}
	else {
		MessageBox::Show(result, "�������������� ���������");
	}
	if (result == "ERROR" || result == "FAILED") {
		try {
			String^ trimmedResult = PythonOutput->Substring(PythonOutput->IndexOf("Traceback"));
			MessageBox::Show(trimmedResult, "����� Python");
		}
		catch (Exception^ e) {
			MessageBox::Show(PythonOutput, "����� Python");
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
			MessageInfo->Show("���� ������� ���������", "�������");
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message, "������ ����������");
		}
	}
	else {
		MessageWarning->Show("��� ���������� ��� ����� ������� �������������� ���, ����� ����� ��������� ���.", "��������");
	}
}
Void mainForm::btnReport_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ period = dropdownReport->Text;
	ClassTasks^ data = gcnew ClassTasks(User);
	String^ taskStates = data->GetTaskStates();
	int completed = 0;
	if (period == "������") {
		MessageWarning->Show("��� ��������� ������ �������� ������", "��������");
		return;
	}
	DateTime endDate = DateTime::Now;
	DateTime startDate;
	if (period == "1 ������") {
		startDate = endDate.AddDays(-7);
	}
	else if (period == "2 ������") {
		startDate = endDate.AddDays(-14);
	}
	else if (period == "3 ������") {
		startDate = endDate.AddDays(-21);
	}
	else if (period == "4 ������") {
		startDate = endDate.AddDays(-28);
	}
	else if (period == "�����") {
		startDate = endDate.AddMonths(-1);
	}
	else {
		period = "1 ������";
		startDate = endDate.AddDays(-7);
	}
	completed = data->getCompletedCount(startDate, endDate);
	String^ MaxDiff = data->getMaxDifficulty();
	array<String^>^ EzTasks = { "add", "multiply", "divide", "subtract", "even_or_odd" };
	array<String^>^ MidTasks = { "better_than_average", "positive_sum", "reverse_seq" };
	array<String^>^ HardTasks = { "get_count", "high_and_low", "square_digits" };
	array<String^>^ VeryHardTasks = { "get_char", "symmetric_point", "get_middle" };
	int ezCount = 0, midCount = 0, hardCount = 0, veryHardCount = 0;
	String^ ezTasksCompleted = "";
	String^ midTasksCompleted = "";
	String^ hardTasksCompleted = "";
	String^ veryHardTasksCompleted = "";
	for each (KeyValuePair<String^, bool> kvp in data->taskDict) {
		if (kvp.Value) {
			if (Array::IndexOf(EzTasks, kvp.Key) != -1) {
				ezCount++;
				ezTasksCompleted += kvp.Key + ", ";
			}
			else if (Array::IndexOf(MidTasks, kvp.Key) != -1) {
				midCount++;
				midTasksCompleted += kvp.Key + ", ";
			}
			else if (Array::IndexOf(HardTasks, kvp.Key) != -1) {
				hardCount++;
				hardTasksCompleted += kvp.Key + ", ";
			}
			else if (Array::IndexOf(VeryHardTasks, kvp.Key) != -1) {
				veryHardCount++;
				veryHardTasksCompleted += kvp.Key + ", ";
			}
		}
	}
	if (ezTasksCompleted->Length > 0) ezTasksCompleted = ezTasksCompleted->Substring(0, ezTasksCompleted->Length - 2);
	if (midTasksCompleted->Length > 0) midTasksCompleted = midTasksCompleted->Substring(0, midTasksCompleted->Length - 2);
	if (hardTasksCompleted->Length > 0) hardTasksCompleted = hardTasksCompleted->Substring(0, hardTasksCompleted->Length - 2);
	if (veryHardTasksCompleted->Length > 0) veryHardTasksCompleted = veryHardTasksCompleted->Substring(0, veryHardTasksCompleted->Length - 2);
	String^ FullMessage = "���������� �������� �����: " + completed.ToString() + "\n\n";
	FullMessage += "������ ������:\n���-��: " + ezCount + "\n�������� ������: " + ezTasksCompleted + "\n\n";
	FullMessage += "������� ������:\n���-��: " + midCount + "\n�������� ������: " + midTasksCompleted + "\n\n";
	FullMessage += "������� ������:\n���-��: " + hardCount + "\n�������� ������: " + hardTasksCompleted + "\n\n";
	FullMessage += "����� ������� ������:\n���-��: " + veryHardCount + "\n�������� ������: " + veryHardTasksCompleted + "\n\n";
	FullMessage += "������� �������������� �����?";
	String^ caption = "����� �� ������: " + period;
	if (MessageQuestion->Show(FullMessage, caption) == ::DialogResult::Yes) {
		SaveReportToFile(FullMessage);
	}
}
Void mainForm::SaveReportToFile(String^ reportContent) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text File|*.txt";
	saveFileDialog->Title = "��������� �����";
	String^ defaultFileName = "����� " + DateTime::Now.ToString("dd.MM") + ".txt";
	saveFileDialog->FileName = defaultFileName;
	if (saveFileDialog->ShowDialog() == ::DialogResult::OK && saveFileDialog->FileName != "") {
		try {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog->FileName);
			int exportQuestionIndex = reportContent->LastIndexOf("������� �������������� �����?");
			if (exportQuestionIndex != -1) {
				reportContent = reportContent->Substring(0, exportQuestionIndex);
			}
			sw->Write(reportContent);
			sw->WriteLine();
			sw->WriteLine("����� ������: " + DateTime::Now.ToString("dd.MM.yyyy HH:mm:ss"));
			sw->WriteLine("�������� ������ �������� � �����������! � ��������� PythonWave.");
			sw->Close();
			MessageBox::Show("����� ������� ��������!", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageError->Show(ex->Message);
		}
	}
}