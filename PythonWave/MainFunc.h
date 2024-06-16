#pragma once
#include "mainForm.h"
#include "ClassProgress.h"

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
			"Января", "Февраля", "Марта", "Апреля", "Мая", "Июня",
				"Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"
		};

		String^ creationDateString = String::Format("{0} {1} {2}",
			systemTime.wDay, months[systemTime.wMonth - 1], systemTime.wYear);

		return creationDateString;
	}
	else {
		return "Ошибка получения даты";
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
			// Удаляем папку и все ее содержимое
			directory->Delete(true);
		}
		else {
			MessageError->Show("Аккаунт не найден");
		}
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message);
	}
}

// Data
void mainForm::DataLoad() {
	ClassProgress data(User);
	PROGRESS = data.GetCurrentProgress();

	String^ fileUserEmail = User + "//userData.bin";
	String^ fileUserBirth = User + "//userBirth.bin";
	String^ fileUserSex = User + "//userSex.bin";
	String^ fileUserName = User + "//userName.bin";
	String^ fileUserSurname = User + "//userSurname.bin";
	String^ fileUserRank = User + "//lvl.bin";

	try {
		UserEmail = readBinaryFile(fileUserEmail);
		UserBirth = readBinaryFile(fileUserBirth);
		UserSex = readBinaryFile(fileUserSex);
		UserName = readBinaryFile(fileUserName);
		UserRank = readBinaryFile(fileUserRank);
	}
	catch (Exception^ e) {
		MessageError->Show(e->Message, "Ошибка загрузки данных пользователя");
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
	lblName->Text = "Имя: " + UserName;
	lblSurname->Text = "Фамилия: " + UserSurname;
	lblSex->Text = "Пол: " + UserSex;
	lblBirth->Text = "Дата рождения: " + UserBirth;
	lblEmail->Text = "Email: " + UserEmail;
	lblRegDate->Text = "Дата регистрации: " + GetFolderCreationDate(User);
	lblSexEdit->Text = "Пол:\n" + UserSex;
	lblBirthEdit->Text = "Дата рождения:\n" + UserBirth;

	lblAnim1->Text = "Приветствуем вас на странице заданий, " + UserName + "!";

	labelNameBar->Text = UserName;
	labelRankBar->Text = UserRank;
	StarsUser->Location = Point(labelRankBar->Right + 5, labelRankBar->Top);

	textBoxUserName->Text = UserName;
	textBoxUserSurname->Text = UserSurname;
	textBoxEmail->Text = UserEmail;
}
void mainForm::DataChange() {
	// Local
	UserName = textBoxUserName->Text;
	UserSurname = textBoxUserSurname->Text;
	UserEmail = textBoxEmail->Text;

	lblName->Text = "Имя: " + UserName;
	lblSurname->Text = "Фамилия: " + UserSurname;
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

	// Переменные
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

	// Страница настроек
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

void mainForm::levelUp() {
	if (UserRank == "Новичок") {
		UserRank = "Исследователь";
		MessageInfo->Show("Вы повысили свой уровень!", "Поздравляем, " + UserRank + "!");
	}
	else if (UserRank == "Исследователь") {
		UserRank = "Разработчик";
		MessageInfo->Show("Вы повысили свой уровень!", "Поздравляем, " + UserRank + "!");
	}
	else if (UserRank == "Разработчик") {
		UserRank = "Инженер";
		MessageInfo->Show("Вы повысили свой уровень!", "Поздравляем, " + UserRank + "!");
	}
	else if (UserRank = "Инженер") {
		UserRank = "Мастер";
		MessageInfo->Show("Вы получили максимальный уровень", "Поздравляем!");
	}

	String^ fileRank = User + "//lvl.bin";
	writeBinaryFile(fileRank, UserRank);
	DataLoad();
}
