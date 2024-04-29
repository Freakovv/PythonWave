#pragma once
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
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassword;

	private: System::Windows::Forms::Label^ labelRemember;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ ButtonSwitchRemember;









	private: Guna::UI2::WinForms::Guna2CircleButton^ buttonQuestion;

	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageOption;


	private: Guna::UI2::WinForms::Guna2ShadowPanel^ panelRegister;



	private: System::Windows::Forms::Label^ labelTerms;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPasswordReg;



	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxLoginReg;

	private: System::Windows::Forms::LinkLabel^ linkLabelTerms;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageAcceptTerms;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPasswordReg2;


	private: Siticone::Desktop::UI::WinForms::SiticoneDeviceInfo^ siticoneDeviceInfo1;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxTerms;

	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonCloseTerms;
	private: Guna::UI2::WinForms::Guna2Elipse^ elipsePanelEntrance;
	private: Guna::UI2::WinForms::Guna2Button^ buttonRegister;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	private: Bunifu::UI::WinForms::BunifuCheckBox^ CheckBoxTerms;
	private: Guna::UI2::WinForms::Guna2ShadowForm^ guna2ShadowForm1;






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
			this->dragControlForm = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->ButtonExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->panelEntrance = (gcnew System::Windows::Forms::Panel());
			this->panelRegister = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->CheckBoxTerms = (gcnew Bunifu::UI::WinForms::BunifuCheckBox());
			this->buttonRegister = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->ButtonCloseTerms = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->textBoxTerms = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxPasswordReg2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->linkLabelTerms = (gcnew System::Windows::Forms::LinkLabel());
			this->labelTerms = (gcnew System::Windows::Forms::Label());
			this->textBoxPasswordReg = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxLoginReg = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->buttonShowAuthorize = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->panelAuthorize = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->buttonQuestion = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
			this->labelRemember = (gcnew System::Windows::Forms::Label());
			this->ButtonSwitchRemember = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->textBoxPassword = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxLogin = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->buttonShowRegister = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->elipsePanelAuthorize = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->MessageOption = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageAcceptTerms = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->elipsePanelEntrance = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->guna2ShadowForm1 = (gcnew Guna::UI2::WinForms::Guna2ShadowForm(this->components));
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
			this->panelRegister->Controls->Add(this->CheckBoxTerms);
			this->panelRegister->Controls->Add(this->buttonRegister);
			this->panelRegister->Controls->Add(this->ButtonCloseTerms);
			this->panelRegister->Controls->Add(this->textBoxTerms);
			this->panelRegister->Controls->Add(this->textBoxPasswordReg2);
			this->panelRegister->Controls->Add(this->linkLabelTerms);
			this->panelRegister->Controls->Add(this->labelTerms);
			this->panelRegister->Controls->Add(this->textBoxPasswordReg);
			this->panelRegister->Controls->Add(this->textBoxLoginReg);
			this->panelRegister->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->panelRegister->Location = System::Drawing::Point(495, 16);
			this->panelRegister->Name = L"panelRegister";
			this->panelRegister->ShadowColor = System::Drawing::Color::Black;
			this->panelRegister->Size = System::Drawing::Size(694, 502);
			this->panelRegister->TabIndex = 6;
			this->panelRegister->Visible = false;
			// 
			// CheckBoxTerms
			// 
			this->CheckBoxTerms->AllowBindingControlAnimation = true;
			this->CheckBoxTerms->AllowBindingControlColorChanges = false;
			this->CheckBoxTerms->AllowBindingControlLocation = true;
			this->CheckBoxTerms->AllowCheckBoxAnimation = false;
			this->CheckBoxTerms->AllowCheckmarkAnimation = true;
			this->CheckBoxTerms->AllowOnHoverStates = true;
			this->CheckBoxTerms->AutoCheck = true;
			this->CheckBoxTerms->BackColor = System::Drawing::Color::Transparent;
			this->CheckBoxTerms->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CheckBoxTerms.BackgroundImage")));
			this->CheckBoxTerms->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CheckBoxTerms->BindingControlPosition = Bunifu::UI::WinForms::BunifuCheckBox::BindingControlPositions::Right;
			this->CheckBoxTerms->BorderRadius = 12;
			this->CheckBoxTerms->Checked = false;
			this->CheckBoxTerms->CheckState = Bunifu::UI::WinForms::BunifuCheckBox::CheckStates::Unchecked;
			this->CheckBoxTerms->Cursor = System::Windows::Forms::Cursors::Default;
			this->CheckBoxTerms->CustomCheckmarkImage = nullptr;
			this->CheckBoxTerms->Location = System::Drawing::Point(28, 296);
			this->CheckBoxTerms->MinimumSize = System::Drawing::Size(17, 17);
			this->CheckBoxTerms->Name = L"CheckBoxTerms";
			this->CheckBoxTerms->OnCheck->BorderColor = System::Drawing::Color::DodgerBlue;
			this->CheckBoxTerms->OnCheck->BorderRadius = 12;
			this->CheckBoxTerms->OnCheck->BorderThickness = 2;
			this->CheckBoxTerms->OnCheck->CheckBoxColor = System::Drawing::Color::DodgerBlue;
			this->CheckBoxTerms->OnCheck->CheckmarkColor = System::Drawing::Color::White;
			this->CheckBoxTerms->OnCheck->CheckmarkThickness = 2;
			this->CheckBoxTerms->OnDisable->BorderColor = System::Drawing::Color::LightGray;
			this->CheckBoxTerms->OnDisable->BorderRadius = 12;
			this->CheckBoxTerms->OnDisable->BorderThickness = 2;
			this->CheckBoxTerms->OnDisable->CheckBoxColor = System::Drawing::Color::Transparent;
			this->CheckBoxTerms->OnDisable->CheckmarkColor = System::Drawing::Color::LightGray;
			this->CheckBoxTerms->OnDisable->CheckmarkThickness = 2;
			this->CheckBoxTerms->OnHoverChecked->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CheckBoxTerms->OnHoverChecked->BorderRadius = 12;
			this->CheckBoxTerms->OnHoverChecked->BorderThickness = 2;
			this->CheckBoxTerms->OnHoverChecked->CheckBoxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CheckBoxTerms->OnHoverChecked->CheckmarkColor = System::Drawing::Color::White;
			this->CheckBoxTerms->OnHoverChecked->CheckmarkThickness = 2;
			this->CheckBoxTerms->OnHoverUnchecked->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CheckBoxTerms->OnHoverUnchecked->BorderRadius = 12;
			this->CheckBoxTerms->OnHoverUnchecked->BorderThickness = 1;
			this->CheckBoxTerms->OnHoverUnchecked->CheckBoxColor = System::Drawing::Color::Transparent;
			this->CheckBoxTerms->OnUncheck->BorderColor = System::Drawing::Color::DarkGray;
			this->CheckBoxTerms->OnUncheck->BorderRadius = 12;
			this->CheckBoxTerms->OnUncheck->BorderThickness = 1;
			this->CheckBoxTerms->OnUncheck->CheckBoxColor = System::Drawing::Color::Transparent;
			this->CheckBoxTerms->Size = System::Drawing::Size(21, 21);
			this->CheckBoxTerms->Style = Bunifu::UI::WinForms::BunifuCheckBox::CheckBoxStyles::Bunifu;
			this->CheckBoxTerms->TabIndex = 14;
			this->CheckBoxTerms->ThreeState = false;
			this->CheckBoxTerms->ToolTipText = nullptr;
			// 
			// buttonRegister
			// 
			this->buttonRegister->Animated = true;
			this->buttonRegister->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->BorderRadius = 20;
			this->buttonRegister->BorderThickness = 1;
			this->buttonRegister->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonRegister->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonRegister->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonRegister->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonRegister->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonRegister->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonRegister->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
			this->buttonRegister->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRegister.Image")));
			this->buttonRegister->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonRegister->ImageSize = System::Drawing::Size(25, 25);
			this->buttonRegister->Location = System::Drawing::Point(21, 331);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(210, 39);
			this->buttonRegister->TabIndex = 13;
			this->buttonRegister->Text = L"Регистрация";
			this->buttonRegister->UseTransparentBackground = true;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &login::buttonRegister_Click);
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
			this->textBoxTerms->Location = System::Drawing::Point(659, 463);
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
			// textBoxPasswordReg2
			// 
			this->textBoxPasswordReg2->Animated = true;
			this->textBoxPasswordReg2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPasswordReg2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPasswordReg2->AutoRoundedCorners = true;
			this->textBoxPasswordReg2->BorderColor = System::Drawing::Color::White;
			this->textBoxPasswordReg2->BorderRadius = 18;
			this->textBoxPasswordReg2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPasswordReg2->DefaultText = L"";
			this->textBoxPasswordReg2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPasswordReg2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPasswordReg2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPasswordReg2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPasswordReg2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBoxPasswordReg2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPasswordReg2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPasswordReg2->ForeColor = System::Drawing::Color::Black;
			this->textBoxPasswordReg2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPasswordReg2->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPasswordReg2.IconLeft")));
			this->textBoxPasswordReg2->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPasswordReg2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPasswordReg2->Location = System::Drawing::Point(24, 240);
			this->textBoxPasswordReg2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPasswordReg2->Name = L"textBoxPasswordReg2";
			this->textBoxPasswordReg2->PasswordChar = '●';
			this->textBoxPasswordReg2->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPasswordReg2->PlaceholderText = L"Повторите пароль";
			this->textBoxPasswordReg2->SelectedText = L"";
			this->textBoxPasswordReg2->Size = System::Drawing::Size(262, 39);
			this->textBoxPasswordReg2->TabIndex = 11;
			this->textBoxPasswordReg2->UseSystemPasswordChar = true;
			// 
			// linkLabelTerms
			// 
			this->linkLabelTerms->AutoSize = true;
			this->linkLabelTerms->DisabledLinkColor = System::Drawing::Color::Transparent;
			this->linkLabelTerms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->linkLabelTerms->ForeColor = System::Drawing::Color::Transparent;
			this->linkLabelTerms->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->linkLabelTerms->Location = System::Drawing::Point(152, 296);
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
			this->labelTerms->Location = System::Drawing::Point(52, 296);
			this->labelTerms->Name = L"labelTerms";
			this->labelTerms->Size = System::Drawing::Size(104, 20);
			this->labelTerms->TabIndex = 7;
			this->labelTerms->Text = L"Я принимаю";
			// 
			// textBoxPasswordReg
			// 
			this->textBoxPasswordReg->Animated = true;
			this->textBoxPasswordReg->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPasswordReg->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPasswordReg->AutoRoundedCorners = true;
			this->textBoxPasswordReg->BorderColor = System::Drawing::Color::White;
			this->textBoxPasswordReg->BorderRadius = 18;
			this->textBoxPasswordReg->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPasswordReg->DefaultText = L"";
			this->textBoxPasswordReg->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPasswordReg->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPasswordReg->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPasswordReg->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPasswordReg->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBoxPasswordReg->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPasswordReg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPasswordReg->ForeColor = System::Drawing::Color::Black;
			this->textBoxPasswordReg->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPasswordReg->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPasswordReg.IconLeft")));
			this->textBoxPasswordReg->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPasswordReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPasswordReg->Location = System::Drawing::Point(24, 182);
			this->textBoxPasswordReg->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPasswordReg->Name = L"textBoxPasswordReg";
			this->textBoxPasswordReg->PasswordChar = '●';
			this->textBoxPasswordReg->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPasswordReg->PlaceholderText = L"Пароль";
			this->textBoxPasswordReg->SelectedText = L"";
			this->textBoxPasswordReg->Size = System::Drawing::Size(262, 39);
			this->textBoxPasswordReg->TabIndex = 3;
			this->textBoxPasswordReg->UseSystemPasswordChar = true;
			// 
			// textBoxLoginReg
			// 
			this->textBoxLoginReg->Animated = true;
			this->textBoxLoginReg->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxLoginReg->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxLoginReg->AutoRoundedCorners = true;
			this->textBoxLoginReg->BorderColor = System::Drawing::Color::White;
			this->textBoxLoginReg->BorderRadius = 18;
			this->textBoxLoginReg->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxLoginReg->DefaultText = L"";
			this->textBoxLoginReg->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxLoginReg->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxLoginReg->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxLoginReg->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxLoginReg->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBoxLoginReg->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxLoginReg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxLoginReg->ForeColor = System::Drawing::Color::Black;
			this->textBoxLoginReg->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxLoginReg->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxLoginReg.IconLeft")));
			this->textBoxLoginReg->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxLoginReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxLoginReg->Location = System::Drawing::Point(24, 126);
			this->textBoxLoginReg->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxLoginReg->Name = L"textBoxLoginReg";
			this->textBoxLoginReg->PasswordChar = '\0';
			this->textBoxLoginReg->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxLoginReg->PlaceholderText = L"Логин";
			this->textBoxLoginReg->SelectedText = L"";
			this->textBoxLoginReg->Size = System::Drawing::Size(262, 39);
			this->textBoxLoginReg->TabIndex = 2;
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
			this->panelAuthorize->Controls->Add(this->guna2Button1);
			this->panelAuthorize->Controls->Add(this->buttonQuestion);
			this->panelAuthorize->Controls->Add(this->labelRemember);
			this->panelAuthorize->Controls->Add(this->ButtonSwitchRemember);
			this->panelAuthorize->Controls->Add(this->textBoxPassword);
			this->panelAuthorize->Controls->Add(this->textBoxLogin);
			this->panelAuthorize->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->panelAuthorize->Location = System::Drawing::Point(4, 47);
			this->panelAuthorize->Name = L"panelAuthorize";
			this->panelAuthorize->ShadowColor = System::Drawing::Color::Black;
			this->panelAuthorize->Size = System::Drawing::Size(694, 502);
			this->panelAuthorize->TabIndex = 5;
			// 
			// guna2Button1
			// 
			this->guna2Button1->Animated = true;
			this->guna2Button1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->BorderRadius = 20;
			this->guna2Button1->BorderThickness = 1;
			this->guna2Button1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2Button1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2Button1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2Button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2Button1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2Button1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			this->guna2Button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button1.Image")));
			this->guna2Button1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button1->ImageSize = System::Drawing::Size(25, 25);
			this->guna2Button1->Location = System::Drawing::Point(28, 286);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->Size = System::Drawing::Size(149, 39);
			this->guna2Button1->TabIndex = 14;
			this->guna2Button1->Text = L"Войти";
			this->guna2Button1->UseTransparentBackground = true;
			this->guna2Button1->Click += gcnew System::EventHandler(this, &login::buttonComeIn_Click);
			// 
			// buttonQuestion
			// 
			this->buttonQuestion->Animated = true;
			this->buttonQuestion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonQuestion->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonQuestion->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonQuestion->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonQuestion->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonQuestion->FillColor = System::Drawing::Color::Transparent;
			this->buttonQuestion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->buttonQuestion->ForeColor = System::Drawing::Color::White;
			this->buttonQuestion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonQuestion.Image")));
			this->buttonQuestion->ImageOffset = System::Drawing::Point(0, 12);
			this->buttonQuestion->Location = System::Drawing::Point(234, 251);
			this->buttonQuestion->Name = L"buttonQuestion";
			this->buttonQuestion->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->buttonQuestion->Size = System::Drawing::Size(20, 20);
			this->buttonQuestion->TabIndex = 8;
			this->buttonQuestion->Text = L"guna2CircleButton1";
			this->buttonQuestion->UseTransparentBackground = true;
			this->buttonQuestion->Click += gcnew System::EventHandler(this, &login::buttonQuestion_click);
			// 
			// labelRemember
			// 
			this->labelRemember->AutoSize = true;
			this->labelRemember->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->labelRemember->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelRemember->Location = System::Drawing::Point(68, 249);
			this->labelRemember->Name = L"labelRemember";
			this->labelRemember->Size = System::Drawing::Size(166, 22);
			this->labelRemember->TabIndex = 7;
			this->labelRemember->Text = L"Запомнить меня";
			// 
			// ButtonSwitchRemember
			// 
			this->ButtonSwitchRemember->Animated = true;
			this->ButtonSwitchRemember->AutoRoundedCorners = true;
			this->ButtonSwitchRemember->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->ButtonSwitchRemember->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ButtonSwitchRemember->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->ButtonSwitchRemember->CheckedState->InnerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ButtonSwitchRemember->Location = System::Drawing::Point(27, 251);
			this->ButtonSwitchRemember->Name = L"ButtonSwitchRemember";
			this->ButtonSwitchRemember->Size = System::Drawing::Size(35, 20);
			this->ButtonSwitchRemember->TabIndex = 6;
			this->ButtonSwitchRemember->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ButtonSwitchRemember->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->ButtonSwitchRemember->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->ButtonSwitchRemember->UncheckedState->InnerColor = System::Drawing::Color::White;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Animated = true;
			this->textBoxPassword->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPassword->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPassword->AutoRoundedCorners = true;
			this->textBoxPassword->BorderColor = System::Drawing::Color::White;
			this->textBoxPassword->BorderRadius = 18;
			this->textBoxPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPassword->DefaultText = L"";
			this->textBoxPassword->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPassword->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPassword->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassword->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassword->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBoxPassword->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPassword->ForeColor = System::Drawing::Color::Black;
			this->textBoxPassword->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassword->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassword.IconLeft")));
			this->textBoxPassword->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPassword->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPassword->Location = System::Drawing::Point(24, 193);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '●';
			this->textBoxPassword->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassword->PlaceholderText = L"Пароль";
			this->textBoxPassword->SelectedText = L"";
			this->textBoxPassword->Size = System::Drawing::Size(262, 39);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->UseSystemPasswordChar = true;
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
	private: System::Void buttonQuestion_click(System::Object^ sender, System::EventArgs^ e) {
		//Вывод информации об опции сохранения данных
		MessageOption->Text = "Это опция позволяет сохранить ваши данные при последующем входе";
		MessageOption->Show();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Открывает условия пользования
		textBoxTerms->Visible = true;
		ButtonCloseTerms->Visible = true;

		//Корректное отображение элементов
		textBoxTerms->BringToFront();
		ButtonCloseTerms->BringToFront();
	}
	private: System::Void buttonCloseTerms(System::Object^ sender, System::EventArgs^ e) {
		//Закрывает условия пользования
		textBoxTerms->Visible = false;
		ButtonCloseTerms->Visible = false;
		//Спрашивает о согласии, после закрытия
		System::Windows::Forms::DialogResult result = MessageAcceptTerms->Show();
		if (result == System::Windows::Forms::DialogResult::Yes) {
			CheckBoxTerms->Checked = true;
		}
		else if (result == System::Windows::Forms::DialogResult::No) {
			CheckBoxTerms->Checked = false;
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
	private: System::Void buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void buttonComeIn_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
