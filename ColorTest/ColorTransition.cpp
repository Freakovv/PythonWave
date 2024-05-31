#include "ColorTransition.h"
using namespace ColorTest;

[STAThread]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ColorTransition form;

	//Установка формы по центру
	form.StartPosition = FormStartPosition::Manual;
	form.Location = Point((Screen::PrimaryScreen->Bounds.Width - form.Width) / 2,
		(Screen::PrimaryScreen->Bounds.Height - form.Height) / 2);

	Application::Run(% form);
}