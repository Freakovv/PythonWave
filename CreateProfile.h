#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>
#include <vcclr.h>
#include <iostream>
#include <random>
#include <Windows.h>


namespace PythonWave {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	//Для отправки письма на почту
	using namespace System;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Net::Security;
	using namespace System::Text;

	/// <summary>
	/// Summary for CreateProfile
	/// </summary>
	public ref class CreateProfile : public System::Windows::Forms::Form
	{
	public:
		String^ Login;
		CreateProfile(String^ log)
		{
			Login = log;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fadetimer1 = gcnew System::Windows::Forms::Timer();
			fadetimer1->Interval = 10; // Set the interval (in milliseconds)
			fadetimer1->Tick += gcnew System::EventHandler(this, &CreateProfile::fadetimer_Tick);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ fadetimer1;
	private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
	private: Bunifu::UI::WinForms::BunifuLabel^ labelWelcome;
	private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator1;

	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonMinimize;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxMail;
	private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownSex;









	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxSecurityCode;




	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl1;
	private: Guna::UI2::WinForms::Guna2Button^ buttonValidateCode;
	private: Guna::UI2::WinForms::Guna2Button^ buttonSendCode;
	private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownYear;


	private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownMonth;

	private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownDay;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxName;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxSurname;

	private: Guna::UI2::WinForms::Guna2BorderlessForm^ guna2BorderlessForm1;
	private: System::Windows::Forms::Label^ labelSendStatus;
	private: System::Windows::Forms::Label^ labelValidateStatus;

	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageErrorSend;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageErrorValidate;



	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonExit;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogExit;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogQuestion;

	private: Guna::UI2::WinForms::Guna2CircleButton^ buttonQuestion;
	private: System::Windows::Forms::Label^ labelTimer;

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::LinkLabel^ linkReMail;
	private: System::Windows::Forms::PictureBox^ pictureBoxUploadImage;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: Guna::UI2::WinForms::Guna2Button^ buttonUploadImage;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogUpload;
	private: Bunifu::UI::WinForms::BunifuPages^ Pages;
	private: System::Windows::Forms::TabPage^ page1;
	private: System::Windows::Forms::TabPage^ page2;



	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;

	private: System::Windows::Forms::TabPage^ page3;
	private: System::Windows::Forms::Timer^ timerTransition;
	private: Guna::UI2::WinForms::Guna2CustomCheckBox^ guna2CustomCheckBox1;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel1;
	private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator3;
	private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator2;









































	protected:

	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateProfile::typeid));
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->labelWelcome = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->guna2Separator1 = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->textBoxMail = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuDropdownSex = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
			this->textBoxSecurityCode = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->page1 = (gcnew System::Windows::Forms::TabPage());
			this->guna2Separator3 = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->guna2Separator2 = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->ButtonExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->pictureBoxUploadImage = (gcnew System::Windows::Forms::PictureBox());
			this->buttonUploadImage = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->linkReMail = (gcnew System::Windows::Forms::LinkLabel());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->buttonSendCode = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->buttonQuestion = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
			this->buttonValidateCode = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->bunifuDropdownDay = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
			this->labelValidateStatus = (gcnew System::Windows::Forms::Label());
			this->bunifuDropdownMonth = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
			this->labelSendStatus = (gcnew System::Windows::Forms::Label());
			this->bunifuDropdownYear = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2BorderlessForm1 = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->MessageErrorSend = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageErrorValidate = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageDialogExit = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageDialogQuestion = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->MessageDialogUpload = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->Pages = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->page2 = (gcnew System::Windows::Forms::TabPage());
			this->bunifuLabel1 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->guna2CustomCheckBox1 = (gcnew Guna::UI2::WinForms::Guna2CustomCheckBox());
			this->page3 = (gcnew System::Windows::Forms::TabPage());
			this->timerTransition = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->BeginInit();
			this->page1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUploadImage))->BeginInit();
			this->Pages->SuspendLayout();
			this->page2->SuspendLayout();
			this->SuspendLayout();
			// 
			// borderlessForm
			// 
			this->borderlessForm->BorderRadius = 20;
			this->borderlessForm->ContainerControl = this;
			this->borderlessForm->DockIndicatorTransparencyValue = 0.6;
			this->borderlessForm->TransparentWhileDrag = true;
			// 
			// labelWelcome
			// 
			this->labelWelcome->AllowParentOverrides = false;
			this->labelWelcome->AutoEllipsis = true;
			this->labelWelcome->Cursor = System::Windows::Forms::Cursors::Default;
			this->labelWelcome->CursorType = System::Windows::Forms::Cursors::Default;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWelcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelWelcome->Location = System::Drawing::Point(395, 3);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelWelcome->Size = System::Drawing::Size(144, 45);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Профиль";
			this->labelWelcome->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->labelWelcome->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// guna2Separator1
			// 
			this->guna2Separator1->BackColor = System::Drawing::Color::Transparent;
			this->guna2Separator1->Location = System::Drawing::Point(-3, 39);
			this->guna2Separator1->Name = L"guna2Separator1";
			this->guna2Separator1->Size = System::Drawing::Size(943, 24);
			this->guna2Separator1->TabIndex = 1;
			this->guna2Separator1->UseTransparentBackground = true;
			// 
			// ButtonMinimize
			// 
			this->ButtonMinimize->BackColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->FillColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMinimize.Image")));
			this->ButtonMinimize->ImageRotate = 0;
			this->ButtonMinimize->Location = System::Drawing::Point(878, 6);
			this->ButtonMinimize->Name = L"ButtonMinimize";
			this->ButtonMinimize->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonMinimize->Size = System::Drawing::Size(20, 20);
			this->ButtonMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonMinimize->TabIndex = 2;
			this->ButtonMinimize->TabStop = false;
			this->ButtonMinimize->UseTransparentBackground = true;
			this->ButtonMinimize->Click += gcnew System::EventHandler(this, &CreateProfile::ButtonMinimize_Click);
			// 
			// textBoxMail
			// 
			this->textBoxMail->Animated = true;
			this->textBoxMail->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxMail->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxMail->AutoRoundedCorners = true;
			this->textBoxMail->BorderColor = System::Drawing::Color::Silver;
			this->textBoxMail->BorderRadius = 22;
			this->textBoxMail->BorderThickness = 2;
			this->textBoxMail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxMail->DefaultText = L"";
			this->textBoxMail->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxMail->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxMail->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxMail->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxMail->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxMail->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMail->ForeColor = System::Drawing::Color::Black;
			this->textBoxMail->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxMail->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxMail.IconLeft")));
			this->textBoxMail->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxMail->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxMail->Location = System::Drawing::Point(279, 165);
			this->textBoxMail->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxMail->Name = L"textBoxMail";
			this->textBoxMail->PasswordChar = '\0';
			this->textBoxMail->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxMail->PlaceholderText = L"example@gmail.com";
			this->textBoxMail->SelectedText = L"";
			this->textBoxMail->Size = System::Drawing::Size(315, 46);
			this->textBoxMail->TabIndex = 4;
			this->textBoxMail->TextOffset = System::Drawing::Point(2, 0);
			this->textBoxMail->Click += gcnew System::EventHandler(this, &CreateProfile::textBoxMail_Click);
			// 
			// bunifuDropdownSex
			// 
			this->bunifuDropdownSex->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownSex->BackgroundColor = System::Drawing::Color::White;
			this->bunifuDropdownSex->BorderColor = System::Drawing::Color::Silver;
			this->bunifuDropdownSex->BorderRadius = 13;
			this->bunifuDropdownSex->Color = System::Drawing::Color::Silver;
			this->bunifuDropdownSex->Direction = Bunifu::UI::WinForms::BunifuDropdown::Directions::Down;
			this->bunifuDropdownSex->DisabledBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownSex->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDropdownSex->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownSex->DisabledForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bunifuDropdownSex->DisabledIndicatorColor = System::Drawing::Color::DarkGray;
			this->bunifuDropdownSex->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->bunifuDropdownSex->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thick;
			this->bunifuDropdownSex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bunifuDropdownSex->DropDownTextAlign = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownSex->FillDropDown = true;
			this->bunifuDropdownSex->FillIndicator = false;
			this->bunifuDropdownSex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bunifuDropdownSex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F));
			this->bunifuDropdownSex->ForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownSex->FormattingEnabled = true;
			this->bunifuDropdownSex->Icon = nullptr;
			this->bunifuDropdownSex->IndicatorAlignment = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownSex->IndicatorColor = System::Drawing::Color::Gray;
			this->bunifuDropdownSex->IndicatorLocation = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownSex->ItemBackColor = System::Drawing::Color::White;
			this->bunifuDropdownSex->ItemBorderColor = System::Drawing::Color::White;
			this->bunifuDropdownSex->ItemForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownSex->ItemHeight = 26;
			this->bunifuDropdownSex->ItemHighLightColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownSex->ItemHighLightForeColor = System::Drawing::Color::White;
			this->bunifuDropdownSex->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Мужской", L"Женский", L"Не скажу" });
			this->bunifuDropdownSex->ItemTopMargin = 3;
			this->bunifuDropdownSex->Location = System::Drawing::Point(630, 276);
			this->bunifuDropdownSex->Name = L"bunifuDropdownSex";
			this->bunifuDropdownSex->Size = System::Drawing::Size(264, 32);
			this->bunifuDropdownSex->TabIndex = 9;
			this->bunifuDropdownSex->Text = L"Пол";
			this->bunifuDropdownSex->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownSex->TextLeftMargin = 4;
			// 
			// textBoxSecurityCode
			// 
			this->textBoxSecurityCode->Animated = true;
			this->textBoxSecurityCode->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxSecurityCode->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxSecurityCode->AutoRoundedCorners = true;
			this->textBoxSecurityCode->BorderColor = System::Drawing::Color::Silver;
			this->textBoxSecurityCode->BorderRadius = 22;
			this->textBoxSecurityCode->BorderThickness = 2;
			this->textBoxSecurityCode->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxSecurityCode->DefaultText = L"";
			this->textBoxSecurityCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->textBoxSecurityCode->DisabledState->FillColor = System::Drawing::Color::DarkGray;
			this->textBoxSecurityCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBoxSecurityCode->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxSecurityCode->Enabled = false;
			this->textBoxSecurityCode->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxSecurityCode->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxSecurityCode->ForeColor = System::Drawing::Color::Black;
			this->textBoxSecurityCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxSecurityCode->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxSecurityCode.IconLeft")));
			this->textBoxSecurityCode->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxSecurityCode->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxSecurityCode->Location = System::Drawing::Point(279, 266);
			this->textBoxSecurityCode->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxSecurityCode->Name = L"textBoxSecurityCode";
			this->textBoxSecurityCode->PasswordChar = '●';
			this->textBoxSecurityCode->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxSecurityCode->PlaceholderText = L"Код";
			this->textBoxSecurityCode->SelectedText = L"";
			this->textBoxSecurityCode->Size = System::Drawing::Size(315, 46);
			this->textBoxSecurityCode->TabIndex = 13;
			this->textBoxSecurityCode->UseSystemPasswordChar = true;
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this->page1;
			this->bunifuDragControl1->Vertical = true;
			// 
			// page1
			// 
			this->page1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->page1->Controls->Add(this->guna2Separator3);
			this->page1->Controls->Add(this->guna2Separator2);
			this->page1->Controls->Add(this->guna2Button1);
			this->page1->Controls->Add(this->ButtonExit);
			this->page1->Controls->Add(this->ButtonMinimize);
			this->page1->Controls->Add(this->pictureBoxUploadImage);
			this->page1->Controls->Add(this->buttonUploadImage);
			this->page1->Controls->Add(this->guna2Separator1);
			this->page1->Controls->Add(this->textBoxMail);
			this->page1->Controls->Add(this->labelWelcome);
			this->page1->Controls->Add(this->bunifuDropdownSex);
			this->page1->Controls->Add(this->linkReMail);
			this->page1->Controls->Add(this->textBoxSecurityCode);
			this->page1->Controls->Add(this->labelTimer);
			this->page1->Controls->Add(this->buttonSendCode);
			this->page1->Controls->Add(this->buttonQuestion);
			this->page1->Controls->Add(this->buttonValidateCode);
			this->page1->Controls->Add(this->bunifuDropdownDay);
			this->page1->Controls->Add(this->labelValidateStatus);
			this->page1->Controls->Add(this->bunifuDropdownMonth);
			this->page1->Controls->Add(this->labelSendStatus);
			this->page1->Controls->Add(this->bunifuDropdownYear);
			this->page1->Controls->Add(this->label3);
			this->page1->Controls->Add(this->label1);
			this->page1->Controls->Add(this->textBoxSurname);
			this->page1->Controls->Add(this->label2);
			this->page1->Controls->Add(this->textBoxName);
			this->page1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->page1->Location = System::Drawing::Point(4, 4);
			this->page1->Name = L"page1";
			this->page1->Padding = System::Windows::Forms::Padding(3);
			this->page1->Size = System::Drawing::Size(931, 681);
			this->page1->TabIndex = 0;
			this->page1->Text = L"profile";
			// 
			// guna2Separator3
			// 
			this->guna2Separator3->BackColor = System::Drawing::Color::Transparent;
			this->guna2Separator3->Location = System::Drawing::Point(630, 139);
			this->guna2Separator3->Name = L"guna2Separator3";
			this->guna2Separator3->Size = System::Drawing::Size(264, 24);
			this->guna2Separator3->TabIndex = 41;
			this->guna2Separator3->UseTransparentBackground = true;
			// 
			// guna2Separator2
			// 
			this->guna2Separator2->BackColor = System::Drawing::Color::Transparent;
			this->guna2Separator2->Location = System::Drawing::Point(279, 139);
			this->guna2Separator2->Name = L"guna2Separator2";
			this->guna2Separator2->Size = System::Drawing::Size(315, 24);
			this->guna2Separator2->TabIndex = 40;
			this->guna2Separator2->UseTransparentBackground = true;
			// 
			// guna2Button1
			// 
			this->guna2Button1->Animated = true;
			this->guna2Button1->BackColor = System::Drawing::Color::Transparent;
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
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.75F, System::Drawing::FontStyle::Bold));
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
			this->guna2Button1->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
			this->guna2Button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button1.Image")));
			this->guna2Button1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button1->ImageSize = System::Drawing::Size(25, 25);
			this->guna2Button1->Location = System::Drawing::Point(352, 539);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->Size = System::Drawing::Size(181, 39);
			this->guna2Button1->TabIndex = 39;
			this->guna2Button1->Text = L"Продолжить";
			this->guna2Button1->TextOffset = System::Drawing::Point(11, -1);
			this->guna2Button1->UseTransparentBackground = true;
			this->guna2Button1->Click += gcnew System::EventHandler(this, &CreateProfile::guna2Button1_Click);
			// 
			// ButtonExit
			// 
			this->ButtonExit->BackColor = System::Drawing::Color::Transparent;
			this->ButtonExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonExit.Image")));
			this->ButtonExit->ImageRotate = 0;
			this->ButtonExit->Location = System::Drawing::Point(904, 6);
			this->ButtonExit->Name = L"ButtonExit";
			this->ButtonExit->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonExit->Size = System::Drawing::Size(20, 20);
			this->ButtonExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonExit->TabIndex = 31;
			this->ButtonExit->TabStop = false;
			this->ButtonExit->Click += gcnew System::EventHandler(this, &CreateProfile::ButtonExit_Click);
			// 
			// pictureBoxUploadImage
			// 
			this->pictureBoxUploadImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->pictureBoxUploadImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxUploadImage.Image")));
			this->pictureBoxUploadImage->Location = System::Drawing::Point(18, 135);
			this->pictureBoxUploadImage->Name = L"pictureBoxUploadImage";
			this->pictureBoxUploadImage->Size = System::Drawing::Size(200, 200);
			this->pictureBoxUploadImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxUploadImage->TabIndex = 37;
			this->pictureBoxUploadImage->TabStop = false;
			// 
			// buttonUploadImage
			// 
			this->buttonUploadImage->Animated = true;
			this->buttonUploadImage->BackColor = System::Drawing::Color::Transparent;
			this->buttonUploadImage->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonUploadImage->BorderRadius = 20;
			this->buttonUploadImage->BorderThickness = 1;
			this->buttonUploadImage->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonUploadImage->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonUploadImage->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonUploadImage->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonUploadImage->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonUploadImage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.75F, System::Drawing::FontStyle::Bold));
			this->buttonUploadImage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonUploadImage->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonUploadImage->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonUploadImage->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonUploadImage->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonUploadImage->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
			this->buttonUploadImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonUploadImage.Image")));
			this->buttonUploadImage->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonUploadImage->ImageSize = System::Drawing::Size(25, 25);
			this->buttonUploadImage->Location = System::Drawing::Point(18, 349);
			this->buttonUploadImage->Name = L"buttonUploadImage";
			this->buttonUploadImage->Size = System::Drawing::Size(200, 39);
			this->buttonUploadImage->TabIndex = 38;
			this->buttonUploadImage->Text = L"Загрузить";
			this->buttonUploadImage->TextOffset = System::Drawing::Point(10, -2);
			this->buttonUploadImage->UseTransparentBackground = true;
			this->buttonUploadImage->Click += gcnew System::EventHandler(this, &CreateProfile::buttonUploadImage_Click);
			// 
			// linkReMail
			// 
			this->linkReMail->AutoSize = true;
			this->linkReMail->BackColor = System::Drawing::Color::Transparent;
			this->linkReMail->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkReMail->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkReMail->Location = System::Drawing::Point(279, 363);
			this->linkReMail->Name = L"linkReMail";
			this->linkReMail->Size = System::Drawing::Size(196, 25);
			this->linkReMail->TabIndex = 36;
			this->linkReMail->TabStop = true;
			this->linkReMail->Text = L"Отправить повторно";
			this->linkReMail->Visible = false;
			this->linkReMail->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CreateProfile::linkReMail_LinkClicked);
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelTimer->Location = System::Drawing::Point(280, 363);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(338, 25);
			this->labelTimer->TabIndex = 35;
			this->labelTimer->Text = L"Отправить повторно через ... секунд";
			this->labelTimer->Visible = false;
			// 
			// buttonSendCode
			// 
			this->buttonSendCode->Animated = true;
			this->buttonSendCode->BackColor = System::Drawing::Color::Transparent;
			this->buttonSendCode->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendCode->BorderRadius = 20;
			this->buttonSendCode->BorderThickness = 1;
			this->buttonSendCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonSendCode->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonSendCode->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonSendCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonSendCode->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendCode->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.75F, System::Drawing::FontStyle::Bold));
			this->buttonSendCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonSendCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendCode->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendCode->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonSendCode->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image2")));
			this->buttonSendCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSendCode.Image")));
			this->buttonSendCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonSendCode->ImageSize = System::Drawing::Size(25, 25);
			this->buttonSendCode->Location = System::Drawing::Point(279, 218);
			this->buttonSendCode->Name = L"buttonSendCode";
			this->buttonSendCode->Size = System::Drawing::Size(226, 39);
			this->buttonSendCode->TabIndex = 16;
			this->buttonSendCode->Text = L"Отправить письмо";
			this->buttonSendCode->TextOffset = System::Drawing::Point(14, 0);
			this->buttonSendCode->UseTransparentBackground = true;
			this->buttonSendCode->Click += gcnew System::EventHandler(this, &CreateProfile::buttonSendCode_Click);
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
			this->buttonQuestion->Location = System::Drawing::Point(548, 122);
			this->buttonQuestion->Name = L"buttonQuestion";
			this->buttonQuestion->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->buttonQuestion->Size = System::Drawing::Size(20, 20);
			this->buttonQuestion->TabIndex = 33;
			this->buttonQuestion->Text = L"guna2CircleButton1";
			this->buttonQuestion->UseTransparentBackground = true;
			this->buttonQuestion->Click += gcnew System::EventHandler(this, &CreateProfile::buttonQuestion_Click);
			// 
			// buttonValidateCode
			// 
			this->buttonValidateCode->Animated = true;
			this->buttonValidateCode->BackColor = System::Drawing::Color::Transparent;
			this->buttonValidateCode->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonValidateCode->BorderRadius = 20;
			this->buttonValidateCode->BorderThickness = 1;
			this->buttonValidateCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonValidateCode->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonValidateCode->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonValidateCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonValidateCode->Enabled = false;
			this->buttonValidateCode->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonValidateCode->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.75F, System::Drawing::FontStyle::Bold));
			this->buttonValidateCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonValidateCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonValidateCode->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonValidateCode->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonValidateCode->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonValidateCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image3")));
			this->buttonValidateCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonValidateCode.Image")));
			this->buttonValidateCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonValidateCode->ImageSize = System::Drawing::Size(25, 25);
			this->buttonValidateCode->Location = System::Drawing::Point(279, 319);
			this->buttonValidateCode->Name = L"buttonValidateCode";
			this->buttonValidateCode->Size = System::Drawing::Size(170, 39);
			this->buttonValidateCode->TabIndex = 17;
			this->buttonValidateCode->Text = L"Подтвердить";
			this->buttonValidateCode->TextOffset = System::Drawing::Point(14, -1);
			this->buttonValidateCode->UseTransparentBackground = true;
			this->buttonValidateCode->Click += gcnew System::EventHandler(this, &CreateProfile::buttonValidateCode_Click);
			// 
			// bunifuDropdownDay
			// 
			this->bunifuDropdownDay->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownDay->BackgroundColor = System::Drawing::Color::White;
			this->bunifuDropdownDay->BorderColor = System::Drawing::Color::Silver;
			this->bunifuDropdownDay->BorderRadius = 15;
			this->bunifuDropdownDay->Color = System::Drawing::Color::Silver;
			this->bunifuDropdownDay->Direction = Bunifu::UI::WinForms::BunifuDropdown::Directions::Down;
			this->bunifuDropdownDay->DisabledBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownDay->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDropdownDay->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownDay->DisabledForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bunifuDropdownDay->DisabledIndicatorColor = System::Drawing::Color::DarkGray;
			this->bunifuDropdownDay->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->bunifuDropdownDay->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thin;
			this->bunifuDropdownDay->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bunifuDropdownDay->DropDownTextAlign = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownDay->FillDropDown = true;
			this->bunifuDropdownDay->FillIndicator = false;
			this->bunifuDropdownDay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bunifuDropdownDay->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuDropdownDay->ForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownDay->FormattingEnabled = true;
			this->bunifuDropdownDay->Icon = nullptr;
			this->bunifuDropdownDay->IndicatorAlignment = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownDay->IndicatorColor = System::Drawing::Color::Gray;
			this->bunifuDropdownDay->IndicatorLocation = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownDay->ItemBackColor = System::Drawing::Color::White;
			this->bunifuDropdownDay->ItemBorderColor = System::Drawing::Color::White;
			this->bunifuDropdownDay->ItemForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownDay->ItemHeight = 26;
			this->bunifuDropdownDay->ItemHighLightColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownDay->ItemHighLightForeColor = System::Drawing::Color::White;
			this->bunifuDropdownDay->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->bunifuDropdownDay->ItemTopMargin = 3;
			this->bunifuDropdownDay->Location = System::Drawing::Point(633, 356);
			this->bunifuDropdownDay->Name = L"bunifuDropdownDay";
			this->bunifuDropdownDay->Size = System::Drawing::Size(79, 32);
			this->bunifuDropdownDay->TabIndex = 19;
			this->bunifuDropdownDay->Text = L"День";
			this->bunifuDropdownDay->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownDay->TextLeftMargin = 5;
			// 
			// labelValidateStatus
			// 
			this->labelValidateStatus->AutoSize = true;
			this->labelValidateStatus->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelValidateStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelValidateStatus->Location = System::Drawing::Point(455, 330);
			this->labelValidateStatus->Name = L"labelValidateStatus";
			this->labelValidateStatus->Size = System::Drawing::Size(69, 25);
			this->labelValidateStatus->TabIndex = 30;
			this->labelValidateStatus->Text = L"Статус";
			this->labelValidateStatus->Visible = false;
			// 
			// bunifuDropdownMonth
			// 
			this->bunifuDropdownMonth->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownMonth->BackgroundColor = System::Drawing::Color::White;
			this->bunifuDropdownMonth->BorderColor = System::Drawing::Color::Silver;
			this->bunifuDropdownMonth->BorderRadius = 15;
			this->bunifuDropdownMonth->Color = System::Drawing::Color::Silver;
			this->bunifuDropdownMonth->Direction = Bunifu::UI::WinForms::BunifuDropdown::Directions::Down;
			this->bunifuDropdownMonth->DisabledBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownMonth->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDropdownMonth->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownMonth->DisabledForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bunifuDropdownMonth->DisabledIndicatorColor = System::Drawing::Color::DarkGray;
			this->bunifuDropdownMonth->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->bunifuDropdownMonth->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thin;
			this->bunifuDropdownMonth->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bunifuDropdownMonth->DropDownTextAlign = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownMonth->FillDropDown = true;
			this->bunifuDropdownMonth->FillIndicator = false;
			this->bunifuDropdownMonth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bunifuDropdownMonth->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuDropdownMonth->ForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownMonth->FormattingEnabled = true;
			this->bunifuDropdownMonth->Icon = nullptr;
			this->bunifuDropdownMonth->IndicatorAlignment = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownMonth->IndicatorColor = System::Drawing::Color::Gray;
			this->bunifuDropdownMonth->IndicatorLocation = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownMonth->ItemBackColor = System::Drawing::Color::White;
			this->bunifuDropdownMonth->ItemBorderColor = System::Drawing::Color::White;
			this->bunifuDropdownMonth->ItemForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownMonth->ItemHeight = 26;
			this->bunifuDropdownMonth->ItemHighLightColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownMonth->ItemHighLightForeColor = System::Drawing::Color::White;
			this->bunifuDropdownMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Январь", L"Февраль", L"Март", L"Апрель",
					L"Май", L"Июнь", L"Июль", L"Август", L"Сентябрь", L"Октябрь", L"Ноябрь", L"Декабрь"
			});
			this->bunifuDropdownMonth->ItemTopMargin = 3;
			this->bunifuDropdownMonth->Location = System::Drawing::Point(718, 356);
			this->bunifuDropdownMonth->Name = L"bunifuDropdownMonth";
			this->bunifuDropdownMonth->Size = System::Drawing::Size(101, 32);
			this->bunifuDropdownMonth->TabIndex = 22;
			this->bunifuDropdownMonth->Text = L"Месяц";
			this->bunifuDropdownMonth->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownMonth->TextLeftMargin = 5;
			// 
			// labelSendStatus
			// 
			this->labelSendStatus->AutoSize = true;
			this->labelSendStatus->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSendStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelSendStatus->Location = System::Drawing::Point(511, 227);
			this->labelSendStatus->Name = L"labelSendStatus";
			this->labelSendStatus->Size = System::Drawing::Size(69, 25);
			this->labelSendStatus->TabIndex = 29;
			this->labelSendStatus->Text = L"Статус";
			this->labelSendStatus->Visible = false;
			// 
			// bunifuDropdownYear
			// 
			this->bunifuDropdownYear->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownYear->BackgroundColor = System::Drawing::Color::White;
			this->bunifuDropdownYear->BorderColor = System::Drawing::Color::Silver;
			this->bunifuDropdownYear->BorderRadius = 15;
			this->bunifuDropdownYear->Color = System::Drawing::Color::Silver;
			this->bunifuDropdownYear->Direction = Bunifu::UI::WinForms::BunifuDropdown::Directions::Down;
			this->bunifuDropdownYear->DisabledBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownYear->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDropdownYear->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdownYear->DisabledForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bunifuDropdownYear->DisabledIndicatorColor = System::Drawing::Color::DarkGray;
			this->bunifuDropdownYear->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->bunifuDropdownYear->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thin;
			this->bunifuDropdownYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bunifuDropdownYear->DropDownTextAlign = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownYear->FillDropDown = true;
			this->bunifuDropdownYear->FillIndicator = false;
			this->bunifuDropdownYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bunifuDropdownYear->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuDropdownYear->ForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownYear->FormattingEnabled = true;
			this->bunifuDropdownYear->Icon = nullptr;
			this->bunifuDropdownYear->IndicatorAlignment = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownYear->IndicatorColor = System::Drawing::Color::Gray;
			this->bunifuDropdownYear->IndicatorLocation = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdownYear->ItemBackColor = System::Drawing::Color::White;
			this->bunifuDropdownYear->ItemBorderColor = System::Drawing::Color::White;
			this->bunifuDropdownYear->ItemForeColor = System::Drawing::Color::Black;
			this->bunifuDropdownYear->ItemHeight = 26;
			this->bunifuDropdownYear->ItemHighLightColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownYear->ItemHighLightForeColor = System::Drawing::Color::White;
			this->bunifuDropdownYear->Items->AddRange(gcnew cli::array< System::Object^  >(44) {
				L"2024", L"2023", L"2021", L"2020", L"2019",
					L"2018", L"2017", L"2016", L"2015", L"2014", L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005",
					L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991",
					L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980"
			});
			this->bunifuDropdownYear->ItemTopMargin = 3;
			this->bunifuDropdownYear->Location = System::Drawing::Point(829, 356);
			this->bunifuDropdownYear->Name = L"bunifuDropdownYear";
			this->bunifuDropdownYear->Size = System::Drawing::Size(68, 32);
			this->bunifuDropdownYear->TabIndex = 23;
			this->bunifuDropdownYear->Text = L"Год";
			this->bunifuDropdownYear->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdownYear->TextLeftMargin = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(627, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 32);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Дата рождения";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(623, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 40);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Личные данные";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Animated = true;
			this->textBoxSurname->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxSurname->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxSurname->AutoRoundedCorners = true;
			this->textBoxSurname->BorderColor = System::Drawing::Color::Silver;
			this->textBoxSurname->BorderRadius = 22;
			this->textBoxSurname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxSurname->DefaultText = L"";
			this->textBoxSurname->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxSurname->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxSurname->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxSurname->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxSurname->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSurname->ForeColor = System::Drawing::Color::Black;
			this->textBoxSurname->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxSurname->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxSurname.IconLeft")));
			this->textBoxSurname->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxSurname->IconLeftSize = System::Drawing::Size(25, 25);
			this->textBoxSurname->IconRightSize = System::Drawing::Size(0, 0);
			this->textBoxSurname->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxSurname->Location = System::Drawing::Point(630, 218);
			this->textBoxSurname->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->PasswordChar = '\0';
			this->textBoxSurname->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxSurname->PlaceholderText = L"Фамилия";
			this->textBoxSurname->SelectedText = L"";
			this->textBoxSurname->Size = System::Drawing::Size(264, 46);
			this->textBoxSurname->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(272, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(285, 40);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Подтвердите e-mail";
			// 
			// textBoxName
			// 
			this->textBoxName->Animated = true;
			this->textBoxName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxName->AutoRoundedCorners = true;
			this->textBoxName->BorderColor = System::Drawing::Color::Silver;
			this->textBoxName->BorderRadius = 22;
			this->textBoxName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxName->DefaultText = L"";
			this->textBoxName->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxName->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxName->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxName->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxName->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->ForeColor = System::Drawing::Color::Black;
			this->textBoxName->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxName->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxName.IconLeft")));
			this->textBoxName->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxName->IconLeftSize = System::Drawing::Size(25, 25);
			this->textBoxName->IconRightSize = System::Drawing::Size(0, 0);
			this->textBoxName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxName->Location = System::Drawing::Point(630, 165);
			this->textBoxName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->PasswordChar = '\0';
			this->textBoxName->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxName->PlaceholderText = L"Имя*";
			this->textBoxName->SelectedText = L"";
			this->textBoxName->Size = System::Drawing::Size(264, 46);
			this->textBoxName->TabIndex = 26;
			// 
			// guna2BorderlessForm1
			// 
			this->guna2BorderlessForm1->BorderRadius = 20;
			this->guna2BorderlessForm1->ContainerControl = this;
			this->guna2BorderlessForm1->DockIndicatorTransparencyValue = 0.6;
			this->guna2BorderlessForm1->TransparentWhileDrag = true;
			// 
			// MessageErrorSend
			// 
			this->MessageErrorSend->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageErrorSend->Caption = L"Ошибка";
			this->MessageErrorSend->Icon = Guna::UI2::WinForms::MessageDialogIcon::Warning;
			this->MessageErrorSend->Parent = this;
			this->MessageErrorSend->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageErrorSend->Text = L"Введите корректный адрес эл. почты.";
			// 
			// MessageErrorValidate
			// 
			this->MessageErrorValidate->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageErrorValidate->Caption = L"Неверный код";
			this->MessageErrorValidate->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
			this->MessageErrorValidate->Parent = nullptr;
			this->MessageErrorValidate->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageErrorValidate->Text = L"";
			// 
			// MessageDialogExit
			// 
			this->MessageDialogExit->Buttons = Guna::UI2::WinForms::MessageDialogButtons::YesNo;
			this->MessageDialogExit->Caption = L"Вы действительно хотите выйти\?";
			this->MessageDialogExit->Icon = Guna::UI2::WinForms::MessageDialogIcon::Warning;
			this->MessageDialogExit->Parent = this;
			this->MessageDialogExit->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageDialogExit->Text = L"При выходе, ваш аккаунт будет удален...";
			// 
			// MessageDialogQuestion
			// 
			this->MessageDialogQuestion->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageDialogQuestion->Caption = L"Необходимая мера";
			this->MessageDialogQuestion->Icon = Guna::UI2::WinForms::MessageDialogIcon::Information;
			this->MessageDialogQuestion->Parent = this;
			this->MessageDialogQuestion->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageDialogQuestion->Text = L"Это может пригодится в будущем для восстановления вашего аккаунта.";
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &CreateProfile::timer_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MessageDialogUpload
			// 
			this->MessageDialogUpload->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageDialogUpload->Caption = L"Формат пути не поддерживается";
			this->MessageDialogUpload->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
			this->MessageDialogUpload->Parent = this;
			this->MessageDialogUpload->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageDialogUpload->Text = L"Поддерживаются только png и jpg фоматы";
			// 
			// Pages
			// 
			this->Pages->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->Pages->AllowTransitions = true;
			this->Pages->Controls->Add(this->page1);
			this->Pages->Controls->Add(this->page2);
			this->Pages->Controls->Add(this->page3);
			this->Pages->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Pages->Location = System::Drawing::Point(0, 0);
			this->Pages->Multiline = true;
			this->Pages->Name = L"Pages";
			this->Pages->Page = this->page1;
			this->Pages->PageIndex = 0;
			this->Pages->PageName = L"page1";
			this->Pages->PageTitle = L"profile";
			this->Pages->SelectedIndex = 0;
			this->Pages->Size = System::Drawing::Size(939, 707);
			this->Pages->TabIndex = 39;
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
			this->Pages->Transition = animation1;
			this->Pages->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
			// 
			// page2
			// 
			this->page2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->page2->Controls->Add(this->bunifuLabel1);
			this->page2->Controls->Add(this->guna2CustomCheckBox1);
			this->page2->Location = System::Drawing::Point(4, 4);
			this->page2->Name = L"page2";
			this->page2->Padding = System::Windows::Forms::Padding(3);
			this->page2->Size = System::Drawing::Size(931, 681);
			this->page2->TabIndex = 1;
			this->page2->Text = L"successful";
			// 
			// bunifuLabel1
			// 
			this->bunifuLabel1->AllowParentOverrides = false;
			this->bunifuLabel1->AutoEllipsis = true;
			this->bunifuLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel1->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->bunifuLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuLabel1->Location = System::Drawing::Point(259, 462);
			this->bunifuLabel1->Name = L"bunifuLabel1";
			this->bunifuLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel1->Size = System::Drawing::Size(372, 38);
			this->bunifuLabel1->TabIndex = 2;
			this->bunifuLabel1->Text = L"Регистрация завершена";
			this->bunifuLabel1->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->bunifuLabel1->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// guna2CustomCheckBox1
			// 
			this->guna2CustomCheckBox1->Animated = true;
			this->guna2CustomCheckBox1->BackColor = System::Drawing::Color::Transparent;
			this->guna2CustomCheckBox1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2CustomCheckBox1->CheckedState->BorderRadius = 20;
			this->guna2CustomCheckBox1->CheckedState->BorderThickness = 0;
			this->guna2CustomCheckBox1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2CustomCheckBox1->Location = System::Drawing::Point(295, 116);
			this->guna2CustomCheckBox1->Name = L"guna2CustomCheckBox1";
			this->guna2CustomCheckBox1->Size = System::Drawing::Size(340, 340);
			this->guna2CustomCheckBox1->TabIndex = 1;
			this->guna2CustomCheckBox1->Text = L"guna2CustomCheckBox1";
			this->guna2CustomCheckBox1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2CustomCheckBox1->UncheckedState->BorderRadius = 20;
			this->guna2CustomCheckBox1->UncheckedState->BorderThickness = 0;
			this->guna2CustomCheckBox1->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2CustomCheckBox1->UseTransparentBackground = true;
			// 
			// page3
			// 
			this->page3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->page3->Location = System::Drawing::Point(4, 4);
			this->page3->Name = L"page3";
			this->page3->Padding = System::Windows::Forms::Padding(3);
			this->page3->Size = System::Drawing::Size(931, 681);
			this->page3->TabIndex = 2;
			this->page3->Text = L"end";
			// 
			// timerTransition
			// 
			this->timerTransition->Interval = 1000;
			this->timerTransition->Tick += gcnew System::EventHandler(this, &CreateProfile::timerTransition_Tick);
			// 
			// CreateProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(940, 719);
			this->Controls->Add(this->Pages);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateProfile";
			this->Opacity = 0;
			this->Text = L"PythonWave: Профиль";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreateProfile::Create_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CreateProfile::CreateProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->EndInit();
			this->page1->ResumeLayout(false);
			this->page1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUploadImage))->EndInit();
			this->Pages->ResumeLayout(false);
			this->page2->ResumeLayout(false);
			this->page2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Установка таймера до следующей отправки письма
	private: int secondsLeft = 35;
		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									elements.h                                           //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: int generateSecurityCode();
	bool IsValidEmail(String^ email);
	private: int SecurityCode = generateSecurityCode(); 
	private: void SendEmail(String^ to, String^ subject, String^ body);
	private: Void buttonSendCode_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void buttonValidateCode_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void CreateProfile_Load(System::Object^ sender, System::EventArgs^ e);
	private: Void ButtonMinimize_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void buttonQuestion_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void textBoxMail_Click(System::Object^ sender, System::EventArgs^);
	private: Void timer_Tick(System::Object^ sender, System::EventArgs^ e);
	private: Void linkReMail_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: Void DeleteDirectory(String^ folderPath);

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	



		   ////////////////////////////////////////////////////////////////////////////////////////////
		   //									animations.h                                           //
		   ////////////////////////////////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	public: virtual void WndProc(System::Windows::Forms::Message% msg) override;
	private: Void fadetimer_Tick(System::Object^ sender, System::EventArgs^ e);
	private: Void Create_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//int y_Start_Location = 560;
	//int x_Start_Location = 194;
	//int x_Start_Size = 200;
	////194; 560
	//private: Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//	if (guna2TextBox1->Location != Point(169, 540)) {
	//		y_Start_Location -= 1;
	//		x_Start_Location -= 1;
	//		guna2TextBox1->Location = Point(x_Start_Location, y_Start_Location);
	//	}
	//	if (guna2TextBox1->Size != Drawing::Size(250, 30)) {
	//		x_Start_Size += 1;
	//		guna2TextBox1->Size = Drawing::Size(x_Start_Size, 30);
	//	}
	//}
