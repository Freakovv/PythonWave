﻿#pragma once
#include <msclr\marshal_cppstd.h>

namespace PythonWave {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fadetimer = gcnew System::Windows::Forms::Timer();
			fadetimer->Interval = 10; // Set the interval (in milliseconds)
			fadetimer->Tick += gcnew System::EventHandler(this, &login::fadetimer_Tick);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonExit;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonMinimize;
	private: Guna::UI2::WinForms::Guna2DragControl^ dragControlForm;

	private: System::Windows::Forms::Timer^ fadetimer;
	private: System::Windows::Forms::Panel^ panelEntrance;
	private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
	private: Guna::UI2::WinForms::Guna2Button^ buttonShowRegister;
	private: Guna::UI2::WinForms::Guna2Button^ buttonShowAuthorize;

	private:




	private: Guna::UI2::WinForms::Guna2ShadowPanel^ panelAuthorize;

	private: Guna::UI2::WinForms::Guna2Elipse^ elipsePanelAuthorize;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxLogin;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;

	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ guna2ToggleSwitch1;
	private: Guna::UI2::WinForms::Guna2CircleButton^ guna2CircleButton1;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageOption;

	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ bunifuButton1;
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ panelRegister;

	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ buttonRegister;
	private: System::Windows::Forms::Label^ labelTerms;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ ToggleSwitchTerms;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabelTerms;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageAcceptTerms;

	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox4;
	private: Siticone::Desktop::UI::WinForms::SiticoneDeviceInfo^ siticoneDeviceInfo1;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxTerms;

	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonCloseTerms;
	private: Guna::UI2::WinForms::Guna2Elipse^ elipsePanelEntrance;

