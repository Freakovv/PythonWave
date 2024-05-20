#pragma once

#include "config.h"
#include "ClassFade.h"

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


	private: Guna::UI2::WinForms::Guna2Button^ btnLogOut;

	private: Guna::UI2::WinForms::Guna2Button^ btnSettings;
	private: Guna::UI2::WinForms::Guna2Button^ btnProfile;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox1;
	private: System::Windows::Forms::Label^ labelPyWave;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ btnExit;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ btnMinimize;
	private: Bunifu::UI::WinForms::BunifuPages^ Pages;
	private: System::Windows::Forms::TabPage^ pageHome;
	private: System::Windows::Forms::TabPage^ pageBook;
	private: System::Windows::Forms::TabPage^ pageCourses;
	private: System::Windows::Forms::TabPage^ pageProfile;
	private: System::Windows::Forms::TabPage^ pageStats;
	private: System::Windows::Forms::TabPage^ pageSettings;
	private: System::Windows::Forms::TabPage^ pageGoodbye;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;
	private: Guna::UI2::WinForms::Guna2DragControl^ dragMain;
	private: System::Windows::Forms::Panel^ panelUserBar;
	private: System::Windows::Forms::PictureBox^ pictureUserBar;


	private: System::Windows::Forms::Label^ labelRank;
	private: System::Windows::Forms::Label^ labelNameBar;
	private: Guna::UI2::WinForms::Guna2RatingStar^ ratingUser;




















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
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->separatorMain = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->panelUserBar = (gcnew System::Windows::Forms::Panel());
			this->ratingUser = (gcnew Guna::UI2::WinForms::Guna2RatingStar());
			this->labelRank = (gcnew System::Windows::Forms::Label());
			this->labelNameBar = (gcnew System::Windows::Forms::Label());
			this->pictureUserBar = (gcnew System::Windows::Forms::PictureBox());
			this->btnExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->btnMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->labelPyWave = (gcnew System::Windows::Forms::Label());
			this->guna2PictureBox1 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->separatorMenu = (gcnew Guna::UI2::WinForms::Guna2VSeparator());
			this->btnProfile = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnLogOut = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnSettings = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnMenu = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnCourses = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnBook = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnHome = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnStats = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->timerMenu = (gcnew System::Windows::Forms::Timer(this->components));
			this->Pages = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->pageHome = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->pageBook = (gcnew System::Windows::Forms::TabPage());
			this->pageCourses = (gcnew System::Windows::Forms::TabPage());
			this->pageProfile = (gcnew System::Windows::Forms::TabPage());
			this->pageStats = (gcnew System::Windows::Forms::TabPage());
			this->pageSettings = (gcnew System::Windows::Forms::TabPage());
			this->pageGoodbye = (gcnew System::Windows::Forms::TabPage());
			this->dragMain = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->panelMain->SuspendLayout();
			this->panelUserBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUserBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->Pages->SuspendLayout();
			this->pageHome->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelMain->Controls->Add(this->separatorMain);
			this->panelMain->Controls->Add(this->panelUserBar);
			this->panelMain->Controls->Add(this->btnExit);
			this->panelMain->Controls->Add(this->btnMinimize);
			this->panelMain->Controls->Add(this->labelPyWave);
			this->panelMain->Controls->Add(this->guna2PictureBox1);
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
			// panelUserBar
			// 
			this->panelUserBar->Controls->Add(this->ratingUser);
			this->panelUserBar->Controls->Add(this->labelRank);
			this->panelUserBar->Controls->Add(this->labelNameBar);
			this->panelUserBar->Controls->Add(this->pictureUserBar);
			this->panelUserBar->Location = System::Drawing::Point(1129, 0);
			this->panelUserBar->Name = L"panelUserBar";
			this->panelUserBar->Size = System::Drawing::Size(407, 80);
			this->panelUserBar->TabIndex = 34;
			// 
			// ratingUser
			// 
			this->ratingUser->Cursor = System::Windows::Forms::Cursors::Help;
			this->ratingUser->Location = System::Drawing::Point(190, 10);
			this->ratingUser->Name = L"ratingUser";
			this->ratingUser->RatingColor = System::Drawing::Color::White;
			this->ratingUser->ReadOnly = true;
			this->ratingUser->Size = System::Drawing::Size(82, 24);
			this->ratingUser->TabIndex = 3;
			this->ratingUser->Value = 0.5F;
			this->ratingUser->Click += gcnew System::EventHandler(this, &mainForm::ratingUser_Click);
			// 
			// labelRank
			// 
			this->labelRank->AutoSize = true;
			this->labelRank->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRank->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelRank->Location = System::Drawing::Point(96, 42);
			this->labelRank->Name = L"labelRank";
			this->labelRank->Size = System::Drawing::Size(96, 24);
			this->labelRank->TabIndex = 2;
			this->labelRank->Text = L"Новичок";
			// 
			// labelNameBar
			// 
			this->labelNameBar->AutoSize = true;
			this->labelNameBar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelNameBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelNameBar->Location = System::Drawing::Point(96, 9);
			this->labelNameBar->Name = L"labelNameBar";
			this->labelNameBar->Size = System::Drawing::Size(91, 24);
			this->labelNameBar->TabIndex = 1;
			this->labelNameBar->Text = L"Михаил";
			// 
			// pictureUserBar
			// 
			this->pictureUserBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureUserBar.Image")));
			this->pictureUserBar->Location = System::Drawing::Point(25, 15);
			this->pictureUserBar->Name = L"pictureUserBar";
			this->pictureUserBar->Size = System::Drawing::Size(50, 50);
			this->pictureUserBar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureUserBar->TabIndex = 0;
			this->pictureUserBar->TabStop = false;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageRotate = 0;
			this->btnExit->Location = System::Drawing::Point(1568, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->btnExit->Size = System::Drawing::Size(20, 20);
			this->btnExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnExit->TabIndex = 33;
			this->btnExit->TabStop = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &mainForm::btnExit_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->BackColor = System::Drawing::Color::Transparent;
			this->btnMinimize->FillColor = System::Drawing::Color::Transparent;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->ImageRotate = 0;
			this->btnMinimize->Location = System::Drawing::Point(1542, 12);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->btnMinimize->Size = System::Drawing::Size(20, 20);
			this->btnMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnMinimize->TabIndex = 32;
			this->btnMinimize->TabStop = false;
			this->btnMinimize->UseTransparentBackground = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &mainForm::btnMinimize_Click);
			// 
			// labelPyWave
			// 
			this->labelPyWave->AutoSize = true;
			this->labelPyWave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPyWave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelPyWave->Location = System::Drawing::Point(92, 30);
			this->labelPyWave->Name = L"labelPyWave";
			this->labelPyWave->Size = System::Drawing::Size(140, 24);
			this->labelPyWave->TabIndex = 6;
			this->labelPyWave->Text = L"PythonWave";
			// 
			// guna2PictureBox1
			// 
			this->guna2PictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox1.Image")));
			this->guna2PictureBox1->ImageRotate = 0;
			this->guna2PictureBox1->Location = System::Drawing::Point(14, 2);
			this->guna2PictureBox1->Name = L"guna2PictureBox1";
			this->guna2PictureBox1->Size = System::Drawing::Size(72, 80);
			this->guna2PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->guna2PictureBox1->TabIndex = 1;
			this->guna2PictureBox1->TabStop = false;
			this->guna2PictureBox1->UseTransparentBackground = true;
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelMenu->Controls->Add(this->separatorMenu);
			this->panelMenu->Controls->Add(this->btnProfile);
			this->panelMenu->Controls->Add(this->btnLogOut);
			this->panelMenu->Controls->Add(this->btnSettings);
			this->panelMenu->Controls->Add(this->btnMenu);
			this->panelMenu->Controls->Add(this->btnCourses);
			this->panelMenu->Controls->Add(this->btnBook);
			this->panelMenu->Controls->Add(this->btnHome);
			this->panelMenu->Controls->Add(this->btnStats);
			this->panelMenu->Location = System::Drawing::Point(0, 80);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(80, 820);
			this->panelMenu->TabIndex = 1;
			// 
			// separatorMenu
			// 
			this->separatorMenu->BackColor = System::Drawing::Color::Transparent;
			this->separatorMenu->Dock = System::Windows::Forms::DockStyle::Right;
			this->separatorMenu->Location = System::Drawing::Point(79, 0);
			this->separatorMenu->Name = L"separatorMenu";
			this->separatorMenu->Size = System::Drawing::Size(1, 820);
			this->separatorMenu->TabIndex = 0;
			this->separatorMenu->UseTransparentBackground = true;
			// 
			// btnProfile
			// 
			this->btnProfile->Animated = true;
			this->btnProfile->AnimatedGIF = true;
			this->btnProfile->BackColor = System::Drawing::Color::Transparent;
			this->btnProfile->BorderColor = System::Drawing::Color::Empty;
			this->btnProfile->BorderThickness = 1;
			this->btnProfile->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnProfile->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnProfile->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnProfile->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnProfile->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnProfile->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnProfile->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnProfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfile->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfile->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnProfile->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
			this->btnProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProfile.Image")));
			this->btnProfile->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnProfile->ImageOffset = System::Drawing::Point(15, 0);
			this->btnProfile->ImageSize = System::Drawing::Size(30, 30);
			this->btnProfile->Location = System::Drawing::Point(0, 340);
			this->btnProfile->Name = L"btnProfile";
			this->btnProfile->Size = System::Drawing::Size(250, 90);
			this->btnProfile->TabIndex = 29;
			this->btnProfile->Text = L"Профиль";
			this->btnProfile->TextOffset = System::Drawing::Point(8, 0);
			this->btnProfile->UseTransparentBackground = true;
			this->btnProfile->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->Animated = true;
			this->btnLogOut->AnimatedGIF = true;
			this->btnLogOut->BackColor = System::Drawing::Color::Transparent;
			this->btnLogOut->BorderColor = System::Drawing::Color::Empty;
			this->btnLogOut->BorderThickness = 1;
			this->btnLogOut->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnLogOut->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnLogOut->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnLogOut->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnLogOut->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnLogOut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnLogOut->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnLogOut->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnLogOut->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			this->btnLogOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogOut.Image")));
			this->btnLogOut->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnLogOut->ImageOffset = System::Drawing::Point(15, 0);
			this->btnLogOut->ImageSize = System::Drawing::Size(30, 30);
			this->btnLogOut->Location = System::Drawing::Point(0, 730);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(250, 90);
			this->btnLogOut->TabIndex = 27;
			this->btnLogOut->Text = L"Выйти";
			this->btnLogOut->TextOffset = System::Drawing::Point(8, 0);
			this->btnLogOut->UseTransparentBackground = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &mainForm::btnLogOut_Click);
			// 
			// btnSettings
			// 
			this->btnSettings->Animated = true;
			this->btnSettings->AnimatedGIF = true;
			this->btnSettings->BackColor = System::Drawing::Color::Transparent;
			this->btnSettings->BorderColor = System::Drawing::Color::Empty;
			this->btnSettings->BorderThickness = 1;
			this->btnSettings->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnSettings->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSettings->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSettings->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSettings->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSettings->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSettings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettings->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettings->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnSettings->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image2")));
			this->btnSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettings.Image")));
			this->btnSettings->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSettings->ImageOffset = System::Drawing::Point(15, 0);
			this->btnSettings->ImageSize = System::Drawing::Size(30, 30);
			this->btnSettings->Location = System::Drawing::Point(0, 520);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(250, 90);
			this->btnSettings->TabIndex = 26;
			this->btnSettings->Text = L"Настройки";
			this->btnSettings->TextOffset = System::Drawing::Point(8, 0);
			this->btnSettings->UseTransparentBackground = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &mainForm::btnSettings_Click);
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
			this->btnMenu->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image3")));
			this->btnMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMenu.Image")));
			this->btnMenu->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnMenu->ImageOffset = System::Drawing::Point(15, 0);
			this->btnMenu->ImageSize = System::Drawing::Size(30, 30);
			this->btnMenu->Location = System::Drawing::Point(0, 0);
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
			this->btnCourses->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnCourses->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image4")));
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
			this->btnCourses->Click += gcnew System::EventHandler(this, &mainForm::btnCourses_Click);
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
			this->btnBook->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnBook->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image5")));
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
			this->btnBook->Click += gcnew System::EventHandler(this, &mainForm::btnBook_Click);
			// 
			// btnHome
			// 
			this->btnHome->Animated = true;
			this->btnHome->BackColor = System::Drawing::Color::Transparent;
			this->btnHome->BorderColor = System::Drawing::Color::Empty;
			this->btnHome->BorderThickness = 1;
			this->btnHome->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnHome->Checked = true;
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
			this->btnHome->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnHome->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image6")));
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
			this->btnHome->Click += gcnew System::EventHandler(this, &mainForm::btnHome_Click);
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
			this->btnStats->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnStats->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image7")));
			this->btnStats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStats.Image")));
			this->btnStats->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnStats->ImageOffset = System::Drawing::Point(15, 0);
			this->btnStats->ImageSize = System::Drawing::Size(30, 30);
			this->btnStats->Location = System::Drawing::Point(0, 430);
			this->btnStats->Name = L"btnStats";
			this->btnStats->Size = System::Drawing::Size(250, 90);
			this->btnStats->TabIndex = 25;
			this->btnStats->Text = L"Статистика";
			this->btnStats->TextOffset = System::Drawing::Point(8, 0);
			this->btnStats->UseTransparentBackground = true;
			this->btnStats->Click += gcnew System::EventHandler(this, &mainForm::btnStats_Click);
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
			this->timerMenu->Interval = 5;
			this->timerMenu->Tick += gcnew System::EventHandler(this, &mainForm::timerMenu_Tick);
			// 
			// Pages
			// 
			this->Pages->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->Pages->AllowTransitions = false;
			this->Pages->Controls->Add(this->pageHome);
			this->Pages->Controls->Add(this->pageBook);
			this->Pages->Controls->Add(this->pageCourses);
			this->Pages->Controls->Add(this->pageProfile);
			this->Pages->Controls->Add(this->pageStats);
			this->Pages->Controls->Add(this->pageSettings);
			this->Pages->Controls->Add(this->pageGoodbye);
			this->Pages->Location = System::Drawing::Point(80, 79);
			this->Pages->Multiline = true;
			this->Pages->Name = L"Pages";
			this->Pages->Page = this->pageHome;
			this->Pages->PageIndex = 0;
			this->Pages->PageName = L"pageHome";
			this->Pages->PageTitle = L"pageHome";
			this->Pages->SelectedIndex = 0;
			this->Pages->Size = System::Drawing::Size(1520, 821);
			this->Pages->TabIndex = 2;
			animation1->AnimateOnlyDifferences = false;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 1;
			animation1->TransparencyCoeff = 2;
			this->Pages->Transition = animation1;
			this->Pages->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
			// 
			// pageHome
			// 
			this->pageHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageHome->Controls->Add(this->guna2Panel1);
			this->pageHome->Location = System::Drawing::Point(4, 4);
			this->pageHome->Name = L"pageHome";
			this->pageHome->Padding = System::Windows::Forms::Padding(3);
			this->pageHome->Size = System::Drawing::Size(1512, 795);
			this->pageHome->TabIndex = 0;
			this->pageHome->Text = L"pageHome";
			// 
			// guna2Panel1
			// 
			this->guna2Panel1->BackColor = System::Drawing::Color::Cyan;
			this->guna2Panel1->Location = System::Drawing::Point(6, 6);
			this->guna2Panel1->Name = L"guna2Panel1";
			this->guna2Panel1->Size = System::Drawing::Size(200, 100);
			this->guna2Panel1->TabIndex = 0;
			// 
			// pageBook
			// 
			this->pageBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageBook->Location = System::Drawing::Point(4, 4);
			this->pageBook->Name = L"pageBook";
			this->pageBook->Padding = System::Windows::Forms::Padding(3);
			this->pageBook->Size = System::Drawing::Size(1512, 819);
			this->pageBook->TabIndex = 1;
			this->pageBook->Text = L"pageBook";
			// 
			// pageCourses
			// 
			this->pageCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageCourses->Location = System::Drawing::Point(4, 4);
			this->pageCourses->Name = L"pageCourses";
			this->pageCourses->Size = System::Drawing::Size(1512, 819);
			this->pageCourses->TabIndex = 2;
			this->pageCourses->Text = L"pageCourses";
			// 
			// pageProfile
			// 
			this->pageProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageProfile->Location = System::Drawing::Point(4, 4);
			this->pageProfile->Name = L"pageProfile";
			this->pageProfile->Size = System::Drawing::Size(1512, 819);
			this->pageProfile->TabIndex = 3;
			this->pageProfile->Text = L"pageProfile";
			// 
			// pageStats
			// 
			this->pageStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageStats->Location = System::Drawing::Point(4, 4);
			this->pageStats->Name = L"pageStats";
			this->pageStats->Size = System::Drawing::Size(1512, 819);
			this->pageStats->TabIndex = 4;
			this->pageStats->Text = L"pageStats";
			// 
			// pageSettings
			// 
			this->pageSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageSettings->Location = System::Drawing::Point(4, 4);
			this->pageSettings->Name = L"pageSettings";
			this->pageSettings->Size = System::Drawing::Size(1512, 819);
			this->pageSettings->TabIndex = 5;
			this->pageSettings->Text = L"pageSettings";
			// 
			// pageGoodbye
			// 
			this->pageGoodbye->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageGoodbye->Location = System::Drawing::Point(4, 4);
			this->pageGoodbye->Name = L"pageGoodbye";
			this->pageGoodbye->Size = System::Drawing::Size(1512, 819);
			this->pageGoodbye->TabIndex = 6;
			this->pageGoodbye->Text = L"pageGoodbye";
			// 
			// dragMain
			// 
			this->dragMain->DockIndicatorTransparencyValue = 0.6;
			this->dragMain->TargetControl = this->panelMain;
			this->dragMain->UseTransparentDrag = true;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1600, 900);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->Pages);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mainForm";
			this->Opacity = 0;
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &mainForm::main_Load);
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			this->panelUserBar->ResumeLayout(false);
			this->panelUserBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUserBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->Pages->ResumeLayout(false);
			this->pageHome->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool menu = true;
	private: bool alwaysHideMenu = false;
	private: Void cfgLoad() {
		Config^ config = gcnew Config();
		config->LoadConfig("config.xml");

		borderlessForm->BorderRadius = config->borderForm;
	}
	private: Void main_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		menu == false ? menu = true : menu = false;
		timerMenu->Start();
	}
	private: Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fade = gcnew ClassFade(this);
		fade->SetAnimation("close");
	}
	private: Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassFade^ fade = gcnew ClassFade(this);
		fade->SetAnimation("minimize");
	}
	private: Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e);

	// Переходы по меню
	private: Void timerMenu_Tick(System::Object^ sender, System::EventArgs^ e) {
		// 80 Min 250 Max (menu) 
		
		int newPanelWidth;
		int newPagesWidth;
		int newPagesLocationX;

		switch (menu)
		{
		case true:
			if (panelMenu->Size.Width < 250) {
				int newPanelWidth = panelMenu->Size.Width + 10;
				int newPagesWidth = Pages->Size.Width - 10;
				int newPagesLocationX = Pages->Location.X + 10;

				panelMenu->Width = newPanelWidth;
				Pages->Width = newPagesWidth;
				Pages->Location = Drawing::Point(newPagesLocationX, Pages->Location.Y);
			}
			else {
				newPanelWidth = NULL;
				newPagesWidth = NULL;
				newPagesLocationX = NULL;
				timerMenu->Stop();
			}
			break;
		case false:
			if (panelMenu->Size.Width > 80) {
				int newPanelWidth = panelMenu->Size.Width - 10;
				int newPagesWidth = Pages->Size.Width + 10;
				int newPagesLocationX = Pages->Location.X - 10;

				panelMenu->Width = newPanelWidth;
				Pages->Width = newPagesWidth;
				Pages->Location = Drawing::Point(newPagesLocationX, Pages->Location.Y);
			}
			else {
				newPanelWidth = NULL;
				newPagesWidth = NULL;
				newPagesLocationX = NULL;
				timerMenu->Stop();
			}
			break;
		default:
			break;
		}
	}

	private: Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageHome);
	}
	private: Void btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageBook);
	}
	private: Void btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageCourses);
	}
	private: Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageProfile);
	}
	private: Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageStats);
	}
	private: Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(pageSettings);
	}
	private: System::Void ratingUser_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("");
	}
};
}
