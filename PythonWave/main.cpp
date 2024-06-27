#include "auth-header.h"
#include "profile-header.h"
#include "main-header.h"

using namespace PythonWave;
[STAThread]

int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	auth form;
	form.StartPosition = FormStartPosition::Manual;
	form.Location = Point((Screen::PrimaryScreen->Bounds.Width - form.Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - form.Height) / 2);
	Application::Run(% form);
}
void authToProfile(String^ construct) {
	profile^ profileForm = gcnew profile(construct);
	profileForm->StartPosition = FormStartPosition::Manual;
	profileForm->Location = Point((Screen::PrimaryScreen->Bounds.Width - profileForm->Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - profileForm->Height) / 2);
	for each (Form ^ form in Application::OpenForms)
	{
		if (form->GetType() == auth::typeid)
		{
			form->Hide();
			break;
		}
	}
	profileForm->Show();
}
void authToMain(String^ construct) {
	mainForm^ mainF = gcnew mainForm(construct);
	mainF->StartPosition = FormStartPosition::Manual;
	mainF->Location = Point((Screen::PrimaryScreen->Bounds.Width - mainF->Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - mainF->Height) / 2);
	for each (Form ^ form in Application::OpenForms)
	{
		if (form->GetType() == auth::typeid)
		{
			form->Hide();
			break;
		}
	}
	mainF->Show();
}
void mainToAuth() {
	if (Directory::Exists("logs")) {
		Directory::Delete("logs", true);
	}
	else {
		MessageBox::Show("Error");
	}
	auth^ form = gcnew auth();
	form->StartPosition = FormStartPosition::Manual;
	form->Location = Point((Screen::PrimaryScreen->Bounds.Width - form->Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - form->Height) / 2);
	for each (Form ^ form in Application::OpenForms)
	{
		if (form->GetType() == auth::typeid)
		{
			form->Hide();
			break;
		}
	}
	form->Show();
}
void SetCenter(Control^ background, Control^ control, int mode = 0) {
	int panelWidth = background->Width;
	int panelHeight = background->Height;
	int controlWidth = control->Width;
	int controlHeight = control->Height;
	int newX = (panelWidth - controlWidth) / 2;
	int newY = (panelHeight - controlHeight) / 2;
	switch (mode)
	{
	case 0:
		MessageBox::Show("background: " + background->Name + "\nelement: " + control->Name, "Error: SetCenter mode = 0");
		break;
	case 1:
		control->Location = Point(newX, control->Location.Y);
		break;
	case 2:
		control->Location = Point(control->Location.X, newY);
		break;
	case 3:
		control->Location = Point(newX, newY);
		break;
	default:
		MessageBox::Show("Ошибка в функции SetCenter", "Неверное значение mode");
		break;
	}
}
String^ GetFolderCreationDate(String^ folderPath) {
	pin_ptr<const wchar_t> wch = PtrToStringChars(folderPath);
	const std::wstring& folderPathStr = wch;
	WIN32_FILE_ATTRIBUTE_DATA fileInfo;
	if (GetFileAttributesEx(folderPathStr.c_str(), GetFileExInfoStandard, &fileInfo)) {
		FILETIME creationTime = fileInfo.ftCreationTime;
		SYSTEMTIME systemTime;
		FileTimeToSystemTime(&creationTime, &systemTime);
		String^ creationDateString = String::Format("{0}/{1}/{2}", systemTime.wDay, systemTime.wMonth, systemTime.wYear);
		return creationDateString;
	}
	else {
		return "Failed to get folder creation date.";
	}
}