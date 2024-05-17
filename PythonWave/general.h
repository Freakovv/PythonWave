#pragma once
#include "auth-header.h"
#include "profile-header.h"
#include "main-header.h"
#include <Windows.h>

using namespace System; // ����� ������������ ���� .NET Framework
using namespace System::Drawing; // ��� ������ � ������������ ���������
using namespace System::Windows; // ��� ������ � ���������� ���������� � ������
using namespace System::Windows::Forms; //

void authToProfile(String^ construct) {
    // �������� ������� ����� �������
    profile^ profileForm = gcnew profile(construct);
    profileForm->StartPosition = FormStartPosition::Manual;
    profileForm->Location = Point((Screen::PrimaryScreen->Bounds.Width - profileForm->Width) / 2,
        (Screen::PrimaryScreen->Bounds.Height - profileForm->Height) / 2);

    // ������� ����� ����������� (���� ��� ��� �� ������)
    for each (Form ^ form in Application::OpenForms)
    {
        if (form->GetType() == auth::typeid)
        {
            form->Hide();
            break;
        }
    }

    // ����������� ����� �������
    profileForm->Show();
}
void authToMain(String^ construct) {
    // �������� ������� ����� �������
    mainForm^ mainF = gcnew mainForm(construct);
    mainF->StartPosition = FormStartPosition::Manual;
    mainF->Location = Point((Screen::PrimaryScreen->Bounds.Width - mainF->Width) / 2,
        (Screen::PrimaryScreen->Bounds.Height - mainF->Height) / 2);

    // ������� ����� ����������� (���� ��� ��� �� ������)
    for each (Form^ form in Application::OpenForms)
    {
        if (form->GetType() == auth::typeid)
        {
            form->Hide();
            break;
        }
    }

    // ����������� ����� �������
    mainF->Show();
}

void SetCenter(Control^ back, Control^ control, int mode = 0) {
	int panelWidth = back->Width;
	int panelHeight = back->Height;

	int controlWidth = control->Width;
	int controlHeight = control->Height;

	int newX = (panelWidth - controlWidth) / 2;
	int newY = (panelHeight - controlHeight) / 2;

	switch (mode)
	{
	case 0:
		MessageBox::Show("������ � ������� SetCenter", "�� ���� ������� �� ������ mode");
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
		MessageBox::Show("������ � ������� SetCenter", "�������� �������� mode");
		break;
	}
}

void ReadSettings() {
    
}