	private: System::ComponentModel::IContainer^ components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges^ borderEdges1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges());
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges^ borderEdges2 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges());
			this->dragControlForm = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->ButtonExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->panelEntrance = (gcnew System::Windows::Forms::Panel());
			this->panelRegister = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->ButtonCloseTerms = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->textBoxTerms = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox4 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->linkLabelTerms = (gcnew System::Windows::Forms::LinkLabel());
			this->labelTerms = (gcnew System::Windows::Forms::Label());
			this->buttonRegister = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->ToggleSwitchTerms = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->guna2TextBox2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox3 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->buttonShowAuthorize = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->panelAuthorize = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->bunifuButton1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->guna2CircleButton1 = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->guna2ToggleSwitch1 = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxLogin = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->buttonShowRegister = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->elipsePanelAuthorize = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->MessageOption = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageAcceptTerms = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->elipsePanelEntrance = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->BeginInit();
			this->panelEntrance->SuspendLayout();
			this->panelRegister->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonCloseTerms))->BeginInit();
			this->panelAuthorize->SuspendLayout();
			this->SuspendLayout();
			// 
			// dragControlForm
			// 
			this->dragControlForm->DockIndicatorColor = System::Drawing::Color::Gray;
			this->dragControlForm->DockIndicatorTransparencyValue = 0.8;
			this->dragControlForm->UseTransparentDrag = true;
			// 
			// ButtonMinimize
			// 
			this->ButtonMinimize->BackColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->FillColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMinimize.Image")));
			this->ButtonMinimize->ImageRotate = 0;
			this->ButtonMinimize->Location = System::Drawing::Point(1222, 12);
			this->ButtonMinimize->Name = L"ButtonMinimize";
			this->ButtonMinimize->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonMinimize->Size = System::Drawing::Size(20, 20);
			this->ButtonMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonMinimize->TabIndex = 0;
			this->ButtonMinimize->TabStop = false;
			this->ButtonMinimize->UseTransparentBackground = true;
			this->ButtonMinimize->Click += gcnew System::EventHandler(this, &login::MinimizeWindow_click);
			// 
			// ButtonExit
			// 
			this->ButtonExit->BackColor = System::Drawing::Color::Transparent;
			this->ButtonExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonExit.Image")));
			this->ButtonExit->ImageRotate = 0;
			this->ButtonExit->Location = System::Drawing::Point(1248, 12);
			this->ButtonExit->Name = L"ButtonExit";
			this->ButtonExit->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonExit->Size = System::Drawing::Size(20, 20);
			this->ButtonExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonExit->TabIndex = 1;
			this->ButtonExit->TabStop = false;
			this->ButtonExit->Click += gcnew System::EventHandler(this, &login::ExitWindow_click);
			// 
			// panelEntrance
			// 
			this->panelEntrance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->panelEntrance->Controls->Add(this->panelRegister);
			this->panelEntrance->Controls->Add(this->buttonShowAuthorize);
			this->panelEntrance->Controls->Add(this->panelAuthorize);
			this->panelEntrance->Controls->Add(this->buttonShowRegister);
			this->panelEntrance->Location = System::Drawing::Point(290, 140);
			this->panelEntrance->Name = L"panelEntrance";
			this->panelEntrance->Size = System::Drawing::Size(700, 550);
			this->panelEntrance->TabIndex = 2;
			// 
			// panelRegister
			// 
			this->panelRegister->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelRegister->BackColor = System::Drawing::Color::Transparent;
			this->panelRegister->Controls->Add(this->ButtonCloseTerms);
			this->panelRegister->Controls->Add(this->textBoxTerms);
			this->panelRegister->Controls->Add(this->guna2TextBox4);
			this->panelRegister->Controls->Add(this->linkLabelTerms);
			this->panelRegister->Controls->Add(this->labelTerms);
			this->panelRegister->Controls->Add(this->buttonRegister);
			this->panelRegister->Controls->Add(this->ToggleSwitchTerms);
			this->panelRegister->Controls->Add(this->guna2TextBox2);
			this->panelRegister->Controls->Add(this->guna2TextBox3);
			this->panelRegister->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->panelRegister->Location = System::Drawing::Point(4, 47);
			this->panelRegister->Name = L"panelRegister";
			this->panelRegister->ShadowColor = System::Drawing::Color::Black;
			this->panelRegister->Size = System::Drawing::Size(694, 502);
			this->panelRegister->TabIndex = 6;
			this->panelRegister->Visible = false;
			// 
			// ButtonCloseTerms
			// 
			this->ButtonCloseTerms->BackColor = System::Drawing::Color::Transparent;
			this->ButtonCloseTerms->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonCloseTerms.Image")));
			this->ButtonCloseTerms->ImageRotate = 0;
			this->ButtonCloseTerms->Location = System::Drawing::Point(639, 19);
			this->ButtonCloseTerms->Name = L"ButtonCloseTerms";
			this->ButtonCloseTerms->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonCloseTerms->Size = System::Drawing::Size(20, 20);
			this->ButtonCloseTerms->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonCloseTerms->TabIndex = 12;
			this->ButtonCloseTerms->TabStop = false;
			this->ButtonCloseTerms->UseTransparentBackground = true;
			this->ButtonCloseTerms->Visible = false;
			this->ButtonCloseTerms->Click += gcnew System::EventHandler(this, &login::buttonCloseTerms);
			// 
			// textBoxTerms
			// 
			this->textBoxTerms->Animated = true;
			this->textBoxTerms->BackColor = System::Drawing::Color::Transparent;
			this->textBoxTerms->BorderColor = System::Drawing::Color::Red;
			this->textBoxTerms->BorderRadius = 20;
			this->textBoxTerms->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxTerms->DefaultText = resources->GetString(L"textBoxTerms.DefaultText");
			this->textBoxTerms->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxTerms->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxTerms->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxTerms->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxTerms->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBoxTerms->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxTerms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxTerms->ForeColor = System::Drawing::SystemColors::Info;
			this->textBoxTerms->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxTerms->Location = System::Drawing::Point(656, 458);
			this->textBoxTerms->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxTerms->Multiline = true;
			this->textBoxTerms->Name = L"textBoxTerms";
			this->textBoxTerms->PasswordChar = '\0';
			this->textBoxTerms->PlaceholderForeColor = System::Drawing::SystemColors::Info;
			this->textBoxTerms->PlaceholderText = L"";
			this->textBoxTerms->ReadOnly = true;
			this->textBoxTerms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxTerms->SelectedText = L"";
			this->textBoxTerms->Size = System::Drawing::Size(684, 493);
			this->textBoxTerms->TabIndex = 3;
			this->textBoxTerms->Visible = false;
			// 
			// guna2TextBox4
			// 
			this->guna2TextBox4->Animated = true;
			this->guna2TextBox4->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->guna2TextBox4->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->guna2TextBox4->AutoRoundedCorners = true;
			this->guna2TextBox4->BorderColor = System::Drawing::Color::White;
			this->guna2TextBox4->BorderRadius = 18;
			this->guna2TextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox4->DefaultText = L"";
			this->guna2TextBox4->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox4->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox4->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2TextBox4->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2TextBox4->ForeColor = System::Drawing::Color::Black;
			this->guna2TextBox4->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2TextBox4.IconLeft")));
			this->guna2TextBox4->IconLeftOffset = System::Drawing::Point(5, 0);
			this->guna2TextBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->guna2TextBox4->Location = System::Drawing::Point(24, 240);
			this->guna2TextBox4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox4->Name = L"guna2TextBox4";
			this->guna2TextBox4->PasswordChar = '●';
			this->guna2TextBox4->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->guna2TextBox4->PlaceholderText = L"Повторите пароль";
			this->guna2TextBox4->SelectedText = L"";
			this->guna2TextBox4->Size = System::Drawing::Size(262, 39);
			this->guna2TextBox4->TabIndex = 11;
			this->guna2TextBox4->UseSystemPasswordChar = true;
			// 
			// linkLabelTerms
			// 
			this->linkLabelTerms->AutoSize = true;
			this->linkLabelTerms->DisabledLinkColor = System::Drawing::Color::Transparent;
			this->linkLabelTerms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->linkLabelTerms->ForeColor = System::Drawing::Color::Transparent;
			this->linkLabelTerms->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->linkLabelTerms->Location = System::Drawing::Point(165, 296);
			this->linkLabelTerms->Name = L"linkLabelTerms";
			this->linkLabelTerms->Size = System::Drawing::Size(183, 20);
			this->linkLabelTerms->TabIndex = 10;
			this->linkLabelTerms->TabStop = true;
			this->linkLabelTerms->Text = L"условия использования";
			this->linkLabelTerms->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &login::linkLabel1_LinkClicked);
			// 
			// labelTerms
			// 
			this->labelTerms->AutoSize = true;
			this->labelTerms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTerms->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelTerms->Location = System::Drawing::Point(65, 296);
			this->labelTerms->Name = L"labelTerms";
			this->labelTerms->Size = System::Drawing::Size(104, 20);
			this->labelTerms->TabIndex = 7;
			this->labelTerms->Text = L"Я принимаю";
			// 
			// buttonRegister
			// 
			this->buttonRegister->AllowAnimations = true;
			this->buttonRegister->AllowMouseEffects = true;
			this->buttonRegister->AllowToggling = false;
			this->buttonRegister->AnimationSpeed = 200;
			this->buttonRegister->AutoGenerateColors = false;
			this->buttonRegister->AutoRoundBorders = false;
			this->buttonRegister->AutoSizeLeftIcon = true;
			this->buttonRegister->AutoSizeRightIcon = true;
			this->buttonRegister->BackColor = System::Drawing::Color::Transparent;
			this->buttonRegister->BackColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRegister.BackgroundImage")));
			this->buttonRegister->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->buttonRegister->ButtonText = L"Регистрация";
			this->buttonRegister->ButtonTextMarginLeft = 0;
			this->buttonRegister->ColorContrastOnClick = 45;
			this->buttonRegister->ColorContrastOnHover = 45;
			this->buttonRegister->Cursor = System::Windows::Forms::Cursors::Default;
			borderEdges1->BottomLeft = true;
			borderEdges1->BottomRight = true;
			borderEdges1->TopLeft = true;
			borderEdges1->TopRight = true;
			this->buttonRegister->CustomizableEdges = borderEdges1;
			this->buttonRegister->DialogResult = System::Windows::Forms::DialogResult::None;
			this->buttonRegister->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->buttonRegister->DisabledFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->buttonRegister->DisabledForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->buttonRegister->FocusState = Bunifu::UI::WinForms::BunifuButton::BunifuButton::ButtonStates::Pressed;
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->IconLeftAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRegister->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->buttonRegister->IconLeftPadding = System::Windows::Forms::Padding(11, 3, 3, 3);
			this->buttonRegister->IconMarginLeft = 11;
			this->buttonRegister->IconPadding = 10;
			this->buttonRegister->IconRightAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonRegister->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->buttonRegister->IconRightPadding = System::Windows::Forms::Padding(3, 3, 7, 3);
			this->buttonRegister->IconSize = 25;
			this->buttonRegister->IdleBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->IdleBorderRadius = 40;
			this->buttonRegister->IdleBorderThickness = 1;
			this->buttonRegister->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->IdleIconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRegister.IdleIconLeftImage")));
			this->buttonRegister->IdleIconRightImage = nullptr;
			this->buttonRegister->IndicateFocus = false;
			this->buttonRegister->Location = System::Drawing::Point(24, 330);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->OnDisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->buttonRegister->OnDisabledState->BorderRadius = 40;
			this->buttonRegister->OnDisabledState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->buttonRegister->OnDisabledState->BorderThickness = 1;
			this->buttonRegister->OnDisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->buttonRegister->OnDisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->buttonRegister->OnDisabledState->IconLeftImage = nullptr;
			this->buttonRegister->OnDisabledState->IconRightImage = nullptr;
			this->buttonRegister->onHoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->onHoverState->BorderRadius = 40;
			this->buttonRegister->onHoverState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->buttonRegister->onHoverState->BorderThickness = 1;
			this->buttonRegister->onHoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->onHoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->onHoverState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.IconLeftImage")));
			this->buttonRegister->onHoverState->IconRightImage = nullptr;
			this->buttonRegister->OnIdleState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->OnIdleState->BorderRadius = 40;
			this->buttonRegister->OnIdleState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->buttonRegister->OnIdleState->BorderThickness = 1;
			this->buttonRegister->OnIdleState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->OnIdleState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->OnIdleState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRegister.OnIdleState.IconLeftImage")));
			this->buttonRegister->OnIdleState->IconRightImage = nullptr;
			this->buttonRegister->OnPressedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->OnPressedState->BorderRadius = 40;
			this->buttonRegister->OnPressedState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->buttonRegister->OnPressedState->BorderThickness = 1;
			this->buttonRegister->OnPressedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->OnPressedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->OnPressedState->IconLeftImage = nullptr;
			this->buttonRegister->OnPressedState->IconRightImage = nullptr;
			this->buttonRegister->Size = System::Drawing::Size(207, 39);
			this->buttonRegister->TabIndex = 9;
			this->buttonRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttonRegister->TextAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			this->buttonRegister->TextMarginLeft = 0;
			this->buttonRegister->TextPadding = System::Windows::Forms::Padding(0);
			this->buttonRegister->UseDefaultRadiusAndThickness = true;
			// 
			// ToggleSwitchTerms
			// 
			this->ToggleSwitchTerms->Animated = true;
			this->ToggleSwitchTerms->AutoRoundedCorners = true;
			this->ToggleSwitchTerms->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->ToggleSwitchTerms->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ToggleSwitchTerms->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->ToggleSwitchTerms->CheckedState->InnerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ToggleSwitchTerms->Location = System::Drawing::Point(27, 296);
			this->ToggleSwitchTerms->Name = L"ToggleSwitchTerms";
			this->ToggleSwitchTerms->Size = System::Drawing::Size(35, 20);
			this->ToggleSwitchTerms->TabIndex = 6;
			this->ToggleSwitchTerms->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ToggleSwitchTerms->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ToggleSwitchTerms->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->ToggleSwitchTerms->UncheckedState->InnerColor = System::Drawing::Color::White;
			// 
			// guna2TextBox2
			// 
			this->guna2TextBox2->Animated = true;
			this->guna2TextBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->guna2TextBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->guna2TextBox2->AutoRoundedCorners = true;
			this->guna2TextBox2->BorderColor = System::Drawing::Color::White;
			this->guna2TextBox2->BorderRadius = 18;
			this->guna2TextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox2->DefaultText = L"";
			this->guna2TextBox2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2TextBox2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2TextBox2->ForeColor = System::Drawing::Color::Black;
			this->guna2TextBox2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2TextBox2.IconLeft")));
			this->guna2TextBox2->IconLeftOffset = System::Drawing::Point(5, 0);
			this->guna2TextBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->guna2TextBox2->Location = System::Drawing::Point(24, 182);
			this->guna2TextBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox2->Name = L"guna2TextBox2";
			this->guna2TextBox2->PasswordChar = '●';
			this->guna2TextBox2->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->guna2TextBox2->PlaceholderText = L"Пароль";
			this->guna2TextBox2->SelectedText = L"";
			this->guna2TextBox2->Size = System::Drawing::Size(262, 39);
			this->guna2TextBox2->TabIndex = 3;
			this->guna2TextBox2->UseSystemPasswordChar = true;
			// 
			// guna2TextBox3
			// 
			this->guna2TextBox3->Animated = true;
			this->guna2TextBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->guna2TextBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->guna2TextBox3->AutoRoundedCorners = true;
			this->guna2TextBox3->BorderColor = System::Drawing::Color::White;
			this->guna2TextBox3->BorderRadius = 18;
			this->guna2TextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox3->DefaultText = L"";
			this->guna2TextBox3->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox3->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox3->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2TextBox3->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2TextBox3->ForeColor = System::Drawing::Color::Black;
			this->guna2TextBox3->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2TextBox3.IconLeft")));
			this->guna2TextBox3->IconLeftOffset = System::Drawing::Point(5, 0);
			this->guna2TextBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->guna2TextBox3->Location = System::Drawing::Point(24, 126);
			this->guna2TextBox3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox3->Name = L"guna2TextBox3";
			this->guna2TextBox3->PasswordChar = '\0';
			this->guna2TextBox3->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->guna2TextBox3->PlaceholderText = L"Логин";
			this->guna2TextBox3->SelectedText = L"";
			this->guna2TextBox3->Size = System::Drawing::Size(262, 39);
			this->guna2TextBox3->TabIndex = 2;
			// 
			// buttonShowAuthorize
			// 
			this->buttonShowAuthorize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->buttonShowAuthorize->Animated = true;
			this->buttonShowAuthorize->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->buttonShowAuthorize->Checked = true;
			this->buttonShowAuthorize->CheckedState->CustomBorderColor = System::Drawing::Color::White;
			this->buttonShowAuthorize->CheckedState->FillColor = System::Drawing::Color::Transparent;
			this->buttonShowAuthorize->CheckedState->ForeColor = System::Drawing::Color::White;
			this->buttonShowAuthorize->CustomBorderColor = System::Drawing::Color::Transparent;
			this->buttonShowAuthorize->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
			this->buttonShowAuthorize->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonShowAuthorize->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonShowAuthorize->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonShowAuthorize->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonShowAuthorize->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->buttonShowAuthorize->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->buttonShowAuthorize->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonShowAuthorize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonShowAuthorize->Location = System::Drawing::Point(0, 0);
			this->buttonShowAuthorize->Name = L"buttonShowAuthorize";
			this->buttonShowAuthorize->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->buttonShowAuthorize->Size = System::Drawing::Size(180, 45);
			this->buttonShowAuthorize->TabIndex = 4;
			this->buttonShowAuthorize->Text = L"Авторизация";
			this->buttonShowAuthorize->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
			this->buttonShowAuthorize->Click += gcnew System::EventHandler(this, &login::buttonShowAuthorize_Click);
			// 
			// panelAuthorize
			// 
			this->panelAuthorize->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelAuthorize->BackColor = System::Drawing::Color::Transparent;
			this->panelAuthorize->Controls->Add(this->bunifuButton1);
			this->panelAuthorize->Controls->Add(this->guna2CircleButton1);
			this->panelAuthorize->Controls->Add(this->label1);
			this->panelAuthorize->Controls->Add(this->guna2ToggleSwitch1);
			this->panelAuthorize->Controls->Add(this->guna2TextBox1);
			this->panelAuthorize->Controls->Add(this->textBoxLogin);
			this->panelAuthorize->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->panelAuthorize->Location = System::Drawing::Point(4, 47);
			this->panelAuthorize->Name = L"panelAuthorize";
			this->panelAuthorize->ShadowColor = System::Drawing::Color::Black;
			this->panelAuthorize->Size = System::Drawing::Size(694, 502);
			this->panelAuthorize->TabIndex = 5;
			// 
			// bunifuButton1
			// 
			this->bunifuButton1->AllowAnimations = true;
			this->bunifuButton1->AllowMouseEffects = true;
			this->bunifuButton1->AllowToggling = false;
			this->bunifuButton1->AnimationSpeed = 200;
			this->bunifuButton1->AutoGenerateColors = false;
			this->bunifuButton1->AutoRoundBorders = false;
			this->bunifuButton1->AutoSizeLeftIcon = true;
			this->bunifuButton1->AutoSizeRightIcon = true;
			this->bunifuButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->BackColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.BackgroundImage")));
			this->bunifuButton1->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->ButtonText = L"Войти";
			this->bunifuButton1->ButtonTextMarginLeft = 0;
			this->bunifuButton1->ColorContrastOnClick = 45;
			this->bunifuButton1->ColorContrastOnHover = 45;
			this->bunifuButton1->Cursor = System::Windows::Forms::Cursors::Default;
			borderEdges2->BottomLeft = true;
			borderEdges2->BottomRight = true;
			borderEdges2->TopLeft = true;
			borderEdges2->TopRight = true;
			this->bunifuButton1->CustomizableEdges = borderEdges2;
			this->bunifuButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->bunifuButton1->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton1->DisabledFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuButton1->DisabledForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->bunifuButton1->FocusState = Bunifu::UI::WinForms::BunifuButton::BunifuButton::ButtonStates::Pressed;
			this->bunifuButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->bunifuButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->IconLeftAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuButton1->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconLeftPadding = System::Windows::Forms::Padding(11, 3, 3, 3);
			this->bunifuButton1->IconMarginLeft = 11;
			this->bunifuButton1->IconPadding = 10;
			this->bunifuButton1->IconRightAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bunifuButton1->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconRightPadding = System::Windows::Forms::Padding(3, 3, 7, 3);
			this->bunifuButton1->IconSize = 25;
			this->bunifuButton1->IdleBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->IdleBorderRadius = 40;
			this->bunifuButton1->IdleBorderThickness = 1;
			this->bunifuButton1->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->IdleIconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.IdleIconLeftImage")));
			this->bunifuButton1->IdleIconRightImage = nullptr;
			this->bunifuButton1->IndicateFocus = false;
			this->bunifuButton1->Location = System::Drawing::Point(27, 286);
			this->bunifuButton1->Name = L"bunifuButton1";
			this->bunifuButton1->OnDisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton1->OnDisabledState->BorderRadius = 40;
			this->bunifuButton1->OnDisabledState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnDisabledState->BorderThickness = 1;
			this->bunifuButton1->OnDisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuButton1->OnDisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->bunifuButton1->OnDisabledState->IconLeftImage = nullptr;
			this->bunifuButton1->OnDisabledState->IconRightImage = nullptr;
			this->bunifuButton1->onHoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->onHoverState->BorderRadius = 40;
			this->bunifuButton1->onHoverState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->onHoverState->BorderThickness = 1;
			this->bunifuButton1->onHoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->onHoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->onHoverState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.IconLeftImage1")));
			this->bunifuButton1->onHoverState->IconRightImage = nullptr;
			this->bunifuButton1->OnIdleState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->OnIdleState->BorderRadius = 40;
			this->bunifuButton1->OnIdleState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnIdleState->BorderThickness = 1;
			this->bunifuButton1->OnIdleState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->OnIdleState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->OnIdleState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.OnIdleState.IconLeftImage")));
			this->bunifuButton1->OnIdleState->IconRightImage = nullptr;
			this->bunifuButton1->OnPressedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->OnPressedState->BorderRadius = 40;
			this->bunifuButton1->OnPressedState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnPressedState->BorderThickness = 1;
			this->bunifuButton1->OnPressedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuButton1->OnPressedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->bunifuButton1->OnPressedState->IconLeftImage = nullptr;
			this->bunifuButton1->OnPressedState->IconRightImage = nullptr;
			this->bunifuButton1->Size = System::Drawing::Size(150, 39);
			this->bunifuButton1->TabIndex = 9;
			this->bunifuButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuButton1->TextAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			this->bunifuButton1->TextMarginLeft = 0;
			this->bunifuButton1->TextPadding = System::Windows::Forms::Padding(0);
			this->bunifuButton1->UseDefaultRadiusAndThickness = true;
			// 
			// guna2CircleButton1
			// 
			this->guna2CircleButton1->Animated = true;
			this->guna2CircleButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->guna2CircleButton1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2CircleButton1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2CircleButton1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2CircleButton1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2CircleButton1->FillColor = System::Drawing::Color::Transparent;
			this->guna2CircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2CircleButton1->ForeColor = System::Drawing::Color::White;
			this->guna2CircleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2CircleButton1.Image")));
			this->guna2CircleButton1->ImageOffset = System::Drawing::Point(0, 12);
			this->guna2CircleButton1->Location = System::Drawing::Point(234, 251);
			this->guna2CircleButton1->Name = L"guna2CircleButton1";
			this->guna2CircleButton1->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->guna2CircleButton1->Size = System::Drawing::Size(20, 20);
			this->guna2CircleButton1->TabIndex = 8;
			this->guna2CircleButton1->Text = L"guna2CircleButton1";
			this->guna2CircleButton1->UseTransparentBackground = true;
			this->guna2CircleButton1->Click += gcnew System::EventHandler(this, &login::guna2CircleButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(68, 249);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Запомнить меня";
			// 
			// guna2ToggleSwitch1
			// 
			this->guna2ToggleSwitch1->Animated = true;
			this->guna2ToggleSwitch1->AutoRoundedCorners = true;
			this->guna2ToggleSwitch1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->guna2ToggleSwitch1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2ToggleSwitch1->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->CheckedState->InnerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->Location = System::Drawing::Point(27, 251);
			this->guna2ToggleSwitch1->Name = L"guna2ToggleSwitch1";
			this->guna2ToggleSwitch1->Size = System::Drawing::Size(35, 20);
			this->guna2ToggleSwitch1->TabIndex = 6;
			this->guna2ToggleSwitch1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->UncheckedState->InnerColor = System::Drawing::Color::White;
			// 
			// guna2TextBox1
			// 
			this->guna2TextBox1->Animated = true;
			this->guna2TextBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->guna2TextBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->guna2TextBox1->AutoRoundedCorners = true;
			this->guna2TextBox1->BorderColor = System::Drawing::Color::White;
			this->guna2TextBox1->BorderRadius = 18;
			this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox1->DefaultText = L"";
			this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2TextBox1->ForeColor = System::Drawing::Color::Black;
			this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2TextBox1.IconLeft")));
			this->guna2TextBox1->IconLeftOffset = System::Drawing::Point(5, 0);
			this->guna2TextBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->guna2TextBox1->Location = System::Drawing::Point(24, 193);
			this->guna2TextBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '●';
			this->guna2TextBox1->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->guna2TextBox1->PlaceholderText = L"Пароль";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->Size = System::Drawing::Size(262, 39);
			this->guna2TextBox1->TabIndex = 3;
			this->guna2TextBox1->UseSystemPasswordChar = true;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Animated = true;
			this->textBoxLogin->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxLogin->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxLogin->AutoRoundedCorners = true;
			this->textBoxLogin->BorderColor = System::Drawing::Color::White;
			this->textBoxLogin->BorderRadius = 18;
			this->textBoxLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxLogin->DefaultText = L"";
			this->textBoxLogin->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxLogin->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxLogin->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxLogin->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxLogin->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBoxLogin->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxLogin->ForeColor = System::Drawing::Color::Black;
			this->textBoxLogin->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxLogin->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxLogin.IconLeft")));
			this->textBoxLogin->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxLogin->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxLogin->Location = System::Drawing::Point(24, 126);
			this->textBoxLogin->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->PasswordChar = '\0';
			this->textBoxLogin->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxLogin->PlaceholderText = L"Логин";
			this->textBoxLogin->SelectedText = L"";
			this->textBoxLogin->Size = System::Drawing::Size(262, 39);
			this->textBoxLogin->TabIndex = 2;
			// 
			// buttonShowRegister
			// 
			this->buttonShowRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->buttonShowRegister->Animated = true;
			this->buttonShowRegister->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->buttonShowRegister->CheckedState->CustomBorderColor = System::Drawing::Color::Black;
			this->buttonShowRegister->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonShowRegister->CheckedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->buttonShowRegister->CustomBorderColor = System::Drawing::Color::Transparent;
			this->buttonShowRegister->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
			this->buttonShowRegister->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonShowRegister->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonShowRegister->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonShowRegister->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonShowRegister->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->buttonShowRegister->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->buttonShowRegister->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonShowRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonShowRegister->Location = System::Drawing::Point(175, 0);
			this->buttonShowRegister->Name = L"buttonShowRegister";
			this->buttonShowRegister->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->buttonShowRegister->Size = System::Drawing::Size(180, 45);
			this->buttonShowRegister->TabIndex = 3;
			this->buttonShowRegister->Text = L"Регистрация";
			this->buttonShowRegister->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
			this->buttonShowRegister->Click += gcnew System::EventHandler(this, &login::buttonShowRegister_Click);
			// 
			// borderlessForm
			// 
			this->borderlessForm->BorderRadius = 20;
			this->borderlessForm->ContainerControl = this;
			this->borderlessForm->DockIndicatorTransparencyValue = 0;
			this->borderlessForm->ResizeForm = false;
			this->borderlessForm->TransparentWhileDrag = true;
			// 
			// elipsePanelAuthorize
			// 
			this->elipsePanelAuthorize->BorderRadius = 30;
			this->elipsePanelAuthorize->TargetControl = this->panelAuthorize;
			// 
			// MessageOption
			// 
			this->MessageOption->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageOption->Caption = nullptr;
			this->MessageOption->Icon = Guna::UI2::WinForms::MessageDialogIcon::Information;
			this->MessageOption->Parent = this;
			this->MessageOption->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageOption->Text = L"Это опция позволяет сохранить ваши данные при последующем входе";
			// 
			// MessageAcceptTerms
			// 
			this->MessageAcceptTerms->Buttons = Guna::UI2::WinForms::MessageDialogButtons::YesNoCancel;
			this->MessageAcceptTerms->Caption = L"";
			this->MessageAcceptTerms->Icon = Guna::UI2::WinForms::MessageDialogIcon::Question;
			this->MessageAcceptTerms->Parent = this;
			this->MessageAcceptTerms->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageAcceptTerms->Text = L"Принимаете условия пользовательского соглашения\?";
			// 
			// elipsePanelEntrance
			// 
			this->elipsePanelEntrance->BorderRadius = 30;
			this->elipsePanelEntrance->TargetControl = this->panelEntrance;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1280, 719);
			this->Controls->Add(this->panelEntrance);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->ButtonMinimize);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(320, 180);
			this->Name = L"login";
			this->Opacity = 0;
			this->Text = L"PythonWave: Авторизация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &login::login_FormClosing);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->EndInit();
			this->panelEntrance->ResumeLayout(false);
			this->panelRegister->ResumeLayout(false);
			this->panelRegister->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonCloseTerms))->EndInit();
			this->panelAuthorize->ResumeLayout(false);
			this->panelAuthorize->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		//elements.h
	//////////////////////////////////////////////////////////////////////////////////////
	private: System::Void ExitWindow_click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e);

	//////////////////////////////////////////////////////////////////////////////////////

		//animations.h
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	short fade_mode = 0; 	//0 — появление, 1 — минимизация, 2 — закрытие
	short close_on_close = FALSE; //сообщает обработчику закрытия повторно анимировать или нет
	//WndProc
	//Обработчик закрытия формы
	protected: virtual void WndProc(System::Windows::Forms::Message% msg) override {
		switch (msg.Msg) {
		case WM_SYSCOMMAND:
			switch (msg.WParam.ToInt32()) {
			case SC_MINIMIZE:
				msg.Result = IntPtr::Zero;
				fade_mode = 1;
				fadetimer->Start();
				return;
				break;
			}
			break;
		case WM_ACTIVATE: {
			if (HIWORD(msg.WParam.ToInt32()) == 0) { //потому что ненулевое значение wpa здесь означает, что форма свернута
				this->WindowState = FormWindowState::Normal;
				fade_mode = 0;
				fadetimer->Start();
				msg.Result = IntPtr::Zero;
				return;
			}
		}
		}

		Form::WndProc(msg);
	}
	private: System::Void fadetimer_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void login_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////





	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
		//Установка корректных координат элементов
		textBoxTerms->Location = System::Drawing::Point(5, 5);
		panelRegister->Location = System::Drawing::Point(4, 47);
		panelAuthorize->Location = System::Drawing::Point(4, 47);
	}
	private: System::Void guna2CircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Вывод информации об опции сохранения данных
		MessageOption->Text = "Это опция позволяет сохранить ваши данные при последующем входе";
		MessageOption->Show();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Открывает условия пользования
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;
		ButtonCloseTerms->BringToFront(); //Корректное отображение кнопки
	}
	private: System::Void buttonCloseTerms(System::Object^ sender, System::EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//Спрашивает о согласии, после закрытия
		System::Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			ToggleSwitchTerms->Checked = true;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {
			ToggleSwitchTerms->Checked = false;
		}
	}
	private: System::Void ShowRegister(bool show) {
		if (show) {
			panelAuthorize->Visible = false;
			panelRegister->Visible = true;
		}
		else {
			panelAuthorize->Visible = true;
			panelRegister ->Visible = false;
		}
	}
	private: System::Void buttonShowAuthorize_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(false);
	}
	private: System::Void buttonShowRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowRegister(true);
	}
};
}
