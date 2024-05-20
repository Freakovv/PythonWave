#pragma once

#include "config.h"

namespace PythonWave {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		String^ User;
		mainForm(String^ Login)
		{
			User = Login;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MessageBox::Show("Ошибка загрузки пользователя");
			//this->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Panel^ panelMenu;
	protected:

	private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
	private: Guna::UI2::WinForms::Guna2Separator^ separatorMain;
	private: Guna::UI2::WinForms::Guna2VSeparator^ separatorMenu;


	private: Guna::UI2::WinForms::Guna2Button^ btnHome;
	private: Guna::UI2::WinForms::Guna2Button^ btnBook;
	private: Guna::UI2::WinForms::Guna2Button^ btnCourses;

	private: Guna::UI2::WinForms::Guna2Button^ btnMenu;
	private: System::Windows::Forms::Timer^ timerMenu;
	private: Guna::UI2::WinForms::Guna2Button^ btnStats;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->separatorMain = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->separatorMenu = (gcnew Guna::UI2::WinForms::Guna2VSeparator());
			this->btnMenu = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnCourses = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnBook = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnHome = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->timerMenu = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnStats = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->panelMain->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelMain->Controls->Add(this->separatorMain);
			this->panelMain->Location = System::Drawing::Point(0, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1600, 80);
			this->panelMain->TabIndex = 0;
			// 
			// separatorMain
			// 
			this->separatorMain->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->separatorMain->Location = System::Drawing::Point(0, 79);
			this->separatorMain->Name = L"separatorMain";
			this->separatorMain->Size = System::Drawing::Size(1600, 1);
			this->separatorMain->TabIndex = 0;
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelMenu->Controls->Add(this->separatorMenu);
			this->panelMenu->Controls->Add(this->btnMenu);
			this->panelMenu->Controls->Add(this->btnCourses);
			this->panelMenu->Controls->Add(this->btnBook);
			this->panelMenu->Controls->Add(this->btnHome);
			this->panelMenu->Controls->Add(this->btnStats);
			this->panelMenu->Location = System::Drawing::Point(0, 80);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(250, 820);
			this->panelMenu->TabIndex = 1;
			// 
			// separatorMenu
			// 
			this->separatorMenu->BackColor = System::Drawing::Color::Transparent;
			this->separatorMenu->Dock = System::Windows::Forms::DockStyle::Right;
			this->separatorMenu->Location = System::Drawing::Point(249, 0);
			this->separatorMenu->Name = L"separatorMenu";
			this->separatorMenu->Size = System::Drawing::Size(1, 820);
			this->separatorMenu->TabIndex = 0;
			this->separatorMenu->UseTransparentBackground = true;
			// 
			// btnMenu
			// 
			this->btnMenu->Animated = true;
			this->btnMenu->AnimatedGIF = true;
			this->btnMenu->BackColor = System::Drawing::Color::Transparent;
			this->btnMenu->BorderColor = System::Drawing::Color::Transparent;
			this->btnMenu->BorderThickness = 1;
			this->btnMenu->CheckedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnMenu->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnMenu->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnMenu->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnMenu->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnMenu->FillColor = System::Drawing::Color::Transparent;
			this->btnMenu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnMenu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnMenu->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnMenu->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
			this->btnMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMenu.Image")));
			this->btnMenu->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnMenu->ImageOffset = System::Drawing::Point(15, 0);
			this->btnMenu->ImageSize = System::Drawing::Size(30, 30);
			this->btnMenu->Location = System::Drawing::Point(0, -1);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->PressedDepth = 20;
			this->btnMenu->Size = System::Drawing::Size(250, 70);
			this->btnMenu->TabIndex = 24;
			this->btnMenu->Text = L"Меню";
			this->btnMenu->Click += gcnew System::EventHandler(this, &mainForm::btnMenu_Click);
			// 
			// btnCourses
			// 
			this->btnCourses->Animated = true;
			this->btnCourses->AnimatedGIF = true;
			this->btnCourses->BackColor = System::Drawing::Color::Transparent;
			this->btnCourses->BorderColor = System::Drawing::Color::Empty;
			this->btnCourses->BorderThickness = 1;
			this->btnCourses->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnCourses->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnCourses->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnCourses->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnCourses->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnCourses->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnCourses->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnCourses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCourses->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCourses->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnCourses->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			this->btnCourses->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourses.Image")));
			this->btnCourses->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnCourses->ImageOffset = System::Drawing::Point(15, 0);
			this->btnCourses->ImageSize = System::Drawing::Size(30, 30);
			this->btnCourses->Location = System::Drawing::Point(0, 250);
			this->btnCourses->Name = L"btnCourses";
			this->btnCourses->Size = System::Drawing::Size(250, 90);
			this->btnCourses->TabIndex = 22;
			this->btnCourses->Text = L"Курсы";
			this->btnCourses->UseTransparentBackground = true;
			// 
			// btnBook
			// 
			this->btnBook->Animated = true;
			this->btnBook->AnimatedGIF = true;
			this->btnBook->BackColor = System::Drawing::Color::Transparent;
			this->btnBook->BorderColor = System::Drawing::Color::Empty;
			this->btnBook->BorderThickness = 1;
			this->btnBook->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnBook->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnBook->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnBook->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnBook->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnBook->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnBook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnBook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBook->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBook->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnBook->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image2")));
			this->btnBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBook.Image")));
			this->btnBook->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnBook->ImageOffset = System::Drawing::Point(15, 0);
			this->btnBook->ImageSize = System::Drawing::Size(30, 30);
			this->btnBook->Location = System::Drawing::Point(0, 160);
			this->btnBook->Name = L"btnBook";
			this->btnBook->Size = System::Drawing::Size(250, 90);
			this->btnBook->TabIndex = 21;
			this->btnBook->Text = L"Книга";
			this->btnBook->UseTransparentBackground = true;
			// 
			// btnHome
			// 
			this->btnHome->Animated = true;
			this->btnHome->AnimatedGIF = true;
			this->btnHome->BackColor = System::Drawing::Color::Transparent;
			this->btnHome->BorderColor = System::Drawing::Color::Empty;
			this->btnHome->BorderThickness = 1;
			this->btnHome->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnHome->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnHome->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnHome->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnHome->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnHome->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHome->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHome->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHome->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHome->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnHome->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image3")));
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnHome->ImageOffset = System::Drawing::Point(15, 0);
			this->btnHome->ImageSize = System::Drawing::Size(30, 30);
			this->btnHome->Location = System::Drawing::Point(0, 70);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(250, 90);
			this->btnHome->TabIndex = 20;
			this->btnHome->Text = L"Главная";
			this->btnHome->UseTransparentBackground = true;
			// 
			// borderlessForm
			// 
			this->borderlessForm->BorderRadius = 25;
			this->borderlessForm->ContainerControl = this;
			this->borderlessForm->DockIndicatorTransparencyValue = 0.6;
			this->borderlessForm->TransparentWhileDrag = true;
			// 
			// timerMenu
			// 
			this->timerMenu->Interval = 7;
			this->timerMenu->Tick += gcnew System::EventHandler(this, &mainForm::timerMenu_Tick);
			// 
			// btnStats
			// 
			this->btnStats->Animated = true;
			this->btnStats->AnimatedGIF = true;
			this->btnStats->BackColor = System::Drawing::Color::Transparent;
			this->btnStats->BorderColor = System::Drawing::Color::Empty;
			this->btnStats->BorderThickness = 1;
			this->btnStats->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnStats->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnStats->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnStats->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnStats->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnStats->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnStats->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnStats->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStats->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStats->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnStats->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			this->btnStats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStats.Image")));
			this->btnStats->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnStats->ImageOffset = System::Drawing::Point(15, 0);
			this->btnStats->ImageSize = System::Drawing::Size(30, 30);
			this->btnStats->Location = System::Drawing::Point(0, 346);
			this->btnStats->Name = L"btnStats";
			this->btnStats->Size = System::Drawing::Size(250, 90);
			this->btnStats->TabIndex = 25;
			this->btnStats->Text = L"Статистика";
			this->btnStats->UseTransparentBackground = true;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1600, 900);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mainForm";
			this->Opacity = 0;
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &mainForm::main_Load);
			this->panelMain->ResumeLayout(false);
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool menu = false;
		bool alwaysHideMenu = false;
	private: Void cfgLoad() {
		Config^ config = gcnew Config();
		config->LoadConfig("config.xml");

		borderlessForm->BorderRadius = config->borderForm;
	}
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
		cfgLoad();

		if (panelMenu->Size == Drawing::Size(80, 820)) {
			menu = false;
		}
		else if (panelMenu->Size == Drawing::Size(250, 820)) {
			menu = true;
		}

		ClassFade^ Fade = gcnew ClassFade(this);
		Fade->SetAnimation("in");
		Fade = nullptr;
	}
	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		menu == false ? menu = true : menu = false;
		timerMenu->Start();
	}
	private: System::Void timerMenu_Tick(System::Object^ sender, System::EventArgs^ e) {
		// 80 Min 250 Max menu 
		// 79 Min 249 Max separator

		int newPanelWidth;
		int newSeparatorLoc;
		switch (menu)
		{
		case true:
			if (panelMenu->Size.Width < 250) {
				
				newPanelWidth = panelMenu->Size.Width + 10;
				panelMenu->Width = newPanelWidth;

				newSeparatorLoc = separatorMenu->Location.X + 10;
				separatorMenu->Location = Drawing::Point(newSeparatorLoc, separatorMenu->Location.Y);
			}
			else {
				newPanelWidth = NULL;
				newSeparatorLoc = NULL;
				separatorMenu->BringToFront();
				timerMenu->Stop();
			}
			break;
		case false:
			if (panelMenu->Size.Width > 80) {

				newPanelWidth = panelMenu->Size.Width - 10;
				panelMenu->Width = newPanelWidth;

				newSeparatorLoc = separatorMenu->Location.X - 10;
				separatorMenu->Location = Drawing::Point(newSeparatorLoc, separatorMenu->Location.Y);
			}
			else {
				newPanelWidth = NULL;
				newSeparatorLoc = NULL;
				separatorMenu->BringToFront();
				timerMenu->Stop();
			}
			break;
		default:
			break;
		}
	}
};
}
