#include "animations.h"
#include "elements.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PythonWave::login form;
    // Ќачальные координаты формы дл€ открыти€ по центру
    form.StartPosition = FormStartPosition::Manual;
    form.Location = Point((Screen::PrimaryScreen->Bounds.Width - form.Width) / 2,
        (Screen::PrimaryScreen->Bounds.Height - form.Height) / 2);
    Application::Run(%form);
    return 0;
}

