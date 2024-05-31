#pragma once

#include "config.h"
#include "ClassFade.h"

namespace PythonWave {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class mainForm : public Form
	{
	public:
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageInfo;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageWarning;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;
	private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageQuestion;
	private: Bunifu::UI::WinForms::BunifuPages^ Book;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
		
	String^ User;
	String^ UserEmail;
	String^ UserBirth;
	String^ UserSex;
	String^ UserName;
	private: Guna::UI2::WinForms::Guna2Button^ btnPyRun;


	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panelProfileData;
	private: System::Windows::Forms::Label^ lblLogin;

	private: System::Windows::Forms::Label^ lblProfileRank;
	private: System::Windows::Forms::Label^ lblEmail;


	private: System::Windows::Forms::Label^ lblRegDate;

	private: System::Windows::Forms::Label^ lblBirth;

	private: System::Windows::Forms::Label^ lblSex;

	private: System::Windows::Forms::Label^ lblSurname;

	private: System::Windows::Forms::Label^ lblName;
	private: Guna::UI2::WinForms::Guna2Button^ btnProfileEdit;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TabPage^ pageProfileEdit;

	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: Guna::UI2::WinForms::Guna2Button^ btnProfileSave;











	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartProductivity;
	private: System::Windows::Forms::Label^ lblNameEdit;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserName;
	private: System::Windows::Forms::Label^ lblSurnameEdit;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserSurname;
	private: System::Windows::Forms::Label^ labelTimer;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckCode;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckMail;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxEmail;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxCode;
	private: Guna::UI2::WinForms::Guna2Button^ buttonSendMail;
	private: Guna::UI2::WinForms::Guna2Button^ buttonCheckCode;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureProfile;
	private: System::Windows::Forms::PictureBox^ pictureProfileEdit;




	private: System::Windows::Forms::Label^ lblBirthEdit;

	private: System::Windows::Forms::LinkLabel^ linkReMail;
	private: System::Windows::Forms::Label^ lblLoginEdit;
	private: System::Windows::Forms::PictureBox^ pictureUserBar;
	private: System::Windows::Forms::Timer^ timerReMail;


	private: System::Windows::Forms::Label^ lblSexEdit;
	private: System::Windows::Forms::LinkLabel^ linkREMOVEACC;
	private: Guna::UI2::WinForms::Guna2Button^ btnCancelChanges;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxCodeNew;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassNew2;

	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassNew;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassOld;


	private: Guna::UI2::WinForms::Guna2Button^ btnChangePassword;
private: System::Windows::Forms::WebBrowser^ webBrowser1;








		String^ UserSurname;

	public:
		mainForm(String^ Login)
		{
			User = Login;
			InitializeComponent();
			this->Load += gcnew EventHandler(this, &mainForm::main_Load);
			srand(static_cast<unsigned int>(time(NULL)));
		}

		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MessageBox::Show("Ошибка загрузки пользователя");
			Application::Exit();
		}

