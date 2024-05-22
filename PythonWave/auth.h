#pragma once
#include "config.h"

namespace PythonWave {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Reflection;
	public ref class auth : public System::Windows::Forms::Form
	{
	public:
		auth(void)
		{
			InitializeComponent();
            setShadows();
		}

	protected:
		~auth()
		{
			if (components)
			{
                Application::Exit();
				delete components;
			}
		}


	private: Guna::UI2::WinForms::Guna2CircleButton^ buttonClose;
	private: Guna::UI2::WinForms::Guna2CircleButton^ buttonMinimize;
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ panelAuth;
    private: Bunifu::UI::WinForms::BunifuPages^ pagesAuthReg;
    private: System::Windows::Forms::TabPage^ pageAuth;
    private: System::Windows::Forms::TabPage^ pageReg;
	private: Guna::UI2::WinForms::Guna2Button^ buttonShowAuth;
	private: Guna::UI2::WinForms::Guna2Button^ buttonShowReg;
    private: Guna::UI2::WinForms::Guna2Button^ buttonComeIn;
    private: Guna::UI2::WinForms::Guna2CircleButton^ buttonQuestion;
    private: System::Windows::Forms::Label^ labelRemember;
    private: Guna::UI2::WinForms::Guna2ToggleSwitch^ SwitchRemember;

    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassword;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxLogin;
    private: Guna::UI2::WinForms::Guna2Button^ buttonRegister;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassword_1;
    private: System::Windows::Forms::LinkLabel^ Ы;
    private: System::Windows::Forms::Label^ label1;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassword1;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxLogin1;
    private: Bunifu::UI::WinForms::BunifuCheckBox^ checkBoxTerms;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxTerms;
    private: Bunifu::UI::WinForms::BunifuPages^ pagesTransition;
    private: System::Windows::Forms::TabPage^ pageMain;
    private: System::Windows::Forms::TabPage^ pageInfo;



    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;
    private: Guna::UI2::WinForms::Guna2CircleButton^ buttonCloseTerms;
    private: System::Windows::Forms::Timer^ timerTransition;
    private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox1;
    private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;
    private: Guna::UI2::WinForms::Guna2HtmlLabel^ labelLogo1;
    private: System::Windows::Forms::TabPage^ pageWelcome;
    private: Guna::UI2::WinForms::Guna2HtmlLabel^ labelWelcome;
    private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox3;
    private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox4;
    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageOption;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControl1;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControl2;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControl3;
    private: System::Windows::Forms::TabPage^ PageEnd;
    private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
    private: System::Windows::Forms::Panel^ panelMain;
    private: System::Windows::Forms::Label^ labelMain;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControlMain;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControlMain2;

    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageWarning;
    private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;




    protected:
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(auth::typeid));
            Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation3 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
            Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
            this->buttonClose = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->buttonMinimize = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->panelAuth = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
            this->pagesAuthReg = (gcnew Bunifu::UI::WinForms::BunifuPages());
            this->pageAuth = (gcnew System::Windows::Forms::TabPage());
            this->guna2PictureBox3 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
            this->buttonComeIn = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->buttonQuestion = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->textBoxLogin = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->textBoxPassword = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->SwitchRemember = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
            this->labelRemember = (gcnew System::Windows::Forms::Label());
            this->pageReg = (gcnew System::Windows::Forms::TabPage());
            this->guna2PictureBox4 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
            this->checkBoxTerms = (gcnew Bunifu::UI::WinForms::BunifuCheckBox());
            this->buttonRegister = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->textBoxPassword_1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->Ы = (gcnew System::Windows::Forms::LinkLabel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxPassword1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->textBoxLogin1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->labelLogo1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
            this->guna2PictureBox1 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
            this->buttonShowReg = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->buttonShowAuth = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->buttonCloseTerms = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->textBoxTerms = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->pagesTransition = (gcnew Bunifu::UI::WinForms::BunifuPages());
            this->pageMain = (gcnew System::Windows::Forms::TabPage());
            this->pageWelcome = (gcnew System::Windows::Forms::TabPage());
            this->labelWelcome = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
            this->pageInfo = (gcnew System::Windows::Forms::TabPage());
            this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
            this->PageEnd = (gcnew System::Windows::Forms::TabPage());
            this->MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->timerTransition = (gcnew System::Windows::Forms::Timer(this->components));
            this->MessageOption = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->dragControl1 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragControl2 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragControl3 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->panelMain = (gcnew System::Windows::Forms::Panel());
            this->labelMain = (gcnew System::Windows::Forms::Label());
            this->dragControlMain = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragControlMain2 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->MessageWarning = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
            this->panelAuth->SuspendLayout();
            this->pagesAuthReg->SuspendLayout();
            this->pageAuth->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox3))->BeginInit();
            this->pageReg->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox4))->BeginInit();
            this->guna2Panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
            this->pagesTransition->SuspendLayout();
            this->pageMain->SuspendLayout();
            this->pageWelcome->SuspendLayout();
            this->pageInfo->SuspendLayout();
            this->panelMain->SuspendLayout();
            this->SuspendLayout();
            // 
            // buttonClose
            // 
            this->buttonClose->Animated = true;
            this->buttonClose->BackColor = System::Drawing::Color::Transparent;
            this->buttonClose->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonClose->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonClose->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonClose->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonClose->FillColor = System::Drawing::Color::Transparent;
            this->buttonClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->buttonClose->ForeColor = System::Drawing::Color::White;
            this->buttonClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonClose.Image")));
            this->buttonClose->ImageOffset = System::Drawing::Point(0, 12);
            this->buttonClose->Location = System::Drawing::Point(1251, 5);
            this->buttonClose->Name = L"buttonClose";
            this->buttonClose->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonClose->Size = System::Drawing::Size(20, 21);
            this->buttonClose->TabIndex = 0;
            this->buttonClose->Text = L"guna2CircleButton1";
            this->buttonClose->UseTransparentBackground = true;
            this->buttonClose->Click += gcnew System::EventHandler(this, &auth::buttonClose_Click);
            // 
            // buttonMinimize
            // 
            this->buttonMinimize->Animated = true;
            this->buttonMinimize->BackColor = System::Drawing::Color::Transparent;
            this->buttonMinimize->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonMinimize->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonMinimize->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonMinimize->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonMinimize->FillColor = System::Drawing::Color::Transparent;
            this->buttonMinimize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->buttonMinimize->ForeColor = System::Drawing::Color::White;
            this->buttonMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMinimize.Image")));
            this->buttonMinimize->ImageOffset = System::Drawing::Point(0, 12);
            this->buttonMinimize->Location = System::Drawing::Point(1225, 5);
            this->buttonMinimize->Name = L"buttonMinimize";
            this->buttonMinimize->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonMinimize->Size = System::Drawing::Size(20, 21);
            this->buttonMinimize->TabIndex = 1;
            this->buttonMinimize->Text = L"guna2CircleButton2";
            this->buttonMinimize->UseTransparentBackground = true;
            this->buttonMinimize->Click += gcnew System::EventHandler(this, &auth::buttonMinimize_Click);
            // 
            // panelAuth
            // 
            this->panelAuth->BackColor = System::Drawing::Color::Transparent;
            this->panelAuth->Controls->Add(this->pagesAuthReg);
            this->panelAuth->Controls->Add(this->guna2Panel1);
            this->panelAuth->Controls->Add(this->buttonShowReg);
            this->panelAuth->Controls->Add(this->buttonShowAuth);
            this->panelAuth->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->panelAuth->Location = System::Drawing::Point(290, 21);
            this->panelAuth->Name = L"panelAuth";
            this->panelAuth->ShadowColor = System::Drawing::Color::Black;
            this->panelAuth->Size = System::Drawing::Size(700, 550);
            this->panelAuth->TabIndex = 2;
            // 
            // pagesAuthReg
            // 
            this->pagesAuthReg->Alignment = System::Windows::Forms::TabAlignment::Bottom;
            this->pagesAuthReg->AllowTransitions = true;
            this->pagesAuthReg->Controls->Add(this->pageAuth);
            this->pagesAuthReg->Controls->Add(this->pageReg);
            this->pagesAuthReg->Location = System::Drawing::Point(15, 58);
            this->pagesAuthReg->Multiline = true;
            this->pagesAuthReg->Name = L"pagesAuthReg";
            this->pagesAuthReg->Page = this->pageAuth;
            this->pagesAuthReg->PageIndex = 0;
            this->pagesAuthReg->PageName = L"pageAuth";
            this->pagesAuthReg->PageTitle = L"pageAuth";
            this->pagesAuthReg->SelectedIndex = 0;
            this->pagesAuthReg->Size = System::Drawing::Size(351, 440);
            this->pagesAuthReg->TabIndex = 3;
            animation3->AnimateOnlyDifferences = true;
            animation3->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.BlindCoeff")));
            animation3->LeafCoeff = 0;
            animation3->MaxTime = 1;
            animation3->MinTime = 0;
            animation3->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicCoeff")));
            animation3->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicShift")));
            animation3->MosaicSize = 0;
            animation3->Padding = System::Windows::Forms::Padding(0);
            animation3->RotateCoeff = 0;
            animation3->RotateLimit = 0;
            animation3->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.ScaleCoeff")));
            animation3->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.SlideCoeff")));
            animation3->TimeCoeff = 1;
            animation3->TransparencyCoeff = 2;
            this->pagesAuthReg->Transition = animation3;
            this->pagesAuthReg->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
            // 
            // pageAuth
            // 
            this->pageAuth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->pageAuth->Controls->Add(this->guna2PictureBox3);
            this->pageAuth->Controls->Add(this->buttonComeIn);
            this->pageAuth->Controls->Add(this->buttonQuestion);
            this->pageAuth->Controls->Add(this->textBoxLogin);
            this->pageAuth->Controls->Add(this->textBoxPassword);
            this->pageAuth->Controls->Add(this->SwitchRemember);
            this->pageAuth->Controls->Add(this->labelRemember);
            this->pageAuth->ForeColor = System::Drawing::Color::Black;
            this->pageAuth->Location = System::Drawing::Point(4, 4);
            this->pageAuth->Name = L"pageAuth";
            this->pageAuth->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->pageAuth->Size = System::Drawing::Size(343, 414);
            this->pageAuth->TabIndex = 0;
            this->pageAuth->Text = L"pageAuth";
            // 
            // guna2PictureBox3
            // 
            this->guna2PictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->guna2PictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox3.Image")));
            this->guna2PictureBox3->ImageRotate = 0;
            this->guna2PictureBox3->Location = System::Drawing::Point(110, 55);
            this->guna2PictureBox3->Name = L"guna2PictureBox3";
            this->guna2PictureBox3->Size = System::Drawing::Size(104, 102);
            this->guna2PictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->guna2PictureBox3->TabIndex = 26;
            this->guna2PictureBox3->TabStop = false;
            this->guna2PictureBox3->UseTransparentBackground = true;
            // 
            // buttonComeIn
            // 
            this->buttonComeIn->Animated = true;
            this->buttonComeIn->BackColor = System::Drawing::Color::Transparent;
            this->buttonComeIn->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonComeIn->BorderRadius = 20;
            this->buttonComeIn->BorderThickness = 1;
            this->buttonComeIn->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonComeIn->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonComeIn->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonComeIn->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonComeIn->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonComeIn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonComeIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonComeIn->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonComeIn->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonComeIn->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonComeIn->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonComeIn->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
            this->buttonComeIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonComeIn.Image")));
            this->buttonComeIn->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonComeIn->ImageSize = System::Drawing::Size(25, 25);
            this->buttonComeIn->Location = System::Drawing::Point(36, 319);
            this->buttonComeIn->Name = L"buttonComeIn";
            this->buttonComeIn->Size = System::Drawing::Size(149, 39);
            this->buttonComeIn->TabIndex = 14;
            this->buttonComeIn->Text = L"Войти";
            this->buttonComeIn->UseTransparentBackground = true;
            this->buttonComeIn->Click += gcnew System::EventHandler(this, &auth::buttonComeIn_Click);
            // 
            // buttonQuestion
            // 
            this->buttonQuestion->Animated = true;
            this->buttonQuestion->BackColor = System::Drawing::Color::Transparent;
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
            this->buttonQuestion->Location = System::Drawing::Point(226, 284);
            this->buttonQuestion->Name = L"buttonQuestion";
            this->buttonQuestion->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonQuestion->Size = System::Drawing::Size(20, 20);
            this->buttonQuestion->TabIndex = 8;
            this->buttonQuestion->Text = L"guna2CircleButton1";
            this->buttonQuestion->UseTransparentBackground = true;
            this->buttonQuestion->Click += gcnew System::EventHandler(this, &auth::buttonQuestion_Click);
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
            this->textBoxLogin->Location = System::Drawing::Point(35, 171);
            this->textBoxLogin->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxLogin->MaxLength = 10;
            this->textBoxLogin->Name = L"textBoxLogin";
            this->textBoxLogin->PasswordChar = '\0';
            this->textBoxLogin->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxLogin->PlaceholderText = L"Логин";
            this->textBoxLogin->SelectedText = L"";
            this->textBoxLogin->Size = System::Drawing::Size(262, 39);
            this->textBoxLogin->TabIndex = 2;
            this->textBoxLogin->TextOffset = System::Drawing::Point(-2, 0);
            this->textBoxLogin->Click += gcnew System::EventHandler(this, &auth::textBoxLogin_Click);
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
            this->textBoxPassword->Location = System::Drawing::Point(35, 228);
            this->textBoxPassword->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxPassword->MaxLength = 32;
            this->textBoxPassword->Name = L"textBoxPassword";
            this->textBoxPassword->PasswordChar = '●';
            this->textBoxPassword->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxPassword->PlaceholderText = L"Пароль";
            this->textBoxPassword->SelectedText = L"";
            this->textBoxPassword->Size = System::Drawing::Size(262, 39);
            this->textBoxPassword->TabIndex = 3;
            this->textBoxPassword->TextOffset = System::Drawing::Point(-2, 0);
            this->textBoxPassword->UseSystemPasswordChar = true;
            this->textBoxPassword->Click += gcnew System::EventHandler(this, &auth::textBoxPassword_Click);
            // 
            // SwitchRemember
            // 
            this->SwitchRemember->Animated = true;
            this->SwitchRemember->AutoRoundedCorners = true;
            this->SwitchRemember->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->SwitchRemember->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->SwitchRemember->CheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->SwitchRemember->CheckedState->InnerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->SwitchRemember->Location = System::Drawing::Point(35, 284);
            this->SwitchRemember->Name = L"SwitchRemember";
            this->SwitchRemember->Size = System::Drawing::Size(35, 20);
            this->SwitchRemember->TabIndex = 6;
            this->SwitchRemember->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->SwitchRemember->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->SwitchRemember->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->SwitchRemember->UncheckedState->InnerColor = System::Drawing::Color::White;
            // 
            // labelRemember
            // 
            this->labelRemember->AutoSize = true;
            this->labelRemember->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelRemember->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelRemember->Location = System::Drawing::Point(70, 280);
            this->labelRemember->Name = L"labelRemember";
            this->labelRemember->Size = System::Drawing::Size(156, 25);
            this->labelRemember->TabIndex = 7;
            this->labelRemember->Text = L"Запомнить меня";
            // 
            // pageReg
            // 
            this->pageReg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->pageReg->Controls->Add(this->guna2PictureBox4);
            this->pageReg->Controls->Add(this->checkBoxTerms);
            this->pageReg->Controls->Add(this->buttonRegister);
            this->pageReg->Controls->Add(this->textBoxPassword_1);
            this->pageReg->Controls->Add(this->Ы);
            this->pageReg->Controls->Add(this->label1);
            this->pageReg->Controls->Add(this->textBoxPassword1);
            this->pageReg->Controls->Add(this->textBoxLogin1);
            this->pageReg->Location = System::Drawing::Point(4, 4);
            this->pageReg->Name = L"pageReg";
            this->pageReg->Padding = System::Windows::Forms::Padding(3);
            this->pageReg->Size = System::Drawing::Size(343, 414);
            this->pageReg->TabIndex = 1;
            this->pageReg->Text = L"pageReg";
            // 
            // guna2PictureBox4
            // 
            this->guna2PictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->guna2PictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox4.Image")));
            this->guna2PictureBox4->ImageRotate = 0;
            this->guna2PictureBox4->Location = System::Drawing::Point(110, 30);
            this->guna2PictureBox4->Name = L"guna2PictureBox4";
            this->guna2PictureBox4->Size = System::Drawing::Size(104, 102);
            this->guna2PictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->guna2PictureBox4->TabIndex = 27;
            this->guna2PictureBox4->TabStop = false;
            this->guna2PictureBox4->UseTransparentBackground = true;
            // 
            // checkBoxTerms
            // 
            this->checkBoxTerms->AllowBindingControlAnimation = true;
            this->checkBoxTerms->AllowBindingControlColorChanges = false;
            this->checkBoxTerms->AllowBindingControlLocation = true;
            this->checkBoxTerms->AllowCheckBoxAnimation = false;
            this->checkBoxTerms->AllowCheckmarkAnimation = true;
            this->checkBoxTerms->AllowOnHoverStates = true;
            this->checkBoxTerms->AutoCheck = true;
            this->checkBoxTerms->BackColor = System::Drawing::Color::Transparent;
            this->checkBoxTerms->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBoxTerms.BackgroundImage")));
            this->checkBoxTerms->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->checkBoxTerms->BindingControlPosition = Bunifu::UI::WinForms::BunifuCheckBox::BindingControlPositions::Right;
            this->checkBoxTerms->BorderRadius = 12;
            this->checkBoxTerms->Checked = false;
            this->checkBoxTerms->CheckState = Bunifu::UI::WinForms::BunifuCheckBox::CheckStates::Unchecked;
            this->checkBoxTerms->Cursor = System::Windows::Forms::Cursors::Default;
            this->checkBoxTerms->CustomCheckmarkImage = nullptr;
            this->checkBoxTerms->Location = System::Drawing::Point(33, 320);
            this->checkBoxTerms->MinimumSize = System::Drawing::Size(17, 17);
            this->checkBoxTerms->Name = L"checkBoxTerms";
            this->checkBoxTerms->OnCheck->BorderColor = System::Drawing::Color::DodgerBlue;
            this->checkBoxTerms->OnCheck->BorderRadius = 12;
            this->checkBoxTerms->OnCheck->BorderThickness = 2;
            this->checkBoxTerms->OnCheck->CheckBoxColor = System::Drawing::Color::DodgerBlue;
            this->checkBoxTerms->OnCheck->CheckmarkColor = System::Drawing::Color::White;
            this->checkBoxTerms->OnCheck->CheckmarkThickness = 2;
            this->checkBoxTerms->OnDisable->BorderColor = System::Drawing::Color::LightGray;
            this->checkBoxTerms->OnDisable->BorderRadius = 12;
            this->checkBoxTerms->OnDisable->BorderThickness = 2;
            this->checkBoxTerms->OnDisable->CheckBoxColor = System::Drawing::Color::Transparent;
            this->checkBoxTerms->OnDisable->CheckmarkColor = System::Drawing::Color::LightGray;
            this->checkBoxTerms->OnDisable->CheckmarkThickness = 2;
            this->checkBoxTerms->OnHoverChecked->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->checkBoxTerms->OnHoverChecked->BorderRadius = 12;
            this->checkBoxTerms->OnHoverChecked->BorderThickness = 2;
            this->checkBoxTerms->OnHoverChecked->CheckBoxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->checkBoxTerms->OnHoverChecked->CheckmarkColor = System::Drawing::Color::White;
            this->checkBoxTerms->OnHoverChecked->CheckmarkThickness = 2;
            this->checkBoxTerms->OnHoverUnchecked->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->checkBoxTerms->OnHoverUnchecked->BorderRadius = 12;
            this->checkBoxTerms->OnHoverUnchecked->BorderThickness = 1;
            this->checkBoxTerms->OnHoverUnchecked->CheckBoxColor = System::Drawing::Color::Transparent;
            this->checkBoxTerms->OnUncheck->BorderColor = System::Drawing::Color::DarkGray;
            this->checkBoxTerms->OnUncheck->BorderRadius = 12;
            this->checkBoxTerms->OnUncheck->BorderThickness = 1;
            this->checkBoxTerms->OnUncheck->CheckBoxColor = System::Drawing::Color::Transparent;
            this->checkBoxTerms->Size = System::Drawing::Size(21, 21);
            this->checkBoxTerms->Style = Bunifu::UI::WinForms::BunifuCheckBox::CheckBoxStyles::Bunifu;
            this->checkBoxTerms->TabIndex = 20;
            this->checkBoxTerms->ThreeState = false;
            this->checkBoxTerms->ToolTipText = nullptr;
            // 
            // buttonRegister
            // 
            this->buttonRegister->Animated = true;
            this->buttonRegister->BackColor = System::Drawing::Color::Transparent;
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
            this->buttonRegister->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
            this->buttonRegister->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRegister.Image")));
            this->buttonRegister->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonRegister->ImageSize = System::Drawing::Size(25, 25);
            this->buttonRegister->Location = System::Drawing::Point(34, 351);
            this->buttonRegister->Name = L"buttonRegister";
            this->buttonRegister->Size = System::Drawing::Size(210, 39);
            this->buttonRegister->TabIndex = 19;
            this->buttonRegister->Text = L"Регистрация";
            this->buttonRegister->UseTransparentBackground = true;
            this->buttonRegister->Click += gcnew System::EventHandler(this, &auth::buttonRegister_Click);
            // 
            // textBoxPassword_1
            // 
            this->textBoxPassword_1->Animated = true;
            this->textBoxPassword_1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
            this->textBoxPassword_1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
            this->textBoxPassword_1->AutoRoundedCorners = true;
            this->textBoxPassword_1->BorderColor = System::Drawing::Color::White;
            this->textBoxPassword_1->BorderRadius = 18;
            this->textBoxPassword_1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBoxPassword_1->DefaultText = L"";
            this->textBoxPassword_1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->textBoxPassword_1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->textBoxPassword_1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxPassword_1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxPassword_1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->textBoxPassword_1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxPassword_1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->textBoxPassword_1->ForeColor = System::Drawing::Color::Black;
            this->textBoxPassword_1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxPassword_1->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassword_1.IconLeft")));
            this->textBoxPassword_1->IconLeftOffset = System::Drawing::Point(5, 0);
            this->textBoxPassword_1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->textBoxPassword_1->Location = System::Drawing::Point(34, 268);
            this->textBoxPassword_1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxPassword_1->MaxLength = 32;
            this->textBoxPassword_1->Name = L"textBoxPassword_1";
            this->textBoxPassword_1->PasswordChar = '●';
            this->textBoxPassword_1->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxPassword_1->PlaceholderText = L"Повторите пароль";
            this->textBoxPassword_1->SelectedText = L"";
            this->textBoxPassword_1->Size = System::Drawing::Size(262, 39);
            this->textBoxPassword_1->TabIndex = 18;
            this->textBoxPassword_1->TextOffset = System::Drawing::Point(-2, 0);
            this->textBoxPassword_1->UseSystemPasswordChar = true;
            // 
            // Ы
            // 
            this->Ы->AutoSize = true;
            this->Ы->DisabledLinkColor = System::Drawing::Color::Transparent;
            this->Ы->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
            this->Ы->ForeColor = System::Drawing::Color::Transparent;
            this->Ы->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->Ы->Location = System::Drawing::Point(151, 320);
            this->Ы->Name = L"Ы";
            this->Ы->Size = System::Drawing::Size(178, 20);
            this->Ы->TabIndex = 17;
            this->Ы->TabStop = true;
            this->Ы->Text = L"условия использования";
            this->Ы->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &auth::linkLabelTerms_LinkClicked);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label1->Location = System::Drawing::Point(57, 320);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(99, 20);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Я принимаю";
            // 
            // textBoxPassword1
            // 
            this->textBoxPassword1->Animated = true;
            this->textBoxPassword1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
            this->textBoxPassword1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
            this->textBoxPassword1->AutoRoundedCorners = true;
            this->textBoxPassword1->BorderColor = System::Drawing::Color::White;
            this->textBoxPassword1->BorderRadius = 18;
            this->textBoxPassword1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBoxPassword1->DefaultText = L"";
            this->textBoxPassword1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->textBoxPassword1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->textBoxPassword1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxPassword1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxPassword1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->textBoxPassword1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxPassword1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->textBoxPassword1->ForeColor = System::Drawing::Color::Black;
            this->textBoxPassword1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxPassword1->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassword1.IconLeft")));
            this->textBoxPassword1->IconLeftOffset = System::Drawing::Point(5, 0);
            this->textBoxPassword1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->textBoxPassword1->Location = System::Drawing::Point(34, 211);
            this->textBoxPassword1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxPassword1->MaxLength = 32;
            this->textBoxPassword1->Name = L"textBoxPassword1";
            this->textBoxPassword1->PasswordChar = '●';
            this->textBoxPassword1->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxPassword1->PlaceholderText = L"Пароль";
            this->textBoxPassword1->SelectedText = L"";
            this->textBoxPassword1->Size = System::Drawing::Size(262, 39);
            this->textBoxPassword1->TabIndex = 15;
            this->textBoxPassword1->TextOffset = System::Drawing::Point(-2, 0);
            this->textBoxPassword1->UseSystemPasswordChar = true;
            // 
            // textBoxLogin1
            // 
            this->textBoxLogin1->Animated = true;
            this->textBoxLogin1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
            this->textBoxLogin1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
            this->textBoxLogin1->AutoRoundedCorners = true;
            this->textBoxLogin1->BorderColor = System::Drawing::Color::White;
            this->textBoxLogin1->BorderRadius = 18;
            this->textBoxLogin1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBoxLogin1->DefaultText = L"";
            this->textBoxLogin1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->textBoxLogin1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->textBoxLogin1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxLogin1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBoxLogin1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->textBoxLogin1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxLogin1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->textBoxLogin1->ForeColor = System::Drawing::Color::Black;
            this->textBoxLogin1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxLogin1->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxLogin1.IconLeft")));
            this->textBoxLogin1->IconLeftOffset = System::Drawing::Point(5, 0);
            this->textBoxLogin1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->textBoxLogin1->Location = System::Drawing::Point(34, 154);
            this->textBoxLogin1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxLogin1->MaxLength = 10;
            this->textBoxLogin1->Name = L"textBoxLogin1";
            this->textBoxLogin1->PasswordChar = '\0';
            this->textBoxLogin1->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxLogin1->PlaceholderText = L"Логин";
            this->textBoxLogin1->SelectedText = L"";
            this->textBoxLogin1->Size = System::Drawing::Size(262, 39);
            this->textBoxLogin1->TabIndex = 14;
            this->textBoxLogin1->TextOffset = System::Drawing::Point(-2, 0);
            // 
            // guna2Panel1
            // 
            this->guna2Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->guna2Panel1->Controls->Add(this->labelLogo1);
            this->guna2Panel1->Controls->Add(this->guna2PictureBox1);
            this->guna2Panel1->Location = System::Drawing::Point(367, 0);
            this->guna2Panel1->Name = L"guna2Panel1";
            this->guna2Panel1->Size = System::Drawing::Size(348, 550);
            this->guna2Panel1->TabIndex = 7;
            // 
            // labelLogo1
            // 
            this->labelLogo1->BackColor = System::Drawing::Color::Transparent;
            this->labelLogo1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelLogo1->Location = System::Drawing::Point(23, 364);
            this->labelLogo1->Name = L"labelLogo1";
            this->labelLogo1->Size = System::Drawing::Size(297, 60);
            this->labelLogo1->TabIndex = 25;
            this->labelLogo1->Text = L"PythonWave";
            // 
            // guna2PictureBox1
            // 
            this->guna2PictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->guna2PictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox1.Image")));
            this->guna2PictureBox1->ImageRotate = 0;
            this->guna2PictureBox1->Location = System::Drawing::Point(0, 90);
            this->guna2PictureBox1->Name = L"guna2PictureBox1";
            this->guna2PictureBox1->Size = System::Drawing::Size(333, 268);
            this->guna2PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->guna2PictureBox1->TabIndex = 24;
            this->guna2PictureBox1->TabStop = false;
            this->guna2PictureBox1->UseTransparentBackground = true;
            // 
            // buttonShowReg
            // 
            this->buttonShowReg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->buttonShowReg->Animated = true;
            this->buttonShowReg->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
            this->buttonShowReg->CheckedState->BorderColor = System::Drawing::Color::Black;
            this->buttonShowReg->CheckedState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonShowReg->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonShowReg->CheckedState->ForeColor = System::Drawing::Color::Black;
            this->buttonShowReg->CustomBorderColor = System::Drawing::Color::Transparent;
            this->buttonShowReg->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
            this->buttonShowReg->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonShowReg->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonShowReg->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonShowReg->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonShowReg->FillColor = System::Drawing::Color::Transparent;
            this->buttonShowReg->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->buttonShowReg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonShowReg->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonShowReg->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->buttonShowReg->Location = System::Drawing::Point(186, 6);
            this->buttonShowReg->Name = L"buttonShowReg";
            this->buttonShowReg->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->buttonShowReg->Size = System::Drawing::Size(180, 45);
            this->buttonShowReg->TabIndex = 6;
            this->buttonShowReg->Text = L"Регистрация";
            this->buttonShowReg->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
            this->buttonShowReg->Click += gcnew System::EventHandler(this, &auth::buttonShowReg_Click);
            // 
            // buttonShowAuth
            // 
            this->buttonShowAuth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->buttonShowAuth->Animated = true;
            this->buttonShowAuth->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
            this->buttonShowAuth->Checked = true;
            this->buttonShowAuth->CheckedState->CustomBorderColor = System::Drawing::Color::White;
            this->buttonShowAuth->CheckedState->FillColor = System::Drawing::Color::Transparent;
            this->buttonShowAuth->CheckedState->ForeColor = System::Drawing::Color::White;
            this->buttonShowAuth->CustomBorderColor = System::Drawing::Color::Transparent;
            this->buttonShowAuth->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
            this->buttonShowAuth->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonShowAuth->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonShowAuth->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonShowAuth->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonShowAuth->FillColor = System::Drawing::Color::Transparent;
            this->buttonShowAuth->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->buttonShowAuth->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonShowAuth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonShowAuth->Location = System::Drawing::Point(5, 6);
            this->buttonShowAuth->Name = L"buttonShowAuth";
            this->buttonShowAuth->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->buttonShowAuth->Size = System::Drawing::Size(180, 45);
            this->buttonShowAuth->TabIndex = 5;
            this->buttonShowAuth->Text = L"Авторизация";
            this->buttonShowAuth->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
            this->buttonShowAuth->Click += gcnew System::EventHandler(this, &auth::buttonShowAuth_Click);
            // 
            // buttonCloseTerms
            // 
            this->buttonCloseTerms->Animated = true;
            this->buttonCloseTerms->BackColor = System::Drawing::Color::Transparent;
            this->buttonCloseTerms->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonCloseTerms->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonCloseTerms->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonCloseTerms->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonCloseTerms->FillColor = System::Drawing::Color::Transparent;
            this->buttonCloseTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->buttonCloseTerms->ForeColor = System::Drawing::Color::White;
            this->buttonCloseTerms->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCloseTerms.Image")));
            this->buttonCloseTerms->Location = System::Drawing::Point(1084, 57);
            this->buttonCloseTerms->Name = L"buttonCloseTerms";
            this->buttonCloseTerms->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonCloseTerms->Size = System::Drawing::Size(20, 21);
            this->buttonCloseTerms->TabIndex = 4;
            this->buttonCloseTerms->UseTransparentBackground = true;
            this->buttonCloseTerms->Visible = false;
            this->buttonCloseTerms->Click += gcnew System::EventHandler(this, &auth::buttonCloseTerms_Click);
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
            this->textBoxTerms->FocusedState->BorderColor = System::Drawing::Color::Transparent;
            this->textBoxTerms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
            this->textBoxTerms->ForeColor = System::Drawing::SystemColors::Info;
            this->textBoxTerms->HoverState->BorderColor = System::Drawing::Color::Blue;
            this->textBoxTerms->Location = System::Drawing::Point(140, 47);
            this->textBoxTerms->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxTerms->Multiline = true;
            this->textBoxTerms->Name = L"textBoxTerms";
            this->textBoxTerms->PasswordChar = '\0';
            this->textBoxTerms->PlaceholderForeColor = System::Drawing::SystemColors::Info;
            this->textBoxTerms->PlaceholderText = L"";
            this->textBoxTerms->ReadOnly = true;
            this->textBoxTerms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBoxTerms->SelectedText = L"";
            this->textBoxTerms->Size = System::Drawing::Size(1000, 638);
            this->textBoxTerms->TabIndex = 21;
            this->textBoxTerms->Visible = false;
            // 
            // pagesTransition
            // 
            this->pagesTransition->Alignment = System::Windows::Forms::TabAlignment::Bottom;
            this->pagesTransition->AllowTransitions = true;
            this->pagesTransition->Controls->Add(this->pageMain);
            this->pagesTransition->Controls->Add(this->pageWelcome);
            this->pagesTransition->Controls->Add(this->pageInfo);
            this->pagesTransition->Controls->Add(this->PageEnd);
            this->pagesTransition->Location = System::Drawing::Point(0, 60);
            this->pagesTransition->Multiline = true;
            this->pagesTransition->Name = L"pagesTransition";
            this->pagesTransition->Page = this->pageMain;
            this->pagesTransition->PageIndex = 0;
            this->pagesTransition->PageName = L"pageMain";
            this->pagesTransition->PageTitle = L"pageMain";
            this->pagesTransition->SelectedIndex = 0;
            this->pagesTransition->Size = System::Drawing::Size(1280, 609);
            this->pagesTransition->TabIndex = 3;
            animation1->AnimateOnlyDifferences = true;
            animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
            animation1->LeafCoeff = 0;
            animation1->MaxTime = 1;
            animation1->MinTime = 0;
            animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
            animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
            animation1->MosaicSize = 0;
            animation1->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
            animation1->RotateCoeff = 0;
            animation1->RotateLimit = 0;
            animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
            animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
            animation1->TimeCoeff = 0;
            animation1->TransparencyCoeff = 1;
            this->pagesTransition->Transition = animation1;
            this->pagesTransition->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
            // 
            // pageMain
            // 
            this->pageMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageMain->Controls->Add(this->panelAuth);
            this->pageMain->Location = System::Drawing::Point(4, 4);
            this->pageMain->Name = L"pageMain";
            this->pageMain->Padding = System::Windows::Forms::Padding(3);
            this->pageMain->Size = System::Drawing::Size(1272, 583);
            this->pageMain->TabIndex = 0;
            this->pageMain->Text = L"pageMain";
            // 
            // pageWelcome
            // 
            this->pageWelcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageWelcome->Controls->Add(this->labelWelcome);
            this->pageWelcome->Location = System::Drawing::Point(4, 4);
            this->pageWelcome->Name = L"pageWelcome";
            this->pageWelcome->Padding = System::Windows::Forms::Padding(3);
            this->pageWelcome->Size = System::Drawing::Size(1272, 583);
            this->pageWelcome->TabIndex = 1;
            this->pageWelcome->Text = L"pageWelcome";
            // 
            // labelWelcome
            // 
            this->labelWelcome->BackColor = System::Drawing::Color::Transparent;
            this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.25F));
            this->labelWelcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelWelcome->Location = System::Drawing::Point(0, 263);
            this->labelWelcome->Name = L"labelWelcome";
            this->labelWelcome->Size = System::Drawing::Size(320, 41);
            this->labelWelcome->TabIndex = 0;
            this->labelWelcome->Text = L"Добро пожаловать, ";
            // 
            // pageInfo
            // 
            this->pageInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageInfo->Controls->Add(this->guna2HtmlLabel1);
            this->pageInfo->Location = System::Drawing::Point(4, 4);
            this->pageInfo->Name = L"pageInfo";
            this->pageInfo->Padding = System::Windows::Forms::Padding(3);
            this->pageInfo->Size = System::Drawing::Size(1272, 583);
            this->pageInfo->TabIndex = 2;
            this->pageInfo->Text = L"pageInfo";
            // 
            // guna2HtmlLabel1
            // 
            this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
            this->guna2HtmlLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24.25F));
            this->guna2HtmlLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->guna2HtmlLabel1->Location = System::Drawing::Point(262, 264);
            this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
            this->guna2HtmlLabel1->Size = System::Drawing::Size(746, 41);
            this->guna2HtmlLabel1->TabIndex = 1;
            this->guna2HtmlLabel1->Text = L"Перед началом расскажите немного о себе";
            // 
            // PageEnd
            // 
            this->PageEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->PageEnd->Location = System::Drawing::Point(4, 4);
            this->PageEnd->Name = L"PageEnd";
            this->PageEnd->Padding = System::Windows::Forms::Padding(3);
            this->PageEnd->Size = System::Drawing::Size(1272, 583);
            this->PageEnd->TabIndex = 3;
            this->PageEnd->Text = L"PageEnd";
            // 
            // MessageError
            // 
            this->MessageError->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
            this->MessageError->Caption = L"Ошибка";
            this->MessageError->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
            this->MessageError->Parent = this;
            this->MessageError->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageError->Text = L"";
            // 
            // timerTransition
            // 
            this->timerTransition->Interval = 1000;
            this->timerTransition->Tick += gcnew System::EventHandler(this, &auth::timerTransition_Tick);
            // 
            // MessageOption
            // 
            this->MessageOption->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
            this->MessageOption->Caption = L"Запомнить меня";
            this->MessageOption->Icon = Guna::UI2::WinForms::MessageDialogIcon::Information;
            this->MessageOption->Parent = this;
            this->MessageOption->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageOption->Text = L"Это опция позволяет сохранить ваши данные при последующем входе";
            // 
            // dragControl1
            // 
            this->dragControl1->DockIndicatorTransparencyValue = 0.6;
            this->dragControl1->TargetControl = this->pageInfo;
            this->dragControl1->UseTransparentDrag = true;
            // 
            // dragControl2
            // 
            this->dragControl2->DockIndicatorTransparencyValue = 0.6;
            this->dragControl2->TargetControl = this->pageMain;
            this->dragControl2->UseTransparentDrag = true;
            // 
            // dragControl3
            // 
            this->dragControl3->DockIndicatorTransparencyValue = 0.6;
            this->dragControl3->TargetControl = this->pageWelcome;
            this->dragControl3->UseTransparentDrag = true;
            // 
            // panelMain
            // 
            this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(71)));
            this->panelMain->Controls->Add(this->labelMain);
            this->panelMain->Controls->Add(this->buttonMinimize);
            this->panelMain->Controls->Add(this->buttonClose);
            this->panelMain->Location = System::Drawing::Point(0, 0);
            this->panelMain->Name = L"panelMain";
            this->panelMain->Size = System::Drawing::Size(1280, 30);
            this->panelMain->TabIndex = 46;
            // 
            // labelMain
            // 
            this->labelMain->AutoSize = true;
            this->labelMain->BackColor = System::Drawing::Color::Transparent;
            this->labelMain->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelMain->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelMain->Location = System::Drawing::Point(479, -2);
            this->labelMain->Name = L"labelMain";
            this->labelMain->Size = System::Drawing::Size(330, 30);
            this->labelMain->TabIndex = 45;
            this->labelMain->Text = L"PythonWave: Авторизация";
            this->labelMain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // dragControlMain
            // 
            this->dragControlMain->DockIndicatorTransparencyValue = 0.6;
            this->dragControlMain->TargetControl = this->panelMain;
            this->dragControlMain->UseTransparentDrag = true;
            // 
            // dragControlMain2
            // 
            this->dragControlMain2->DockIndicatorTransparencyValue = 0.6;
            this->dragControlMain2->TargetControl = this->labelMain;
            this->dragControlMain2->UseTransparentDrag = true;
            // 
            // MessageWarning
            // 
            this->MessageWarning->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
            this->MessageWarning->Caption = L"Внимание";
            this->MessageWarning->Icon = Guna::UI2::WinForms::MessageDialogIcon::Warning;
            this->MessageWarning->Parent = this;
            this->MessageWarning->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageWarning->Text = L"Введите пароль";
            // 
            // borderlessForm
            // 
            this->borderlessForm->BorderRadius = 25;
            this->borderlessForm->ContainerControl = this;
            this->borderlessForm->DockIndicatorTransparencyValue = 0.6;
            this->borderlessForm->TransparentWhileDrag = true;
            this->borderlessForm->HasFormShadow = true;
            // 
            // auth
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->ClientSize = System::Drawing::Size(1280, 720);
            this->Controls->Add(this->buttonCloseTerms);
            this->Controls->Add(this->pagesTransition);
            this->Controls->Add(this->textBoxTerms);
            this->Controls->Add(this->panelMain);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"auth";
            this->Opacity = 0;
            this->Text = L"PythonWave";
            this->Load += gcnew System::EventHandler(this, &auth::auth_Load);
            this->panelAuth->ResumeLayout(false);
            this->pagesAuthReg->ResumeLayout(false);
            this->pageAuth->ResumeLayout(false);
            this->pageAuth->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox3))->EndInit();
            this->pageReg->ResumeLayout(false);
            this->pageReg->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox4))->EndInit();
            this->guna2Panel1->ResumeLayout(false);
            this->guna2Panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->EndInit();
            this->pagesTransition->ResumeLayout(false);
            this->pageMain->ResumeLayout(false);
            this->pageWelcome->ResumeLayout(false);
            this->pageWelcome->PerformLayout();
            this->pageInfo->ResumeLayout(false);
            this->pageInfo->PerformLayout();
            this->panelMain->ResumeLayout(false);
            this->panelMain->PerformLayout();
            this->ResumeLayout(false);
        }

