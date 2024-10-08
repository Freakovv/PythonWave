#pragma once
#include "mainForm.h"
#include "ClassProgress.h"
void mainForm::logsLoad() {
	if (File::Exists("script//logs.bin"))
		isCoursesVisited = Convert::ToBoolean(readBinaryFile("script//logs.bin"));
	else
		isCoursesVisited = false;
}
Void mainForm::enableMail(bool enable) {
	if (enable) {
		textBoxCode->Clear();
		textBoxEmail->Enabled = true;
		textBoxCode->Enabled = false;
		textBoxCodeNew->Enabled = false;
		buttonSendMail->Enabled = true;
		buttonCheckCode->Enabled = false;
		pictureBoxCheckMail->Enabled = true;
		pictureBoxCheckCode->Enabled = true;
		pictureBoxCheckMail->Visible = false;
		pictureBoxCheckCode->Visible = false;
		linkReMail->Visible = false;
	}
	else {
		textBoxEmail->Enabled = true;
		textBoxCode->Enabled = true;
		buttonSendMail->Enabled = true;
		buttonCheckCode->Enabled = true;
		pictureBoxCheckMail->Enabled = false;
		pictureBoxCheckCode->Enabled = false;
	}
}
String^ mainForm::GetFolderCreationDate(String^ folderPath) {
	pin_ptr<const wchar_t> wch = PtrToStringChars(folderPath);
	const std::wstring folderPathStr(wch);
	WIN32_FILE_ATTRIBUTE_DATA fileInfo;
	if (GetFileAttributesEx(folderPathStr.c_str(), GetFileExInfoStandard, &fileInfo)) {
		FILETIME creationTime = fileInfo.ftCreationTime;
		SYSTEMTIME systemTime;
		FileTimeToSystemTime(&creationTime, &systemTime);
		array<String^>^ months = gcnew array<String^> {
			"������", "�������", "�����", "������", "���", "����",
				"����", "�������", "��������", "�������", "������", "�������"
		};
		String^ creationDateString = String::Format("{0} {1} {2}",
			systemTime.wDay, months[systemTime.wMonth - 1], systemTime.wYear);
		return creationDateString;
	}
	else {
		return "������ ��������� ����";
	}
}
String^ mainForm::readBinaryFile(String^ filePath) {
	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
	BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
	String^ result = binaryReader->ReadString();
	fileStream->Close();
	binaryReader->Close();

	return result;
}
size_t mainForm::readPassword(String^ filePath) {
	try {
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
		BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
		size_t result = binaryReader->ReadUInt64();
		binaryReader->Close();
		fileStream->Close();
		return result;
	}
	catch (Exception^ e) {
		MessageError->Show("0: " + e->Message);
		return 0;
	}
}
void mainForm::writeBinaryFile(String^ filePath, String^ content) {
	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
	BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);
	binaryWriter->Write(content);
	binaryWriter->Close();
	fileStream->Close();
}
bool mainForm::IsValidEmail(String^ email) {
	return email->Contains("@") && email->Contains(".");
}
int mainForm::generateSecurityCode() {
	int Code = rand() % 900000 + 100000;
	return Code;
}
void mainForm::DeleteDirectory(String^ folderPath) {
	try {
		DirectoryInfo^ directory = gcnew DirectoryInfo(folderPath);
		if (directory->Exists) {
			directory->Delete(true);
		}
		else {
			MessageError->Show("������� �� ������");
		}
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message);
	}
}
void mainForm::DataLoad() {
	ClassProgress data(User);
	String^ fileUserEmail = User + "//userData.bin";
	String^ fileUserBirth = User + "//userBirth.bin";
	String^ fileUserSex = User + "//userSex.bin";
	String^ fileUserName = User + "//userName.bin";
	String^ fileUserSurname = User + "//userSurname.bin";
	try {
		UserEmail = readBinaryFile(fileUserEmail);
		UserBirth = readBinaryFile(fileUserBirth);
		UserSex = readBinaryFile(fileUserSex);
		UserName = readBinaryFile(fileUserName);
		UserRank = SetUserLvl();
		UserProgress = data.GetCurrentProgress();
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message, "������ �������� ������ ������������");
	}
	String^ pathToAvatarPng = User + "//avatar.png";
	String^ pathToAvatarJpg = User + "//avatar.jpg";
	if (File::Exists(fileUserSurname)) {
		UserSurname = readBinaryFile(fileUserSurname);
	}
	if (File::Exists(pathToAvatarJpg)) {
		pictureProfile->ImageLocation = pathToAvatarJpg;
		pictureUserBar->ImageLocation = pathToAvatarJpg;
		pictureProfileEdit->ImageLocation = pathToAvatarJpg;
	}
	else if (File::Exists(pathToAvatarPng)) {
		pictureProfile->ImageLocation = pathToAvatarPng;
		pictureUserBar->ImageLocation = pathToAvatarPng;
		pictureProfileEdit->ImageLocation = pathToAvatarPng;
	}
	lblLogin->Text = User;
	lblName->Text = "���: " + UserName;
	lblSurname->Text = "�������: " + UserSurname;
	lblSex->Text = "���: " + UserSex;
	lblBirth->Text = "���� ��������: " + UserBirth;
	lblEmail->Text = "Email: " + UserEmail;
	lblRegDate->Text = "���� �����������: " + GetFolderCreationDate(User);
	lblSexEdit->Text = "���:\n" + UserSex;
	lblBirthEdit->Text = "���� ��������:\n" + UserBirth;
	lblProfileRank->Text = "�������: " + UserRank;
	lblAnim1->Text = "������������ ��� �� �������� �������, " + UserName + "!";
	labelNameBar->Text = UserName;
	labelRankBar->Text = UserRank;
	StarsUser->Location = Point(labelRankBar->Right + 5, labelRankBar->Top);
	textBoxUserName->Text = UserName;
	textBoxUserSurname->Text = UserSurname;
	textBoxEmail->Text = UserEmail;
}
void mainForm::DataChange() {
	UserName = textBoxUserName->Text;
	UserSurname = textBoxUserSurname->Text;
	UserEmail = textBoxEmail->Text;
	lblName->Text = "���: " + UserName;
	lblSurname->Text = "�������: " + UserSurname;
	lblEmail->Text = "Email: " + UserEmail;
	labelNameBar->Text = UserName;
}
void mainForm::DataSave() {
	String^ fileUserEmail = User + "//userData.bin";
	String^ fileUserName = User + "//userName.bin";
	String^ fileUserSurname = User + "//userSurname.bin";
	writeBinaryFile(fileUserEmail, UserEmail);
	writeBinaryFile(fileUserName, UserName);
	writeBinaryFile(fileUserSurname, UserSurname);
}
void mainForm::cfgLoad() {
	Config^ config = config->LoadConfig();
	borderlessForm->BorderRadius = config->borderForm;
	borderlessForm->HasFormShadow = config->hasFormShadow;
	dragMain->TransparentWhileDrag = config->dragTransparent;
	greeting = config->greeting;
	borderBtn = config->borderBtn;
	volume = config->volume;
	alwaysHideMenu = config->alwaysHideMenu;
	borderForm = config->borderForm;
	formShadow = config->hasFormShadow;
	transparentWhileDrag = config->dragTransparent;
	PythonWaveStyle = config->PythonWaveStyle;
	TrackBorderBtn->Value = borderBtn;
	TrackBorderForm->Value = borderForm;
	TrackVolume->Value = volume;
	labelBorderBtn->Text = Convert::ToString(borderBtn);
	labelBorderForm->Text = Convert::ToString(borderForm);
	labelVolume->Text = Convert::ToString(volume);
	toggleAlwaysHide->Checked = alwaysHideMenu;
	toggleGreeting->Checked = greeting;
	toggleStyle->Checked = PythonWaveStyle;
	toggleShadows->Checked = formShadow;
	toggleTransparent->Checked = transparentWhileDrag;
	RegisterMouseDownEvent(this, alwaysHideMenu);
	PythonWaveStyleState(PythonWaveStyle);
}
void mainForm::cfgSave() {
	Config^ config = gcnew Config();
	config->alwaysHideMenu = alwaysHideMenu;
	config->borderBtn = borderBtn;
	config->borderForm = borderForm;
	config->hasFormShadow = formShadow;
	config->dragTransparent = transparentWhileDrag;
	config->PythonWaveStyle = PythonWaveStyle;
	config->greeting = greeting;
	config->volume = volume;
	config->SaveConfig();
}
String^ mainForm::SetUserLvl() {
	String^ newRank;
	String^ fileRankPath = User + "//lvl.bin";
	if (!File::Exists(fileRankPath)) {
		newRank = "�������";
		writeBinaryFile(fileRankPath, newRank);
		return newRank;
	}
	if (UserProgress >= 20 && UserProgress <= 39) {
		newRank = "�������������";
		StarsUser->Value = 1.5;
	}
	else if (UserProgress >= 40 && UserProgress <= 59) {
		newRank = "�����������";
		StarsUser->Value = 2.5;
	}
	else if (UserProgress >= 60 && UserProgress <= 79) {
		newRank = "�������";
		StarsUser->Value = 3.5;
	}
	else if (UserProgress >= 80 && UserProgress <= 100) {
		newRank = "������";
		StarsUser->Value = 4.5;
	}
	else if (UserProgress >= 100) {
		newRank = "�������";
		StarsUser->Value = 5;
		StarsUser->RatingColor = Color::Red;
	}
	else {
		newRank = "�������";
		StarsUser->Value = 0;
		return newRank;
	}
	String^ fileRank = User + "//lvl.bin";
	writeBinaryFile(fileRank, newRank);
	return newRank;
}
Void mainForm::labelRankBar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (isDataLoaded) {
		MessageInfo->Show("�� �������� ����� �������", "�����������, " + UserRank);
	}
}
Void mainForm::HideWAnimation(Forms::Control^ CONTROL) {
	UI2::AnimatorNS::Animation^ MYANIM = gcnew UI2::AnimatorNS::Animation();
	gunaTransition->HideSync(dynamic_cast<Forms::Control^>(CONTROL), true, MYANIM->Transparent);
}
Void mainForm::ShowWAnimation(Forms::Control^ CONTROL) {
	UI2::AnimatorNS::Animation^ MYANIM = gcnew UI2::AnimatorNS::Animation();
	gunaTransition->ShowSync(dynamic_cast<Forms::Control^>(CONTROL), true, MYANIM->Transparent);
}