	protected:
		~mainForm()
		{
			if (components)
			{
				Application::Exit();
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Panel^ panelMenu;
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
	private: Guna::UI2::WinForms::Guna2DragControl^ dragMain;
	private: System::Windows::Forms::Panel^ panelUserBar;

	private: System::Windows::Forms::Label^ labelRankBar;

	private: System::Windows::Forms::Label^ labelNameBar;
	private: Guna::UI2::WinForms::Guna2RatingStar^ StarsUser;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation2 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->separatorMain = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->panelUserBar = (gcnew System::Windows::Forms::Panel());
			this->StarsUser = (gcnew Guna::UI2::WinForms::Guna2RatingStar());
			this->labelRankBar = (gcnew System::Windows::Forms::Label());
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
			this->pageBook = (gcnew System::Windows::Forms::TabPage());
			this->Book = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pageCourses = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPyRun = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pageProfile = (gcnew System::Windows::Forms::TabPage());
			this->panelProfileData = (gcnew System::Windows::Forms::Panel());
			this->btnProfileEdit = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->lblProfileRank = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblRegDate = (gcnew System::Windows::Forms::Label());
			this->lblBirth = (gcnew System::Windows::Forms::Label());
			this->lblSex = (gcnew System::Windows::Forms::Label());
			this->lblSurname = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->pictureProfile = (gcnew System::Windows::Forms::PictureBox());
			this->pageStats = (gcnew System::Windows::Forms::TabPage());
			this->chartProductivity = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pageSettings = (gcnew System::Windows::Forms::TabPage());
			this->pageGoodbye = (gcnew System::Windows::Forms::TabPage());
			this->pageProfileEdit = (gcnew System::Windows::Forms::TabPage());
			this->btnChangePassword = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->textBoxPassNew2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxPassNew = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxPassOld = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCodeNew = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->btnCancelChanges = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->linkREMOVEACC = (gcnew System::Windows::Forms::LinkLabel());
			this->lblSexEdit = (gcnew System::Windows::Forms::Label());
			this->lblLoginEdit = (gcnew System::Windows::Forms::Label());
			this->lblBirthEdit = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCheckCode = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->pictureBoxCheckMail = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->textBoxEmail = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxCode = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->buttonSendMail = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->buttonCheckCode = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->lblSurnameEdit = (gcnew System::Windows::Forms::Label());
			this->textBoxUserSurname = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->textBoxUserName = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->lblNameEdit = (gcnew System::Windows::Forms::Label());
			this->btnProfileSave = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->pictureProfileEdit = (gcnew System::Windows::Forms::PictureBox());
			this->linkReMail = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dragMain = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->MessageInfo = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageWarning = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageQuestion = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timerReMail = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelMain->SuspendLayout();
			this->panelUserBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUserBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->Pages->SuspendLayout();
			this->pageBook->SuspendLayout();
			this->Book->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->pageCourses->SuspendLayout();
			this->pageProfile->SuspendLayout();
			this->panelProfileData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfile))->BeginInit();
			this->pageStats->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartProductivity))->BeginInit();
			this->pageProfileEdit->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfileEdit))->BeginInit();
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
			this->panelUserBar->Controls->Add(this->StarsUser);
			this->panelUserBar->Controls->Add(this->labelRankBar);
			this->panelUserBar->Controls->Add(this->labelNameBar);
			this->panelUserBar->Controls->Add(this->pictureUserBar);
			this->panelUserBar->Location = System::Drawing::Point(1129, 0);
			this->panelUserBar->Name = L"panelUserBar";
			this->panelUserBar->Size = System::Drawing::Size(407, 80);
			this->panelUserBar->TabIndex = 34;
			this->panelUserBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// StarsUser
			// 
			this->StarsUser->Cursor = System::Windows::Forms::Cursors::Help;
			this->StarsUser->Location = System::Drawing::Point(193, 9);
			this->StarsUser->Name = L"StarsUser";
			this->StarsUser->RatingColor = System::Drawing::Color::White;
			this->StarsUser->ReadOnly = true;
			this->StarsUser->Size = System::Drawing::Size(82, 24);
			this->StarsUser->TabIndex = 3;
			this->StarsUser->Click += gcnew System::EventHandler(this, &mainForm::ratingUser_Click);
			// 
			// labelRankBar
			// 
			this->labelRankBar->AutoSize = true;
			this->labelRankBar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRankBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelRankBar->Location = System::Drawing::Point(96, 42);
			this->labelRankBar->Name = L"labelRankBar";
			this->labelRankBar->Size = System::Drawing::Size(96, 24);
			this->labelRankBar->TabIndex = 2;
			this->labelRankBar->Text = L"Новичок";
			this->labelRankBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
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
			this->labelNameBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// pictureUserBar
			// 
			this->pictureUserBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->pictureUserBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureUserBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureUserBar.Image")));
			this->pictureUserBar->Location = System::Drawing::Point(25, 15);
			this->pictureUserBar->Name = L"pictureUserBar";
			this->pictureUserBar->Size = System::Drawing::Size(50, 50);
			this->pictureUserBar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureUserBar->TabIndex = 44;
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
			this->Pages->Controls->Add(this->pageProfileEdit);
			this->Pages->Location = System::Drawing::Point(80, 79);
			this->Pages->Multiline = true;
			this->Pages->Name = L"Pages";
			this->Pages->Page = this->pageBook;
			this->Pages->PageIndex = 1;
			this->Pages->PageName = L"pageBook";
			this->Pages->PageTitle = L"pageBook";
			this->Pages->SelectedIndex = 0;
			this->Pages->Size = System::Drawing::Size(1520, 821);
			this->Pages->TabIndex = 2;
			animation2->AnimateOnlyDifferences = true;
			animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
			animation2->LeafCoeff = 0;
			animation2->MaxTime = 1;
			animation2->MinTime = 0;
			animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
			animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
			animation2->MosaicSize = 0;
			animation2->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
			animation2->RotateCoeff = 0;
			animation2->RotateLimit = 0;
			animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
			animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
			animation2->TimeCoeff = 0;
			animation2->TransparencyCoeff = 1;
			this->Pages->Transition = animation2;
			this->Pages->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
			// 
			// pageHome
			// 
			this->pageHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageHome->Location = System::Drawing::Point(4, 4);
			this->pageHome->Name = L"pageHome";
			this->pageHome->Padding = System::Windows::Forms::Padding(3);
			this->pageHome->Size = System::Drawing::Size(1512, 795);
			this->pageHome->TabIndex = 0;
			this->pageHome->Text = L"pageHome";
			// 
			// pageBook
			// 
			this->pageBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageBook->Controls->Add(this->Book);
			this->pageBook->Location = System::Drawing::Point(4, 4);
			this->pageBook->Name = L"pageBook";
			this->pageBook->Padding = System::Windows::Forms::Padding(3);
			this->pageBook->Size = System::Drawing::Size(1512, 795);
			this->pageBook->TabIndex = 1;
			this->pageBook->Text = L"pageBook";
			// 
			// Book
			// 
			this->Book->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->Book->AllowTransitions = true;
			this->Book->Controls->Add(this->tabPage1);
			this->Book->Controls->Add(this->tabPage2);
			this->Book->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Book->Location = System::Drawing::Point(-5, -4);
			this->Book->Multiline = true;
			this->Book->Name = L"Book";
			this->Book->Page = this->tabPage1;
			this->Book->PageIndex = 0;
			this->Book->PageName = L"tabPage1";
			this->Book->PageTitle = L"tabPage1";
			this->Book->SelectedIndex = 0;
			this->Book->Size = System::Drawing::Size(1521, 809);
			this->Book->TabIndex = 0;
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
			this->Book->Transition = animation1;
			this->Book->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->tabPage1->Controls->Add(this->webBrowser1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1513, 783);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1513, 783);
			this->webBrowser1->TabIndex = 9;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1493, 766);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// pageCourses
			// 
			this->pageCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageCourses->Controls->Add(this->label1);
			this->pageCourses->Controls->Add(this->btnPyRun);
			this->pageCourses->Controls->Add(this->richTextBox2);
			this->pageCourses->Controls->Add(this->richTextBox1);
			this->pageCourses->Location = System::Drawing::Point(4, 4);
			this->pageCourses->Name = L"pageCourses";
			this->pageCourses->Size = System::Drawing::Size(1512, 795);
			this->pageCourses->TabIndex = 2;
			this->pageCourses->Text = L"pageCourses";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(786, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(666, 120);
			this->label1->TabIndex = 3;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// btnPyRun
			// 
			this->btnPyRun->Animated = true;
			this->btnPyRun->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnPyRun->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnPyRun->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnPyRun->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnPyRun->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btnPyRun->ForeColor = System::Drawing::Color::White;
			this->btnPyRun->Location = System::Drawing::Point(3, 590);
			this->btnPyRun->Name = L"btnPyRun";
			this->btnPyRun->Size = System::Drawing::Size(701, 45);
			this->btnPyRun->TabIndex = 2;
			this->btnPyRun->Text = L"Run";
			this->btnPyRun->Click += gcnew System::EventHandler(this, &mainForm::btnPyRun_click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(0, 641);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1516, 154);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(701, 580);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// pageProfile
			// 
			this->pageProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageProfile->Controls->Add(this->panelProfileData);
			this->pageProfile->Controls->Add(this->pictureProfile);
			this->pageProfile->Location = System::Drawing::Point(4, 4);
			this->pageProfile->Name = L"pageProfile";
			this->pageProfile->Size = System::Drawing::Size(1512, 795);
			this->pageProfile->TabIndex = 3;
			this->pageProfile->Text = L"pageProfile";
			// 
			// panelProfileData
			// 
			this->panelProfileData->Controls->Add(this->btnProfileEdit);
			this->panelProfileData->Controls->Add(this->lblProfileRank);
			this->panelProfileData->Controls->Add(this->lblEmail);
			this->panelProfileData->Controls->Add(this->lblRegDate);
			this->panelProfileData->Controls->Add(this->lblBirth);
			this->panelProfileData->Controls->Add(this->lblSex);
			this->panelProfileData->Controls->Add(this->lblSurname);
			this->panelProfileData->Controls->Add(this->lblName);
			this->panelProfileData->Controls->Add(this->lblLogin);
			this->panelProfileData->Location = System::Drawing::Point(343, 3);
			this->panelProfileData->Name = L"panelProfileData";
			this->panelProfileData->Size = System::Drawing::Size(1166, 789);
			this->panelProfileData->TabIndex = 41;
			// 
			// btnProfileEdit
			// 
			this->btnProfileEdit->Animated = true;
			this->btnProfileEdit->BackColor = System::Drawing::Color::Transparent;
			this->btnProfileEdit->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileEdit->BorderRadius = 20;
			this->btnProfileEdit->BorderThickness = 1;
			this->btnProfileEdit->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnProfileEdit->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnProfileEdit->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnProfileEdit->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnProfileEdit->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnProfileEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnProfileEdit->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileEdit->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileEdit->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnProfileEdit->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileEdit->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image8")));
			this->btnProfileEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProfileEdit.Image")));
			this->btnProfileEdit->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnProfileEdit->Location = System::Drawing::Point(966, 747);
			this->btnProfileEdit->Name = L"btnProfileEdit";
			this->btnProfileEdit->Size = System::Drawing::Size(195, 39);
			this->btnProfileEdit->TabIndex = 48;
			this->btnProfileEdit->Text = L"Редактировать";
			this->btnProfileEdit->TextOffset = System::Drawing::Point(10, 0);
			this->btnProfileEdit->UseTransparentBackground = true;
			this->btnProfileEdit->Click += gcnew System::EventHandler(this, &mainForm::buttonResume_Click);
			// 
			// lblProfileRank
			// 
			this->lblProfileRank->AutoSize = true;
			this->lblProfileRank->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblProfileRank->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblProfileRank->Location = System::Drawing::Point(3, 392);
			this->lblProfileRank->Name = L"lblProfileRank";
			this->lblProfileRank->Size = System::Drawing::Size(256, 42);
			this->lblProfileRank->TabIndex = 47;
			this->lblProfileRank->Text = L"Ваш уровень:";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblEmail->Location = System::Drawing::Point(3, 334);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(137, 42);
			this->lblEmail->TabIndex = 46;
			this->lblEmail->Text = L"E-mail: ";
			// 
			// lblRegDate
			// 
			this->lblRegDate->AutoSize = true;
			this->lblRegDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRegDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblRegDate->Location = System::Drawing::Point(3, 281);
			this->lblRegDate->Name = L"lblRegDate";
			this->lblRegDate->Size = System::Drawing::Size(367, 42);
			this->lblRegDate->TabIndex = 45;
			this->lblRegDate->Text = L"Дата регистрации: ";
			// 
			// lblBirth
			// 
			this->lblBirth->AutoSize = true;
			this->lblBirth->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBirth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblBirth->Location = System::Drawing::Point(3, 229);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->Size = System::Drawing::Size(311, 42);
			this->lblBirth->TabIndex = 44;
			this->lblBirth->Text = L"Дата рождения: ";
			// 
			// lblSex
			// 
			this->lblSex->AutoSize = true;
			this->lblSex->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSex->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSex->Location = System::Drawing::Point(3, 178);
			this->lblSex->Name = L"lblSex";
			this->lblSex->Size = System::Drawing::Size(103, 42);
			this->lblSex->TabIndex = 43;
			this->lblSex->Text = L"Пол: ";
			// 
			// lblSurname
			// 
			this->lblSurname->AutoSize = true;
			this->lblSurname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSurname->Location = System::Drawing::Point(3, 125);
			this->lblSurname->Name = L"lblSurname";
			this->lblSurname->Size = System::Drawing::Size(191, 42);
			this->lblSurname->TabIndex = 42;
			this->lblSurname->Text = L"Фамилия:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblName->Location = System::Drawing::Point(3, 74);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(110, 42);
			this->lblName->TabIndex = 41;
			this->lblName->Text = L"Имя: ";
			// 
			// lblLogin
			// 
			this->lblLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblLogin->Location = System::Drawing::Point(508, 11);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(111, 42);
			this->lblLogin->TabIndex = 40;
			this->lblLogin->Text = L"Freak";
			// 
			// pictureProfile
			// 
			this->pictureProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->pictureProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureProfile.Image")));
			this->pictureProfile->Location = System::Drawing::Point(21, 26);
			this->pictureProfile->Name = L"pictureProfile";
			this->pictureProfile->Size = System::Drawing::Size(300, 300);
			this->pictureProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureProfile->TabIndex = 43;
			this->pictureProfile->TabStop = false;
			// 
			// pageStats
			// 
			this->pageStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageStats->Controls->Add(this->chartProductivity);
			this->pageStats->Location = System::Drawing::Point(4, 4);
			this->pageStats->Name = L"pageStats";
			this->pageStats->Size = System::Drawing::Size(1512, 795);
			this->pageStats->TabIndex = 4;
			this->pageStats->Text = L"pageStats";
			// 
			// chartProductivity
			// 
			this->chartProductivity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->chartProductivity->BorderlineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->chartProductivity->BorderSkin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->chartProductivity->BorderSkin->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->chartProductivity->BorderSkin->PageColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->chartProductivity->BorderSkin->SkinStyle = System::Windows::Forms::DataVisualization::Charting::BorderSkinStyle::FrameTitle8;
			chartArea1->AxisY->MajorGrid->Enabled = false;
			chartArea1->BorderColor = System::Drawing::Color::Empty;
			chartArea1->Name = L"ChartArea1";
			this->chartProductivity->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->HeaderSeparatorColor = System::Drawing::Color::White;
			legend1->InterlacedRowsColor = System::Drawing::Color::White;
			legend1->ItemColumnSeparatorColor = System::Drawing::Color::White;
			legend1->Name = L"Legend1";
			legend1->ShadowOffset = 5;
			legend1->TextWrapThreshold = 15;
			legend1->TitleBackColor = System::Drawing::Color::White;
			legend1->TitleForeColor = System::Drawing::Color::White;
			legend1->TitleSeparatorColor = System::Drawing::Color::White;
			this->chartProductivity->Legends->Add(legend1);
			this->chartProductivity->Location = System::Drawing::Point(53, 27);
			this->chartProductivity->Name = L"chartProductivity";
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Cross;
			series1->BorderWidth = 15;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ShadowColor = System::Drawing::Color::Gray;
			series1->ShadowOffset = 5;
			series1->XAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chartProductivity->Series->Add(series1);
			this->chartProductivity->Size = System::Drawing::Size(608, 694);
			this->chartProductivity->TabIndex = 0;
			this->chartProductivity->Text = L"chartProductivity";
			// 
			// pageSettings
			// 
			this->pageSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageSettings->Location = System::Drawing::Point(4, 4);
			this->pageSettings->Name = L"pageSettings";
			this->pageSettings->Size = System::Drawing::Size(1512, 795);
			this->pageSettings->TabIndex = 5;
			this->pageSettings->Text = L"pageSettings";
			// 
			// pageGoodbye
			// 
			this->pageGoodbye->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageGoodbye->Location = System::Drawing::Point(4, 4);
			this->pageGoodbye->Name = L"pageGoodbye";
			this->pageGoodbye->Size = System::Drawing::Size(1512, 795);
			this->pageGoodbye->TabIndex = 6;
			this->pageGoodbye->Text = L"pageGoodbye";
			// 
			// pageProfileEdit
			// 
			this->pageProfileEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageProfileEdit->Controls->Add(this->btnChangePassword);
			this->pageProfileEdit->Controls->Add(this->textBoxPassNew2);
			this->pageProfileEdit->Controls->Add(this->textBoxPassNew);
			this->pageProfileEdit->Controls->Add(this->textBoxPassOld);
			this->pageProfileEdit->Controls->Add(this->label3);
			this->pageProfileEdit->Controls->Add(this->textBoxCodeNew);
			this->pageProfileEdit->Controls->Add(this->btnCancelChanges);
			this->pageProfileEdit->Controls->Add(this->linkREMOVEACC);
			this->pageProfileEdit->Controls->Add(this->lblSexEdit);
			this->pageProfileEdit->Controls->Add(this->lblLoginEdit);
			this->pageProfileEdit->Controls->Add(this->lblBirthEdit);
			this->pageProfileEdit->Controls->Add(this->label4);
			this->pageProfileEdit->Controls->Add(this->labelTimer);
			this->pageProfileEdit->Controls->Add(this->pictureBoxCheckCode);
			this->pageProfileEdit->Controls->Add(this->pictureBoxCheckMail);
			this->pageProfileEdit->Controls->Add(this->textBoxEmail);
			this->pageProfileEdit->Controls->Add(this->textBoxCode);
			this->pageProfileEdit->Controls->Add(this->buttonSendMail);
			this->pageProfileEdit->Controls->Add(this->buttonCheckCode);
			this->pageProfileEdit->Controls->Add(this->lblSurnameEdit);
			this->pageProfileEdit->Controls->Add(this->textBoxUserSurname);
			this->pageProfileEdit->Controls->Add(this->textBoxUserName);
			this->pageProfileEdit->Controls->Add(this->lblNameEdit);
			this->pageProfileEdit->Controls->Add(this->btnProfileSave);
			this->pageProfileEdit->Controls->Add(this->guna2Button2);
			this->pageProfileEdit->Controls->Add(this->pictureProfileEdit);
			this->pageProfileEdit->Controls->Add(this->linkReMail);
			this->pageProfileEdit->Controls->Add(this->label2);
			this->pageProfileEdit->Location = System::Drawing::Point(4, 4);
			this->pageProfileEdit->Name = L"pageProfileEdit";
			this->pageProfileEdit->Size = System::Drawing::Size(1512, 795);
			this->pageProfileEdit->TabIndex = 7;
			this->pageProfileEdit->Text = L"pageProfileEdit";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->Animated = true;
			this->btnChangePassword->BackColor = System::Drawing::Color::Transparent;
			this->btnChangePassword->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnChangePassword->BorderRadius = 20;
			this->btnChangePassword->BorderThickness = 1;
			this->btnChangePassword->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnChangePassword->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnChangePassword->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnChangePassword->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnChangePassword->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnChangePassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnChangePassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnChangePassword->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnChangePassword->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnChangePassword->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnChangePassword->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnChangePassword->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image9")));
			this->btnChangePassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnChangePassword.Image")));
			this->btnChangePassword->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnChangePassword->Location = System::Drawing::Point(842, 555);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(165, 39);
			this->btnChangePassword->TabIndex = 77;
			this->btnChangePassword->Text = L"Изменить";
			this->btnChangePassword->TextOffset = System::Drawing::Point(10, 0);
			this->btnChangePassword->UseTransparentBackground = true;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &mainForm::btnChangePassword_Click);
			// 
			// textBoxPassNew2
			// 
			this->textBoxPassNew2->Animated = true;
			this->textBoxPassNew2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPassNew2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPassNew2->AutoRoundedCorners = true;
			this->textBoxPassNew2->BorderColor = System::Drawing::Color::Silver;
			this->textBoxPassNew2->BorderRadius = 22;
			this->textBoxPassNew2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPassNew2->DefaultText = L"";
			this->textBoxPassNew2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPassNew2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPassNew2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassNew2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassNew2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassNew2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPassNew2->ForeColor = System::Drawing::Color::Black;
			this->textBoxPassNew2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassNew2->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassNew2.IconLeft")));
			this->textBoxPassNew2->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPassNew2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPassNew2->Location = System::Drawing::Point(794, 498);
			this->textBoxPassNew2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPassNew2->MaxLength = 32;
			this->textBoxPassNew2->Name = L"textBoxPassNew2";
			this->textBoxPassNew2->PasswordChar = '●';
			this->textBoxPassNew2->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassNew2->PlaceholderText = L"Повтор пароля";
			this->textBoxPassNew2->SelectedText = L"";
			this->textBoxPassNew2->Size = System::Drawing::Size(262, 46);
			this->textBoxPassNew2->TabIndex = 76;
			this->textBoxPassNew2->TextOffset = System::Drawing::Point(-2, 0);
			this->textBoxPassNew2->UseSystemPasswordChar = true;
			// 
			// textBoxPassNew
			// 
			this->textBoxPassNew->Animated = true;
			this->textBoxPassNew->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPassNew->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPassNew->AutoRoundedCorners = true;
			this->textBoxPassNew->BorderColor = System::Drawing::Color::Silver;
			this->textBoxPassNew->BorderRadius = 22;
			this->textBoxPassNew->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPassNew->DefaultText = L"";
			this->textBoxPassNew->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPassNew->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPassNew->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassNew->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassNew->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassNew->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPassNew->ForeColor = System::Drawing::Color::Black;
			this->textBoxPassNew->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassNew->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassNew.IconLeft")));
			this->textBoxPassNew->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPassNew->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPassNew->Location = System::Drawing::Point(794, 444);
			this->textBoxPassNew->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPassNew->MaxLength = 32;
			this->textBoxPassNew->Name = L"textBoxPassNew";
			this->textBoxPassNew->PasswordChar = '●';
			this->textBoxPassNew->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassNew->PlaceholderText = L"Новый пароль";
			this->textBoxPassNew->SelectedText = L"";
			this->textBoxPassNew->Size = System::Drawing::Size(262, 46);
			this->textBoxPassNew->TabIndex = 75;
			this->textBoxPassNew->TextOffset = System::Drawing::Point(-2, 0);
			this->textBoxPassNew->UseSystemPasswordChar = true;
			// 
			// textBoxPassOld
			// 
			this->textBoxPassOld->Animated = true;
			this->textBoxPassOld->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxPassOld->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxPassOld->AutoRoundedCorners = true;
			this->textBoxPassOld->BorderColor = System::Drawing::Color::Silver;
			this->textBoxPassOld->BorderRadius = 22;
			this->textBoxPassOld->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxPassOld->DefaultText = L"";
			this->textBoxPassOld->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxPassOld->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxPassOld->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassOld->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxPassOld->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassOld->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxPassOld->ForeColor = System::Drawing::Color::Black;
			this->textBoxPassOld->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxPassOld->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxPassOld.IconLeft")));
			this->textBoxPassOld->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxPassOld->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxPassOld->Location = System::Drawing::Point(794, 391);
			this->textBoxPassOld->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxPassOld->MaxLength = 32;
			this->textBoxPassOld->Name = L"textBoxPassOld";
			this->textBoxPassOld->PasswordChar = '●';
			this->textBoxPassOld->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassOld->PlaceholderText = L"Старый пароль";
			this->textBoxPassOld->SelectedText = L"";
			this->textBoxPassOld->Size = System::Drawing::Size(262, 46);
			this->textBoxPassOld->TabIndex = 74;
			this->textBoxPassOld->TextOffset = System::Drawing::Point(-2, 0);
			this->textBoxPassOld->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(788, 349);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 36);
			this->label3->TabIndex = 73;
			this->label3->Text = L"Пароль";
			// 
			// textBoxCodeNew
			// 
			this->textBoxCodeNew->Animated = true;
			this->textBoxCodeNew->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxCodeNew->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxCodeNew->AutoRoundedCorners = true;
			this->textBoxCodeNew->BorderColor = System::Drawing::Color::Silver;
			this->textBoxCodeNew->BorderRadius = 22;
			this->textBoxCodeNew->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxCodeNew->DefaultText = L"";
			this->textBoxCodeNew->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->textBoxCodeNew->DisabledState->FillColor = System::Drawing::Color::DarkGray;
			this->textBoxCodeNew->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBoxCodeNew->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxCodeNew->Enabled = false;
			this->textBoxCodeNew->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxCodeNew->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxCodeNew->ForeColor = System::Drawing::Color::Black;
			this->textBoxCodeNew->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxCodeNew->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxCodeNew.IconLeft")));
			this->textBoxCodeNew->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxCodeNew->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxCodeNew->Location = System::Drawing::Point(422, 555);
			this->textBoxCodeNew->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxCodeNew->MaxLength = 6;
			this->textBoxCodeNew->Name = L"textBoxCodeNew";
			this->textBoxCodeNew->PasswordChar = '●';
			this->textBoxCodeNew->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxCodeNew->PlaceholderText = L"Код с новой почты";
			this->textBoxCodeNew->SelectedText = L"";
			this->textBoxCodeNew->Size = System::Drawing::Size(315, 46);
			this->textBoxCodeNew->TabIndex = 71;
			this->textBoxCodeNew->UseSystemPasswordChar = true;
			// 
			// btnCancelChanges
			// 
			this->btnCancelChanges->Animated = true;
			this->btnCancelChanges->BackColor = System::Drawing::Color::Transparent;
			this->btnCancelChanges->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCancelChanges->BorderRadius = 20;
			this->btnCancelChanges->BorderThickness = 1;
			this->btnCancelChanges->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnCancelChanges->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnCancelChanges->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnCancelChanges->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnCancelChanges->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCancelChanges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnCancelChanges->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnCancelChanges->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCancelChanges->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCancelChanges->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnCancelChanges->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnCancelChanges->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image10")));
			this->btnCancelChanges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelChanges.Image")));
			this->btnCancelChanges->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnCancelChanges->ImageSize = System::Drawing::Size(25, 25);
			this->btnCancelChanges->Location = System::Drawing::Point(1166, 753);
			this->btnCancelChanges->Name = L"btnCancelChanges";
			this->btnCancelChanges->Size = System::Drawing::Size(154, 39);
			this->btnCancelChanges->TabIndex = 70;
			this->btnCancelChanges->Text = L"Отмена";
			this->btnCancelChanges->TextOffset = System::Drawing::Point(10, 0);
			this->btnCancelChanges->UseTransparentBackground = true;
			// 
			// linkREMOVEACC
			// 
			this->linkREMOVEACC->AutoSize = true;
			this->linkREMOVEACC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->linkREMOVEACC->LinkColor = System::Drawing::Color::Yellow;
			this->linkREMOVEACC->Location = System::Drawing::Point(625, 753);
			this->linkREMOVEACC->Name = L"linkREMOVEACC";
			this->linkREMOVEACC->Size = System::Drawing::Size(215, 19);
			this->linkREMOVEACC->TabIndex = 69;
			this->linkREMOVEACC->TabStop = true;
			this->linkREMOVEACC->Text = L"Хотите удалить аккаунт\?";
			this->linkREMOVEACC->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &mainForm::linkREMOVEACC_LinkClicked);
			// 
			// lblSexEdit
			// 
			this->lblSexEdit->AutoSize = true;
			this->lblSexEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F));
			this->lblSexEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSexEdit->Location = System::Drawing::Point(71, 683);
			this->lblSexEdit->Name = L"lblSexEdit";
			this->lblSexEdit->Size = System::Drawing::Size(77, 36);
			this->lblSexEdit->TabIndex = 68;
			this->lblSexEdit->Text = L"Пол:\r\n";
			// 
			// lblLoginEdit
			// 
			this->lblLoginEdit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblLoginEdit->AutoSize = true;
			this->lblLoginEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLoginEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblLoginEdit->Location = System::Drawing::Point(667, 9);
			this->lblLoginEdit->Name = L"lblLoginEdit";
			this->lblLoginEdit->Size = System::Drawing::Size(111, 42);
			this->lblLoginEdit->TabIndex = 67;
			this->lblLoginEdit->Text = L"Freak";
			// 
			// lblBirthEdit
			// 
			this->lblBirthEdit->AutoSize = true;
			this->lblBirthEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F));
			this->lblBirthEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblBirthEdit->Location = System::Drawing::Point(71, 576);
			this->lblBirthEdit->Name = L"lblBirthEdit";
			this->lblBirthEdit->Size = System::Drawing::Size(249, 36);
			this->lblBirthEdit->TabIndex = 62;
			this->lblBirthEdit->Text = L"Дата рождения:\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(416, 349);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 36);
			this->label4->TabIndex = 60;
			this->label4->Text = L"E-mail";
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->labelTimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelTimer->Location = System::Drawing::Point(423, 658);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(314, 19);
			this->labelTimer->TabIndex = 59;
			this->labelTimer->Text = L"Отправить повторно через 30 секунд";
			this->labelTimer->Visible = false;
			// 
			// pictureBoxCheckCode
			// 
			this->pictureBoxCheckCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCheckCode.Image")));
			this->pictureBoxCheckCode->ImageRotate = 0;
			this->pictureBoxCheckCode->Location = System::Drawing::Point(598, 617);
			this->pictureBoxCheckCode->Name = L"pictureBoxCheckCode";
			this->pictureBoxCheckCode->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->pictureBoxCheckCode->Size = System::Drawing::Size(20, 20);
			this->pictureBoxCheckCode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCheckCode->TabIndex = 58;
			this->pictureBoxCheckCode->TabStop = false;
			this->pictureBoxCheckCode->Visible = false;
			// 
			// pictureBoxCheckMail
			// 
			this->pictureBoxCheckMail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCheckMail.Image")));
			this->pictureBoxCheckMail->ImageRotate = 0;
			this->pictureBoxCheckMail->Location = System::Drawing::Point(659, 453);
			this->pictureBoxCheckMail->Name = L"pictureBoxCheckMail";
			this->pictureBoxCheckMail->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->pictureBoxCheckMail->Size = System::Drawing::Size(20, 20);
			this->pictureBoxCheckMail->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCheckMail->TabIndex = 57;
			this->pictureBoxCheckMail->TabStop = false;
			this->pictureBoxCheckMail->Visible = false;
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Animated = true;
			this->textBoxEmail->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxEmail->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxEmail->AutoRoundedCorners = true;
			this->textBoxEmail->BorderColor = System::Drawing::Color::Silver;
			this->textBoxEmail->BorderRadius = 22;
			this->textBoxEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxEmail->DefaultText = L"";
			this->textBoxEmail->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxEmail->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxEmail->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxEmail->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxEmail->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxEmail->ForeColor = System::Drawing::Color::Black;
			this->textBoxEmail->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxEmail->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxEmail.IconLeft")));
			this->textBoxEmail->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxEmail->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxEmail->Location = System::Drawing::Point(422, 391);
			this->textBoxEmail->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->PasswordChar = '\0';
			this->textBoxEmail->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxEmail->PlaceholderText = L"newEmail@gmail.com";
			this->textBoxEmail->SelectedText = L"";
			this->textBoxEmail->Size = System::Drawing::Size(315, 46);
			this->textBoxEmail->TabIndex = 53;
			this->textBoxEmail->TextOffset = System::Drawing::Point(2, 0);
			// 
			// textBoxCode
			// 
			this->textBoxCode->Animated = true;
			this->textBoxCode->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxCode->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxCode->AutoRoundedCorners = true;
			this->textBoxCode->BorderColor = System::Drawing::Color::Silver;
			this->textBoxCode->BorderRadius = 22;
			this->textBoxCode->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxCode->DefaultText = L"";
			this->textBoxCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->textBoxCode->DisabledState->FillColor = System::Drawing::Color::DarkGray;
			this->textBoxCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBoxCode->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxCode->Enabled = false;
			this->textBoxCode->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxCode->ForeColor = System::Drawing::Color::Black;
			this->textBoxCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxCode->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxCode.IconLeft")));
			this->textBoxCode->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxCode->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxCode->Location = System::Drawing::Point(422, 501);
			this->textBoxCode->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxCode->MaxLength = 6;
			this->textBoxCode->Name = L"textBoxCode";
			this->textBoxCode->PasswordChar = '●';
			this->textBoxCode->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxCode->PlaceholderText = L"Код с старой почты";
			this->textBoxCode->SelectedText = L"";
			this->textBoxCode->Size = System::Drawing::Size(315, 46);
			this->textBoxCode->TabIndex = 54;
			this->textBoxCode->UseSystemPasswordChar = true;
			// 
			// buttonSendMail
			// 
			this->buttonSendMail->Animated = true;
			this->buttonSendMail->BackColor = System::Drawing::Color::Transparent;
			this->buttonSendMail->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendMail->BorderRadius = 20;
			this->buttonSendMail->BorderThickness = 1;
			this->buttonSendMail->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonSendMail->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonSendMail->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonSendMail->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonSendMail->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendMail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonSendMail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonSendMail->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendMail->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendMail->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonSendMail->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonSendMail->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image11")));
			this->buttonSendMail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSendMail.Image")));
			this->buttonSendMail->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonSendMail->ImageSize = System::Drawing::Size(25, 25);
			this->buttonSendMail->Location = System::Drawing::Point(422, 444);
			this->buttonSendMail->Name = L"buttonSendMail";
			this->buttonSendMail->Size = System::Drawing::Size(231, 39);
			this->buttonSendMail->TabIndex = 55;
			this->buttonSendMail->Text = L"Отправить письма";
			this->buttonSendMail->TextOffset = System::Drawing::Point(15, 0);
			this->buttonSendMail->UseTransparentBackground = true;
			this->buttonSendMail->Click += gcnew System::EventHandler(this, &mainForm::buttonSendMail_Click);
			// 
			// buttonCheckCode
			// 
			this->buttonCheckCode->Animated = true;
			this->buttonCheckCode->BackColor = System::Drawing::Color::Transparent;
			this->buttonCheckCode->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonCheckCode->BorderRadius = 20;
			this->buttonCheckCode->BorderThickness = 1;
			this->buttonCheckCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->buttonCheckCode->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->buttonCheckCode->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->buttonCheckCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->buttonCheckCode->Enabled = false;
			this->buttonCheckCode->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonCheckCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->buttonCheckCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonCheckCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonCheckCode->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonCheckCode->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonCheckCode->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->buttonCheckCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image12")));
			this->buttonCheckCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCheckCode.Image")));
			this->buttonCheckCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->buttonCheckCode->ImageSize = System::Drawing::Size(25, 25);
			this->buttonCheckCode->Location = System::Drawing::Point(422, 607);
			this->buttonCheckCode->Name = L"buttonCheckCode";
			this->buttonCheckCode->Size = System::Drawing::Size(170, 39);
			this->buttonCheckCode->TabIndex = 56;
			this->buttonCheckCode->Text = L"Подтвердить";
			this->buttonCheckCode->TextOffset = System::Drawing::Point(14, 0);
			this->buttonCheckCode->UseTransparentBackground = true;
			this->buttonCheckCode->Click += gcnew System::EventHandler(this, &mainForm::buttonCheckCode_Click);
			// 
			// lblSurnameEdit
			// 
			this->lblSurnameEdit->AutoSize = true;
			this->lblSurnameEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSurnameEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSurnameEdit->Location = System::Drawing::Point(70, 455);
			this->lblSurnameEdit->Name = L"lblSurnameEdit";
			this->lblSurnameEdit->Size = System::Drawing::Size(182, 42);
			this->lblSurnameEdit->TabIndex = 52;
			this->lblSurnameEdit->Text = L"Фамилия";
			// 
			// textBoxUserSurname
			// 
			this->textBoxUserSurname->Animated = true;
			this->textBoxUserSurname->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxUserSurname->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxUserSurname->AutoRoundedCorners = true;
			this->textBoxUserSurname->BorderColor = System::Drawing::Color::Silver;
			this->textBoxUserSurname->BorderRadius = 22;
			this->textBoxUserSurname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxUserSurname->DefaultText = L"";
			this->textBoxUserSurname->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxUserSurname->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxUserSurname->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxUserSurname->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxUserSurname->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxUserSurname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxUserSurname->ForeColor = System::Drawing::Color::Black;
			this->textBoxUserSurname->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxUserSurname->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxUserSurname.IconLeft")));
			this->textBoxUserSurname->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxUserSurname->IconLeftSize = System::Drawing::Size(25, 25);
			this->textBoxUserSurname->IconRightSize = System::Drawing::Size(0, 0);
			this->textBoxUserSurname->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxUserSurname->Location = System::Drawing::Point(77, 501);
			this->textBoxUserSurname->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxUserSurname->MaxLength = 30;
			this->textBoxUserSurname->Name = L"textBoxUserSurname";
			this->textBoxUserSurname->PasswordChar = '\0';
			this->textBoxUserSurname->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxUserSurname->PlaceholderText = L"Фамилия";
			this->textBoxUserSurname->SelectedText = L"";
			this->textBoxUserSurname->Size = System::Drawing::Size(264, 46);
			this->textBoxUserSurname->TabIndex = 51;
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Animated = true;
			this->textBoxUserName->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(21) {
				L"Александр", L"Михаил",
					L"Максим", L"Лев", L"Марк", L"Артем", L"Иван", L"Матвей", L"Дмитрий", L"Даниил", L"София", L"Мария", L"Анна", L"Алиса", L"Виктория",
					L"Ева", L"Полина", L"Александра", L"Василиса", L"Варвара", L"Джени"
			});
			this->textBoxUserName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxUserName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxUserName->AutoRoundedCorners = true;
			this->textBoxUserName->BorderColor = System::Drawing::Color::Silver;
			this->textBoxUserName->BorderRadius = 22;
			this->textBoxUserName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxUserName->DefaultText = L"";
			this->textBoxUserName->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxUserName->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxUserName->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxUserName->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxUserName->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBoxUserName->ForeColor = System::Drawing::Color::Black;
			this->textBoxUserName->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxUserName->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBoxUserName.IconLeft")));
			this->textBoxUserName->IconLeftOffset = System::Drawing::Point(5, 0);
			this->textBoxUserName->IconLeftSize = System::Drawing::Size(25, 25);
			this->textBoxUserName->IconRightSize = System::Drawing::Size(0, 0);
			this->textBoxUserName->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxUserName->Location = System::Drawing::Point(77, 391);
			this->textBoxUserName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxUserName->MaxLength = 10;
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->PasswordChar = '\0';
			this->textBoxUserName->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxUserName->PlaceholderText = L"Имя*";
			this->textBoxUserName->SelectedText = L"";
			this->textBoxUserName->Size = System::Drawing::Size(264, 46);
			this->textBoxUserName->TabIndex = 50;
			// 
			// lblNameEdit
			// 
			this->lblNameEdit->AutoSize = true;
			this->lblNameEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblNameEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblNameEdit->Location = System::Drawing::Point(70, 345);
			this->lblNameEdit->Name = L"lblNameEdit";
			this->lblNameEdit->Size = System::Drawing::Size(91, 42);
			this->lblNameEdit->TabIndex = 49;
			this->lblNameEdit->Text = L"Имя";
			// 
			// btnProfileSave
			// 
			this->btnProfileSave->Animated = true;
			this->btnProfileSave->BackColor = System::Drawing::Color::Transparent;
			this->btnProfileSave->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileSave->BorderRadius = 20;
			this->btnProfileSave->BorderThickness = 1;
			this->btnProfileSave->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnProfileSave->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnProfileSave->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnProfileSave->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnProfileSave->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnProfileSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnProfileSave->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileSave->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileSave->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnProfileSave->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnProfileSave->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image13")));
			this->btnProfileSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProfileSave.Image")));
			this->btnProfileSave->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnProfileSave->Location = System::Drawing::Point(1323, 753);
			this->btnProfileSave->Name = L"btnProfileSave";
			this->btnProfileSave->Size = System::Drawing::Size(181, 39);
			this->btnProfileSave->TabIndex = 48;
			this->btnProfileSave->Text = L"Сохранить";
			this->btnProfileSave->TextOffset = System::Drawing::Point(10, 0);
			this->btnProfileSave->UseTransparentBackground = true;
			// 
			// guna2Button2
			// 
			this->guna2Button2->Animated = true;
			this->guna2Button2->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->BorderRadius = 20;
			this->guna2Button2->BorderThickness = 1;
			this->guna2Button2->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button2->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2Button2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2Button2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2Button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2Button2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2Button2->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image14")));
			this->guna2Button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button2.Image")));
			this->guna2Button2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button2->ImageSize = System::Drawing::Size(25, 25);
			this->guna2Button2->Location = System::Drawing::Point(640, 279);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->Size = System::Drawing::Size(175, 39);
			this->guna2Button2->TabIndex = 39;
			this->guna2Button2->Text = L"Изменить";
			this->guna2Button2->TextOffset = System::Drawing::Point(10, 0);
			this->guna2Button2->UseTransparentBackground = true;
			this->guna2Button2->Click += gcnew System::EventHandler(this, &mainForm::buttonUpload_Click);
			// 
			// pictureProfileEdit
			// 
			this->pictureProfileEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->pictureProfileEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureProfileEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureProfileEdit.Image")));
			this->pictureProfileEdit->Location = System::Drawing::Point(629, 54);
			this->pictureProfileEdit->Name = L"pictureProfileEdit";
			this->pictureProfileEdit->Size = System::Drawing::Size(200, 200);
			this->pictureProfileEdit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureProfileEdit->TabIndex = 61;
			this->pictureProfileEdit->TabStop = false;
			this->pictureProfileEdit->Click += gcnew System::EventHandler(this, &mainForm::buttonUpload_Click);
			// 
			// linkReMail
			// 
			this->linkReMail->AutoSize = true;
			this->linkReMail->DisabledLinkColor = System::Drawing::Color::Gray;
			this->linkReMail->Enabled = false;
			this->linkReMail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->linkReMail->ForeColor = System::Drawing::Color::Gray;
			this->linkReMail->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkReMail->Location = System::Drawing::Point(423, 658);
			this->linkReMail->Name = L"linkReMail";
			this->linkReMail->Size = System::Drawing::Size(179, 19);
			this->linkReMail->TabIndex = 66;
			this->linkReMail->TabStop = true;
			this->linkReMail->Text = L"Отправить повторно";
			this->linkReMail->Visible = false;
			this->linkReMail->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &mainForm::linkReMail_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(515, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(444, 19);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Рекомендуем загружать изображения в формате 4:3";
			this->label2->Visible = false;
			// 
			// dragMain
			// 
			this->dragMain->DockIndicatorTransparencyValue = 0.6;
			this->dragMain->TargetControl = this->panelMain;
			this->dragMain->UseTransparentDrag = true;
			// 
			// MessageInfo
			// 
			this->MessageInfo->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageInfo->Caption = L"Информация";
			this->MessageInfo->Icon = Guna::UI2::WinForms::MessageDialogIcon::Information;
			this->MessageInfo->Parent = this;
			this->MessageInfo->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageInfo->Text = nullptr;
			// 
			// MessageWarning
			// 
			this->MessageWarning->Buttons = Guna::UI2::WinForms::MessageDialogButtons::YesNo;
			this->MessageWarning->Caption = L"Внимание";
			this->MessageWarning->Icon = Guna::UI2::WinForms::MessageDialogIcon::Warning;
			this->MessageWarning->Parent = this;
			this->MessageWarning->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageWarning->Text = nullptr;
			// 
			// MessageError
			// 
			this->MessageError->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageError->Caption = L"Ошибка";
			this->MessageError->Icon = Guna::UI2::WinForms::MessageDialogIcon::Error;
			this->MessageError->Parent = this;
			this->MessageError->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageError->Text = nullptr;
			// 
			// MessageQuestion
			// 
			this->MessageQuestion->Buttons = Guna::UI2::WinForms::MessageDialogButtons::YesNo;
			this->MessageQuestion->Caption = nullptr;
			this->MessageQuestion->Icon = Guna::UI2::WinForms::MessageDialogIcon::Question;
			this->MessageQuestion->Parent = this;
			this->MessageQuestion->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
			this->MessageQuestion->Text = nullptr;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// timerReMail
			// 
			this->timerReMail->Interval = 1000;
			this->timerReMail->Tick += gcnew System::EventHandler(this, &mainForm::timerEmail_Tick);
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
			this->pageBook->ResumeLayout(false);
			this->Book->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->pageCourses->ResumeLayout(false);
			this->pageCourses->PerformLayout();
			this->pageProfile->ResumeLayout(false);
			this->panelProfileData->ResumeLayout(false);
			this->panelProfileData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfile))->EndInit();
			this->pageStats->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartProductivity))->EndInit();
			this->pageProfileEdit->ResumeLayout(false);
			this->pageProfileEdit->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfileEdit))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	//Настройки
	private: 
		bool menu = true;
		bool alwaysHideMenu;
		int volume = 50;
		int btnBorder = 20;
		void RegisterMouseDownEvent(Control^ parent, bool enable);

	private: 
		String^ readBinaryFile(String^ filePath) {
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
			BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

			String^ result = binaryReader->ReadString();
			fileStream->Close();
			binaryReader->Close();

			return result;
		}
		private: size_t readPassword(String^ filePath) {
		try {
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
			BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

			size_t result = binaryReader->ReadUInt64();

			binaryReader->Close();
			fileStream->Close();

			return result;
		}
		catch (Exception^ e) {
			MessageError->Show("0: " + e->Message);
			return 0;
		}
	}
		void writeBinaryFile(String^ filePath, size_t content) {
			try {
				FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
				BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

				binaryWriter->Write(static_cast<UInt64>(content));

				binaryWriter->Close();
				fileStream->Close();
			}
			catch (Exception^ e) {
				// Обработка исключений
				MessageError->Show("Ошибка записи файла: " + e->Message);
			}
		}
		Void DataLoad() {
			String^ fileUserEmail =		User + "//userData.bin";
			String^ fileUserBirth =		User + "//userBirth.bin";
			String^ fileUserSex =		User + "//userSex.bin";
			String^ fileUserName =		User + "//userName.bin";
			String^ fileUserSurname =	User + "//userSurname.bin";

			UserEmail =		readBinaryFile(fileUserEmail);
			UserBirth =		readBinaryFile(fileUserBirth);
			UserSex =		readBinaryFile(fileUserSex);
			UserName =		readBinaryFile(fileUserName);
		

			String^ pathToAvatarPng = User + "//avatar.png";
			String^ pathToAvatarJpg = User + "//avatar.jpg";

			if (File::Exists(fileUserSurname)) {
				UserSurname = readBinaryFile(fileUserSurname);
			}

			if (File::Exists(pathToAvatarJpg)) {
				pictureProfile->ImageLocation = pathToAvatarJpg;
				pictureUserBar->ImageLocation = pathToAvatarJpg;
				pictureProfileEdit->ImageLocation = pathToAvatarJpg;
			}
			else if (File::Exists(pathToAvatarPng)) {
				pictureProfile->ImageLocation = pathToAvatarPng;
				pictureUserBar->ImageLocation = pathToAvatarPng;
				pictureProfileEdit->ImageLocation = pathToAvatarPng;
			}

			lblLogin->Text =		User;
			lblName->Text =			"Имя: " + UserName;
			lblSurname->Text =		"Фамилия: " + UserSurname;
			lblSex->Text =			"Пол: " + UserSex;
			lblBirth->Text =		"Дата рождения: " + UserBirth;
			lblEmail->Text =		"Email: " + UserEmail;
			labelNameBar->Text =	UserName;
			lblRegDate->Text =		"Дата регистрации: " + GetFolderCreationDate(User);
		
			textBoxUserName->Text = UserName;
			textBoxUserSurname->Text = UserSurname;
			textBoxEmail->Text = UserEmail;

			lblSexEdit->Text =		"Пол:\n" + UserSex;
			lblBirthEdit->Text =	"Дата рождения:\n" + UserBirth;
		}

		Void cfgLoad() {
		Config^ config = config->LoadConfig();

		borderlessForm->BorderRadius =		config->borderForm;
		borderlessForm->HasFormShadow =		config->hasFormShadow;
		dragMain->TransparentWhileDrag =	config->dragTransparent;
		btnBorder =							config->borderBtn;
		volume =							config->volume;
		alwaysHideMenu =					config->alwaysHideMenu;
		RegisterMouseDownEvent(this, alwaysHideMenu);

		btnProfileEdit->BorderRadius = btnBorder;
		btnProfileSave->BorderRadius = btnBorder;
		}

	// Кнопки формы, Loader
	private: 
		void Form_MouseDown(Object^ sender, MouseEventArgs^ e)
		{
			// Обработка нажатия любого элемента на форме (Настройка Always Hide)
			menu = false;
			timerMenu->Start();
		}
		Void main_Load(System::Object^ sender, System::EventArgs^ e);
		Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnExit_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e);

	// Боковое меню (кнопки, анимация)
	private: 
		Void timerMenu_Tick(System::Object^ sender, System::EventArgs^ e) {
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
		Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageHome);
		}
		Void btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageBook);
		}
		Void btnCourses_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageCourses);
		}
		Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageProfile);
		}
		Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageStats);
		}
		Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
			Pages->SelectTab(pageSettings);
		}
		Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e);

	// Бар панель пользователя
	private: 
		Void ratingUser_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageInfo->Show("Оценка ваших успехов в учебе :)");
		}
	// Страница содержания
	private:


	// Страница заданий
	private:
		Void btnPyRun_click(System::Object^ sender, System::EventArgs^ e);



	// Профиль
	private:
		String^ GetFolderCreationDate(String^ folderPath);
		Void buttonUpload_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonResume_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCheckCode_Click(System::Object^ sender, System::EventArgs^ e);
		Void timerEmail_Tick(System::Object^ sender, System::EventArgs^ e);
		Void linkReMail_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

		bool IsValidEmail(String^ email) {
				// Проверка корректности введенного email (наличие символов '@' и '.')
				return email->Contains("@") && email->Contains(".");
			}
		int securityCode;
		int securityCodeNew;
		int generateSecurityCode() {
			int Code = rand() % 900000 + 100000;
			return Code;
		}
		void enableMail(bool enable) {
				   if (enable) {
					   textBoxCode->Clear();

					   textBoxEmail->Enabled = true;
					   textBoxCode->Enabled = false;
					   textBoxCodeNew->Enabled = false;

					   buttonSendMail->Enabled = true;
					   buttonCheckCode->Enabled = false;

					   pictureBoxCheckMail->Enabled = true;
					   pictureBoxCheckCode->Enabled = true;

					   pictureBoxCheckMail->Visible = false;
					   pictureBoxCheckCode->Visible = false;

					   linkReMail->Visible = false;
				   }
				   else {
					   textBoxEmail->Enabled = true;
					   textBoxCode->Enabled = true;

					   buttonSendMail->Enabled = true;
					   buttonCheckCode->Enabled = true;

					   pictureBoxCheckMail->Enabled = false;
					   pictureBoxCheckCode->Enabled = false;

				   }
			   }

		Void ChangeData();

		Void linkREMOVEACC_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e);
};
}