#pragma endregion
        String^ USER; // Глобальная переменная отвечающая за определение текущего пользователя

    // Форма - Анимации, кнопочки
    private: Void LastEnter();
    private: Void auth::loadConfig();


    private: Void buttonMinimize_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void timerTransition_Tick(System::Object^ sender, System::EventArgs^ e);
    private: Void buttonShowReg_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void buttonShowAuth_Click(System::Object^ sender, System::EventArgs^ e);

    //Регистрация
    private: Void buttonRegister_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void Register();
    private: Void buttonCloseTerms_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void linkLabelTerms_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

    //Вход
    private: Void buttonComeIn_Click(System::Object^ sender, System::EventArgs^ e);
    private: Boolean ComeIn();

	private: String^ ReadLogFile();
	private: Void CreateLogFile();
    private: Void buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e);
    private: Void auth_Load(System::Object^ sender, System::EventArgs^ e);


    private: System::Void textBoxLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        textBoxLogin->BorderColor = Color::White;
    }
    private: System::Void textBoxPassword_Click(System::Object^ sender, System::EventArgs^ e) {
        textBoxPassword->BorderColor = Color::White;
    }



    void setShadows() {
        if (Directory::Exists("logs")) {
            this->borderlessForm->HasFormShadow = false;
        }
        else if (File::Exists("config.xml")) {
            Config^ cfg = gcnew Config();
            cfg->LoadConfig();
            this->borderlessForm->HasFormShadow = cfg->hasFormShadow;
            cfg = nullptr;
        }

    }
};
}