private: Void buttonUploadImage_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Настройка OpenFileDialog
		openFileDialog1->Filter = "Image Files (*.jpg;*.png)|*.jpg;*.png";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		// Показываем диалог выбора файла
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Получаем путь к выбранному файлу
			System::String^ filePath = openFileDialog1->FileName;

			// Создаем объект Image из выбранного файла
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(filePath);

			// Устанавливаем изображение в pictureBoxUploadImage
			pictureBoxUploadImage->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBoxUploadImage->Image = image;

			// Определяем формат загруженного изображения
			System::Drawing::Imaging::ImageFormat^ imageFormat = image->RawFormat;

			// Путь, по которому сохранить изображение
			System::String^ savePath = "Resource\\user\\avatar";

			// Сохраняем изображение, указывая явно формат
			if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Jpeg)) {
				savePath += ".jpg";
				image->Save(savePath, System::Drawing::Imaging::ImageFormat::Jpeg);
			}
			else if (imageFormat->Equals(System::Drawing::Imaging::ImageFormat::Png)) {
				savePath += ".png";
				image->Save(savePath, System::Drawing::Imaging::ImageFormat::Png);
			}
			//// Сохраняем изображение
			//pictureBoxUploadImage->Image->Save(savePath, imageFormat);
		}
	}
	catch (Exception^ ex) {
		MessageDialogUpload->Show(ex->Message);
	}
}
	private: Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pages->SelectTab(page2);
		timerTransition->Start();
	}
		   int sec = 3;
	private: Void timerTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		sec -= 1;
		guna2CustomCheckBox1->Checked = true;
		if (sec == 0) {
			Pages->SelectTab(page3);
			timerTransition->Stop();
		}
	}
};
}
