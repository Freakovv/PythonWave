#pragma once

namespace PythonWave {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class profile : public System::Windows::Forms::Form
	{
    public:
        String^ UserLogin;
		profile(String^ l)
		{
			InitializeComponent();
            UserLogin = l;
		}

		profile(void)
		{

			InitializeComponent();
            MessageError->Show("Текущий пользователь не определен");
		}

	protected:
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
    private: Bunifu::UI::WinForms::BunifuPages^ Pages;
    private: System::Windows::Forms::TabPage^ pageProfile;
    private: Guna::UI2::WinForms::Guna2Button^ buttonResume;
    private: Guna::UI2::WinForms::Guna2CirclePictureBox^ buttonClose;
    private: Guna::UI2::WinForms::Guna2CirclePictureBox^ buttonMin;
    private: System::Windows::Forms::PictureBox^ pictureBoxUploadImage;
    private: Guna::UI2::WinForms::Guna2Button^ buttonUpload;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxEmail;
    private: System::Windows::Forms::LinkLabel^ linkReMail;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxCode;

    private: Guna::UI2::WinForms::Guna2Button^ buttonSendMail;
    private: Guna::UI2::WinForms::Guna2CircleButton^ buttonQuestion;
    private: Guna::UI2::WinForms::Guna2Button^ buttonCheckCode;


    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label1;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserSurname;
    private: System::Windows::Forms::Label^ label2;
    private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserName;
    private: System::Windows::Forms::TabPage^ pageSuccessful;
    private: Guna::UI2::WinForms::Guna2CustomCheckBox^ guna2CustomCheckBox1;
    private: System::Windows::Forms::TabPage^ pageSettings;







    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogExit;
    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogQuestion;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageDialogUpload;
    private: System::Windows::Forms::Timer^ timerTransition;




    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ labelMain;

    private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;
    private: System::Windows::Forms::TabPage^ pageEnd;
    private: Guna::UI2::WinForms::Guna2Button^ buttonResume1;
    private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel1;
    private: Bunifu::UI::WinForms::BunifuLabel^ labelSettings;
    private: Bunifu::UI::WinForms::BunifuLabel^ labelEnd;
    private: System::Windows::Forms::Panel^ panel2;
    private: Guna::UI2::WinForms::Guna2CirclePictureBox^ buttonCloseEnd;

    private: Bunifu::UI::WinForms::BunifuLabel^ labelClose;




    private: System::Windows::Forms::Timer^ timerCheckBox;
    private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckCode;

    private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckMail;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControlPanel;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControlProfile;
    private: System::Windows::Forms::Label^ labelTimer;
    private: System::Windows::Forms::Timer^ timerReMail;
    private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownSex;
    private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownDay;
    private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownMonth;
    private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdownYear;
    private: System::Windows::Forms::Label^ label4;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragSettings;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragEnd;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragSuccessful;
    private: Guna::UI2::WinForms::Guna2DragControl^ dragControlPanel2;
    private: Guna::UI2::WinForms::Guna2TrackBar^ TrackBorderForm;



private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleTransparent;




private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator1;

private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel2;




private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label7;
private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleShadows;
private: Guna::UI2::WinForms::Guna2CircleButton^ guna2CircleButton1;
private: System::Windows::Forms::Label^ label8;
private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleGreeting;

private: System::Windows::Forms::Label^ labelBorderForm;

private: Guna::UI2::WinForms::Guna2MessageDialog^ MessageInfo;
private: System::Windows::Forms::Label^ labelVolume;

private: System::Windows::Forms::Label^ label10;
private: Guna::UI2::WinForms::Guna2TrackBar^ TrackVolume;

private: System::Windows::Forms::Label^ labelBorderBtn;

private: System::Windows::Forms::Label^ label12;
private: Guna::UI2::WinForms::Guna2TrackBar^ TrackBorderBtn;

private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel3;
















    protected:
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
            this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
            this->Pages = (gcnew Bunifu::UI::WinForms::BunifuPages());
            this->pageProfile = (gcnew System::Windows::Forms::TabPage());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->bunifuDropdownSex = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
            this->bunifuDropdownDay = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
            this->bunifuDropdownMonth = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
            this->bunifuDropdownYear = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
            this->labelTimer = (gcnew System::Windows::Forms::Label());
            this->pictureBoxCheckCode = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
            this->pictureBoxCheckMail = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->labelMain = (gcnew System::Windows::Forms::Label());
            this->buttonClose = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
            this->buttonMin = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
            this->buttonResume = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->pictureBoxUploadImage = (gcnew System::Windows::Forms::PictureBox());
            this->buttonUpload = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->textBoxEmail = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->linkReMail = (gcnew System::Windows::Forms::LinkLabel());
            this->textBoxCode = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->buttonSendMail = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->buttonQuestion = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->buttonCheckCode = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxUserSurname = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxUserName = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->pageSuccessful = (gcnew System::Windows::Forms::TabPage());
            this->bunifuLabel1 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2CustomCheckBox1 = (gcnew Guna::UI2::WinForms::Guna2CustomCheckBox());
            this->pageSettings = (gcnew System::Windows::Forms::TabPage());
            this->bunifuLabel3 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->labelBorderBtn = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->TrackBorderBtn = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
            this->labelVolume = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->TrackVolume = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
            this->labelBorderForm = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->toggleGreeting = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
            this->guna2CircleButton1 = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->toggleShadows = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->guna2Separator1 = (gcnew Guna::UI2::WinForms::Guna2Separator());
            this->bunifuLabel2 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->toggleTransparent = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
            this->TrackBorderForm = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
            this->labelSettings = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->buttonResume1 = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->pageEnd = (gcnew System::Windows::Forms::TabPage());
            this->labelClose = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->buttonCloseEnd = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
            this->labelEnd = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->MessageDialogExit = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->MessageDialogQuestion = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->MessageDialogUpload = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->timerTransition = (gcnew System::Windows::Forms::Timer(this->components));
            this->MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->timerCheckBox = (gcnew System::Windows::Forms::Timer(this->components));
            this->dragControlPanel = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragControlProfile = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->timerReMail = (gcnew System::Windows::Forms::Timer(this->components));
            this->dragSettings = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragEnd = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragSuccessful = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->dragControlPanel2 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
            this->MessageInfo = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
            this->Pages->SuspendLayout();
            this->pageProfile->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonClose))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonMin))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUploadImage))->BeginInit();
            this->pageSuccessful->SuspendLayout();
            this->pageSettings->SuspendLayout();
            this->pageEnd->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonCloseEnd))->BeginInit();
            this->SuspendLayout();
            // 
            // borderlessForm
            // 
            this->borderlessForm->BorderRadius = 25;
            this->borderlessForm->ContainerControl = this;
            this->borderlessForm->DockIndicatorTransparencyValue = 0.6;
            this->borderlessForm->ResizeForm = false;
            this->borderlessForm->TransparentWhileDrag = true;
            // 
            // Pages
            // 
            this->Pages->Alignment = System::Windows::Forms::TabAlignment::Bottom;
            this->Pages->AllowTransitions = true;
            this->Pages->Controls->Add(this->pageProfile);
            this->Pages->Controls->Add(this->pageSuccessful);
            this->Pages->Controls->Add(this->pageSettings);
            this->Pages->Controls->Add(this->pageEnd);
            this->Pages->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Pages->Location = System::Drawing::Point(-4, -9);
            this->Pages->Multiline = true;
            this->Pages->Name = L"Pages";
            this->Pages->Page = this->pageProfile;
            this->Pages->PageIndex = 0;
            this->Pages->PageName = L"pageProfile";
            this->Pages->PageTitle = L"pageProfile";
            this->Pages->SelectedIndex = 0;
            this->Pages->Size = System::Drawing::Size(948, 737);
            this->Pages->TabIndex = 40;
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
            // pageProfile
            // 
            this->pageProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageProfile->Controls->Add(this->buttonQuestion);
            this->pageProfile->Controls->Add(this->label4);
            this->pageProfile->Controls->Add(this->bunifuDropdownSex);
            this->pageProfile->Controls->Add(this->bunifuDropdownDay);
            this->pageProfile->Controls->Add(this->bunifuDropdownMonth);
            this->pageProfile->Controls->Add(this->bunifuDropdownYear);
            this->pageProfile->Controls->Add(this->labelTimer);
            this->pageProfile->Controls->Add(this->pictureBoxCheckCode);
            this->pageProfile->Controls->Add(this->pictureBoxCheckMail);
            this->pageProfile->Controls->Add(this->panel1);
            this->pageProfile->Controls->Add(this->buttonResume);
            this->pageProfile->Controls->Add(this->pictureBoxUploadImage);
            this->pageProfile->Controls->Add(this->buttonUpload);
            this->pageProfile->Controls->Add(this->textBoxEmail);
            this->pageProfile->Controls->Add(this->linkReMail);
            this->pageProfile->Controls->Add(this->textBoxCode);
            this->pageProfile->Controls->Add(this->buttonSendMail);
            this->pageProfile->Controls->Add(this->buttonCheckCode);
            this->pageProfile->Controls->Add(this->label3);
            this->pageProfile->Controls->Add(this->label1);
            this->pageProfile->Controls->Add(this->textBoxUserSurname);
            this->pageProfile->Controls->Add(this->label2);
            this->pageProfile->Controls->Add(this->textBoxUserName);
            this->pageProfile->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->pageProfile->Location = System::Drawing::Point(4, 4);
            this->pageProfile->Name = L"pageProfile";
            this->pageProfile->Padding = System::Windows::Forms::Padding(3);
            this->pageProfile->Size = System::Drawing::Size(940, 711);
            this->pageProfile->TabIndex = 0;
            this->pageProfile->Text = L"pageProfile";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label4->Location = System::Drawing::Point(23, 140);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(231, 36);
            this->label4->TabIndex = 53;
            this->label4->Text = L"Фото профиля";
            this->label4->Click += gcnew System::EventHandler(this, &profile::buttonUpload_Click);
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
            this->bunifuDropdownSex->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thin;
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
            this->bunifuDropdownSex->Location = System::Drawing::Point(630, 293);
            this->bunifuDropdownSex->Name = L"bunifuDropdownSex";
            this->bunifuDropdownSex->Size = System::Drawing::Size(264, 32);
            this->bunifuDropdownSex->TabIndex = 49;
            this->bunifuDropdownSex->Text = L"Пол";
            this->bunifuDropdownSex->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
            this->bunifuDropdownSex->TextLeftMargin = 4;
            this->bunifuDropdownSex->Click += gcnew System::EventHandler(this, &profile::bunifuDropdownSex_Click);
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
            this->bunifuDropdownDay->Location = System::Drawing::Point(633, 373);
            this->bunifuDropdownDay->Name = L"bunifuDropdownDay";
            this->bunifuDropdownDay->Size = System::Drawing::Size(79, 32);
            this->bunifuDropdownDay->TabIndex = 50;
            this->bunifuDropdownDay->Text = L"День";
            this->bunifuDropdownDay->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
            this->bunifuDropdownDay->TextLeftMargin = 5;
            this->bunifuDropdownDay->Click += gcnew System::EventHandler(this, &profile::bunifuDropdownDay_Click);
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
            this->bunifuDropdownMonth->Location = System::Drawing::Point(718, 373);
            this->bunifuDropdownMonth->Name = L"bunifuDropdownMonth";
            this->bunifuDropdownMonth->Size = System::Drawing::Size(101, 32);
            this->bunifuDropdownMonth->TabIndex = 51;
            this->bunifuDropdownMonth->Text = L"Месяц";
            this->bunifuDropdownMonth->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
            this->bunifuDropdownMonth->TextLeftMargin = 5;
            this->bunifuDropdownMonth->Click += gcnew System::EventHandler(this, &profile::bunifuDropdownMonth_Click);
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
            this->bunifuDropdownYear->Items->AddRange(gcnew cli::array< System::Object^  >(41) {
                L"2020", L"2019", L"2018", L"2017", L"2016",
                    L"2015", L"2014", L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005", L"2004", L"2003", L"2002",
                    L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991", L"1990", L"1989", L"1988",
                    L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980"
            });
            this->bunifuDropdownYear->ItemTopMargin = 3;
            this->bunifuDropdownYear->Location = System::Drawing::Point(829, 373);
            this->bunifuDropdownYear->Name = L"bunifuDropdownYear";
            this->bunifuDropdownYear->Size = System::Drawing::Size(68, 32);
            this->bunifuDropdownYear->TabIndex = 52;
            this->bunifuDropdownYear->Text = L"Год";
            this->bunifuDropdownYear->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
            this->bunifuDropdownYear->TextLeftMargin = 5;
            this->bunifuDropdownYear->Click += gcnew System::EventHandler(this, &profile::bunifuDropdownYear_Click);
            // 
            // labelTimer
            // 
            this->labelTimer->AutoSize = true;
            this->labelTimer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
            this->labelTimer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelTimer->Location = System::Drawing::Point(280, 386);
            this->labelTimer->Name = L"labelTimer";
            this->labelTimer->Size = System::Drawing::Size(314, 19);
            this->labelTimer->TabIndex = 48;
            this->labelTimer->Text = L"Отправить повторно через 30 секунд";
            this->labelTimer->Visible = false;
            // 
            // pictureBoxCheckCode
            // 
            this->pictureBoxCheckCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCheckCode.Image")));
            this->pictureBoxCheckCode->ImageRotate = 0;
            this->pictureBoxCheckCode->Location = System::Drawing::Point(455, 346);
            this->pictureBoxCheckCode->Name = L"pictureBoxCheckCode";
            this->pictureBoxCheckCode->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->pictureBoxCheckCode->Size = System::Drawing::Size(20, 20);
            this->pictureBoxCheckCode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBoxCheckCode->TabIndex = 47;
            this->pictureBoxCheckCode->TabStop = false;
            this->pictureBoxCheckCode->Visible = false;
            // 
            // pictureBoxCheckMail
            // 
            this->pictureBoxCheckMail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCheckMail.Image")));
            this->pictureBoxCheckMail->ImageRotate = 0;
            this->pictureBoxCheckMail->Location = System::Drawing::Point(511, 245);
            this->pictureBoxCheckMail->Name = L"pictureBoxCheckMail";
            this->pictureBoxCheckMail->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->pictureBoxCheckMail->Size = System::Drawing::Size(20, 20);
            this->pictureBoxCheckMail->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBoxCheckMail->TabIndex = 46;
            this->pictureBoxCheckMail->TabStop = false;
            this->pictureBoxCheckMail->Visible = false;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(71)));
            this->panel1->Controls->Add(this->labelMain);
            this->panel1->Controls->Add(this->buttonClose);
            this->panel1->Controls->Add(this->buttonMin);
            this->panel1->Location = System::Drawing::Point(1, 6);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(940, 30);
            this->panel1->TabIndex = 45;
            // 
            // labelMain
            // 
            this->labelMain->AutoSize = true;
            this->labelMain->BackColor = System::Drawing::Color::Transparent;
            this->labelMain->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelMain->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelMain->Location = System::Drawing::Point(0, -2);
            this->labelMain->Name = L"labelMain";
            this->labelMain->Size = System::Drawing::Size(126, 30);
            this->labelMain->TabIndex = 45;
            this->labelMain->Text = L"Профиль";
            this->labelMain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // buttonClose
            // 
            this->buttonClose->BackColor = System::Drawing::Color::Transparent;
            this->buttonClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonClose.Image")));
            this->buttonClose->ImageRotate = 0;
            this->buttonClose->Location = System::Drawing::Point(904, 6);
            this->buttonClose->Name = L"buttonClose";
            this->buttonClose->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonClose->Size = System::Drawing::Size(20, 20);
            this->buttonClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->buttonClose->TabIndex = 31;
            this->buttonClose->TabStop = false;
            this->buttonClose->Click += gcnew System::EventHandler(this, &profile::ButtonExit_Click);
            // 
            // buttonMin
            // 
            this->buttonMin->BackColor = System::Drawing::Color::Transparent;
            this->buttonMin->FillColor = System::Drawing::Color::Transparent;
            this->buttonMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMin.Image")));
            this->buttonMin->ImageRotate = 0;
            this->buttonMin->Location = System::Drawing::Point(878, 6);
            this->buttonMin->Name = L"buttonMin";
            this->buttonMin->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonMin->Size = System::Drawing::Size(20, 20);
            this->buttonMin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->buttonMin->TabIndex = 2;
            this->buttonMin->TabStop = false;
            this->buttonMin->UseTransparentBackground = true;
            this->buttonMin->Click += gcnew System::EventHandler(this, &profile::ButtonMinimize_Click);
            // 
            // buttonResume
            // 
            this->buttonResume->Animated = true;
            this->buttonResume->BackColor = System::Drawing::Color::Transparent;
            this->buttonResume->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume->BorderRadius = 20;
            this->buttonResume->BorderThickness = 1;
            this->buttonResume->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonResume->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonResume->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonResume->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonResume->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonResume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonResume->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonResume->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image")));
            this->buttonResume->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonResume.Image")));
            this->buttonResume->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonResume->ImageSize = System::Drawing::Size(25, 25);
            this->buttonResume->Location = System::Drawing::Point(748, 670);
            this->buttonResume->Name = L"buttonResume";
            this->buttonResume->Size = System::Drawing::Size(181, 39);
            this->buttonResume->TabIndex = 39;
            this->buttonResume->Text = L"Продолжить";
            this->buttonResume->TextOffset = System::Drawing::Point(10, 0);
            this->buttonResume->UseTransparentBackground = true;
            this->buttonResume->Click += gcnew System::EventHandler(this, &profile::buttonResume_Click);
            // 
            // pictureBoxUploadImage
            // 
            this->pictureBoxUploadImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
                static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->pictureBoxUploadImage->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBoxUploadImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxUploadImage.Image")));
            this->pictureBoxUploadImage->Location = System::Drawing::Point(35, 188);
            this->pictureBoxUploadImage->Name = L"pictureBoxUploadImage";
            this->pictureBoxUploadImage->Size = System::Drawing::Size(200, 200);
            this->pictureBoxUploadImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBoxUploadImage->TabIndex = 37;
            this->pictureBoxUploadImage->TabStop = false;
            this->pictureBoxUploadImage->Click += gcnew System::EventHandler(this, &profile::buttonUpload_Click);
            // 
            // buttonUpload
            // 
            this->buttonUpload->Animated = true;
            this->buttonUpload->BackColor = System::Drawing::Color::Transparent;
            this->buttonUpload->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonUpload->BorderRadius = 20;
            this->buttonUpload->BorderThickness = 1;
            this->buttonUpload->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonUpload->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonUpload->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonUpload->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonUpload->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonUpload->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonUpload->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonUpload->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonUpload->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonUpload->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonUpload->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonUpload->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image1")));
            this->buttonUpload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonUpload.Image")));
            this->buttonUpload->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonUpload->ImageSize = System::Drawing::Size(25, 25);
            this->buttonUpload->Location = System::Drawing::Point(35, 394);
            this->buttonUpload->Name = L"buttonUpload";
            this->buttonUpload->Size = System::Drawing::Size(200, 39);
            this->buttonUpload->TabIndex = 38;
            this->buttonUpload->Text = L"Загрузить";
            this->buttonUpload->TextOffset = System::Drawing::Point(10, 0);
            this->buttonUpload->UseTransparentBackground = true;
            this->buttonUpload->Click += gcnew System::EventHandler(this, &profile::buttonUpload_Click);
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
            this->textBoxEmail->Location = System::Drawing::Point(279, 182);
            this->textBoxEmail->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxEmail->Name = L"textBoxEmail";
            this->textBoxEmail->PasswordChar = '\0';
            this->textBoxEmail->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxEmail->PlaceholderText = L"example@gmail.com";
            this->textBoxEmail->SelectedText = L"";
            this->textBoxEmail->Size = System::Drawing::Size(315, 46);
            this->textBoxEmail->TabIndex = 4;
            this->textBoxEmail->TextOffset = System::Drawing::Point(2, 0);
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
            this->linkReMail->Location = System::Drawing::Point(279, 386);
            this->linkReMail->Name = L"linkReMail";
            this->linkReMail->Size = System::Drawing::Size(179, 19);
            this->linkReMail->TabIndex = 36;
            this->linkReMail->TabStop = true;
            this->linkReMail->Text = L"Отправить повторно";
            this->linkReMail->Visible = false;
            this->linkReMail->Click += gcnew System::EventHandler(this, &profile::linkReMail_Click);
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
            this->textBoxCode->Location = System::Drawing::Point(279, 283);
            this->textBoxCode->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxCode->Name = L"textBoxCode";
            this->textBoxCode->PasswordChar = '●';
            this->textBoxCode->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxCode->PlaceholderText = L"Код";
            this->textBoxCode->SelectedText = L"";
            this->textBoxCode->Size = System::Drawing::Size(315, 46);
            this->textBoxCode->TabIndex = 13;
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
            this->buttonSendMail->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image2")));
            this->buttonSendMail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSendMail.Image")));
            this->buttonSendMail->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonSendMail->ImageSize = System::Drawing::Size(25, 25);
            this->buttonSendMail->Location = System::Drawing::Point(279, 235);
            this->buttonSendMail->Name = L"buttonSendMail";
            this->buttonSendMail->Size = System::Drawing::Size(226, 39);
            this->buttonSendMail->TabIndex = 16;
            this->buttonSendMail->Text = L"Отправить письмо";
            this->buttonSendMail->TextOffset = System::Drawing::Point(15, 0);
            this->buttonSendMail->UseTransparentBackground = true;
            this->buttonSendMail->Click += gcnew System::EventHandler(this, &profile::buttonSendMail_Click);
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
            this->buttonQuestion->Location = System::Drawing::Point(582, 152);
            this->buttonQuestion->Name = L"buttonQuestion";
            this->buttonQuestion->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonQuestion->Size = System::Drawing::Size(20, 20);
            this->buttonQuestion->TabIndex = 33;
            this->buttonQuestion->Text = L"guna2CircleButton1";
            this->buttonQuestion->UseTransparentBackground = true;
            this->buttonQuestion->Click += gcnew System::EventHandler(this, &profile::buttonQuestion_Click);
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
            this->buttonCheckCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image3")));
            this->buttonCheckCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCheckCode.Image")));
            this->buttonCheckCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonCheckCode->ImageSize = System::Drawing::Size(25, 25);
            this->buttonCheckCode->Location = System::Drawing::Point(279, 336);
            this->buttonCheckCode->Name = L"buttonCheckCode";
            this->buttonCheckCode->Size = System::Drawing::Size(170, 39);
            this->buttonCheckCode->TabIndex = 17;
            this->buttonCheckCode->Text = L"Подтвердить";
            this->buttonCheckCode->TextOffset = System::Drawing::Point(14, 0);
            this->buttonCheckCode->UseTransparentBackground = true;
            this->buttonCheckCode->Click += gcnew System::EventHandler(this, &profile::buttonValidateCode_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label3->Location = System::Drawing::Point(627, 328);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(242, 36);
            this->label3->TabIndex = 28;
            this->label3->Text = L"Дата рождения";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label1->Location = System::Drawing::Point(630, 140);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(239, 36);
            this->label1->TabIndex = 24;
            this->label1->Text = L"Личные данные";
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
            this->textBoxUserSurname->Location = System::Drawing::Point(630, 235);
            this->textBoxUserSurname->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxUserSurname->MaxLength = 30;
            this->textBoxUserSurname->Name = L"textBoxUserSurname";
            this->textBoxUserSurname->PasswordChar = '\0';
            this->textBoxUserSurname->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxUserSurname->PlaceholderText = L"Фамилия";
            this->textBoxUserSurname->SelectedText = L"";
            this->textBoxUserSurname->Size = System::Drawing::Size(264, 46);
            this->textBoxUserSurname->TabIndex = 27;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label2->Location = System::Drawing::Point(277, 140);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(312, 36);
            this->label2->TabIndex = 25;
            this->label2->Text = L"Подтвердите e-mail*";
            this->label2->Click += gcnew System::EventHandler(this, &profile::buttonQuestion_Click);
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
            this->textBoxUserName->Location = System::Drawing::Point(630, 182);
            this->textBoxUserName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBoxUserName->MaxLength = 10;
            this->textBoxUserName->Name = L"textBoxUserName";
            this->textBoxUserName->PasswordChar = '\0';
            this->textBoxUserName->PlaceholderForeColor = System::Drawing::Color::DarkGray;
            this->textBoxUserName->PlaceholderText = L"Имя*";
            this->textBoxUserName->SelectedText = L"";
            this->textBoxUserName->Size = System::Drawing::Size(264, 46);
            this->textBoxUserName->TabIndex = 26;
            this->textBoxUserName->Click += gcnew System::EventHandler(this, &profile::textBoxUserName_Click);
            // 
            // pageSuccessful
            // 
            this->pageSuccessful->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageSuccessful->Controls->Add(this->bunifuLabel1);
            this->pageSuccessful->Controls->Add(this->guna2CustomCheckBox1);
            this->pageSuccessful->Location = System::Drawing::Point(4, 4);
            this->pageSuccessful->Name = L"pageSuccessful";
            this->pageSuccessful->Padding = System::Windows::Forms::Padding(3);
            this->pageSuccessful->Size = System::Drawing::Size(940, 711);
            this->pageSuccessful->TabIndex = 1;
            this->pageSuccessful->Text = L"pageSuccessful";
            // 
            // bunifuLabel1
            // 
            this->bunifuLabel1->AllowParentOverrides = false;
            this->bunifuLabel1->AutoEllipsis = true;
            this->bunifuLabel1->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel1->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->bunifuLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->bunifuLabel1->Location = System::Drawing::Point(259, 462);
            this->bunifuLabel1->Name = L"bunifuLabel1";
            this->bunifuLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel1->Size = System::Drawing::Size(410, 40);
            this->bunifuLabel1->TabIndex = 3;
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
            // pageSettings
            // 
            this->pageSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageSettings->Controls->Add(this->bunifuLabel3);
            this->pageSettings->Controls->Add(this->labelBorderBtn);
            this->pageSettings->Controls->Add(this->label12);
            this->pageSettings->Controls->Add(this->TrackBorderBtn);
            this->pageSettings->Controls->Add(this->labelVolume);
            this->pageSettings->Controls->Add(this->label10);
            this->pageSettings->Controls->Add(this->TrackVolume);
            this->pageSettings->Controls->Add(this->labelBorderForm);
            this->pageSettings->Controls->Add(this->label8);
            this->pageSettings->Controls->Add(this->toggleGreeting);
            this->pageSettings->Controls->Add(this->guna2CircleButton1);
            this->pageSettings->Controls->Add(this->label7);
            this->pageSettings->Controls->Add(this->toggleShadows);
            this->pageSettings->Controls->Add(this->label6);
            this->pageSettings->Controls->Add(this->label5);
            this->pageSettings->Controls->Add(this->guna2Separator1);
            this->pageSettings->Controls->Add(this->bunifuLabel2);
            this->pageSettings->Controls->Add(this->toggleTransparent);
            this->pageSettings->Controls->Add(this->TrackBorderForm);
            this->pageSettings->Controls->Add(this->labelSettings);
            this->pageSettings->Controls->Add(this->buttonResume1);
            this->pageSettings->Location = System::Drawing::Point(4, 4);
            this->pageSettings->Name = L"pageSettings";
            this->pageSettings->Padding = System::Windows::Forms::Padding(3);
            this->pageSettings->Size = System::Drawing::Size(940, 711);
            this->pageSettings->TabIndex = 2;
            this->pageSettings->Text = L"pageSettings";
            // 
            // bunifuLabel3
            // 
            this->bunifuLabel3->AllowParentOverrides = false;
            this->bunifuLabel3->AutoEllipsis = true;
            this->bunifuLabel3->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel3->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bunifuLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->bunifuLabel3->Location = System::Drawing::Point(513, 102);
            this->bunifuLabel3->Name = L"bunifuLabel3";
            this->bunifuLabel3->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel3->Size = System::Drawing::Size(120, 40);
            this->bunifuLabel3->TabIndex = 68;
            this->bunifuLabel3->Text = L"Другое";
            this->bunifuLabel3->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
            this->bunifuLabel3->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // labelBorderBtn
            // 
            this->labelBorderBtn->AutoSize = true;
            this->labelBorderBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelBorderBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelBorderBtn->Location = System::Drawing::Point(213, 350);
            this->labelBorderBtn->Name = L"labelBorderBtn";
            this->labelBorderBtn->Size = System::Drawing::Size(28, 21);
            this->labelBorderBtn->TabIndex = 67;
            this->labelBorderBtn->Text = L"20";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label12->Location = System::Drawing::Point(22, 323);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(260, 24);
            this->label12->TabIndex = 66;
            this->label12->Text = L"Закругленность кнопок";
            // 
            // TrackBorderBtn
            // 
            this->TrackBorderBtn->LargeChange = 2;
            this->TrackBorderBtn->Location = System::Drawing::Point(26, 350);
            this->TrackBorderBtn->Maximum = 20;
            this->TrackBorderBtn->Name = L"TrackBorderBtn";
            this->TrackBorderBtn->Size = System::Drawing::Size(180, 23);
            this->TrackBorderBtn->TabIndex = 65;
            this->TrackBorderBtn->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->TrackBorderBtn->Value = 20;
            this->TrackBorderBtn->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &profile::guna2TrackBar3_Scroll);
            // 
            // labelVolume
            // 
            this->labelVolume->AutoSize = true;
            this->labelVolume->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelVolume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelVolume->Location = System::Drawing::Point(700, 187);
            this->labelVolume->Name = L"labelVolume";
            this->labelVolume->Size = System::Drawing::Size(28, 21);
            this->labelVolume->TabIndex = 64;
            this->labelVolume->Text = L"50";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label10->Location = System::Drawing::Point(509, 160);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(220, 24);
            this->label10->TabIndex = 63;
            this->label10->Text = L"Громкость плееров";
            // 
            // TrackVolume
            // 
            this->TrackVolume->LargeChange = 2;
            this->TrackVolume->Location = System::Drawing::Point(513, 187);
            this->TrackVolume->Name = L"TrackVolume";
            this->TrackVolume->Size = System::Drawing::Size(180, 23);
            this->TrackVolume->TabIndex = 62;
            this->TrackVolume->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->TrackVolume->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &profile::guna2TrackBar2_Scroll);
            // 
            // labelBorderForm
            // 
            this->labelBorderForm->AutoSize = true;
            this->labelBorderForm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelBorderForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelBorderForm->Location = System::Drawing::Point(213, 297);
            this->labelBorderForm->Name = L"labelBorderForm";
            this->labelBorderForm->Size = System::Drawing::Size(28, 21);
            this->labelBorderForm->TabIndex = 61;
            this->labelBorderForm->Text = L"25";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label8->Location = System::Drawing::Point(65, 230);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(255, 24);
            this->label8->TabIndex = 60;
            this->label8->Text = L"Приветствие при входе";
            // 
            // toggleGreeting
            // 
            this->toggleGreeting->Animated = true;
            this->toggleGreeting->Checked = true;
            this->toggleGreeting->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleGreeting->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleGreeting->CheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleGreeting->CheckedState->InnerColor = System::Drawing::Color::White;
            this->toggleGreeting->Location = System::Drawing::Point(26, 234);
            this->toggleGreeting->Name = L"toggleGreeting";
            this->toggleGreeting->Size = System::Drawing::Size(35, 20);
            this->toggleGreeting->TabIndex = 59;
            this->toggleGreeting->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleGreeting->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleGreeting->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleGreeting->UncheckedState->InnerColor = System::Drawing::Color::White;
            // 
            // guna2CircleButton1
            // 
            this->guna2CircleButton1->BackColor = System::Drawing::Color::Transparent;
            this->guna2CircleButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2CircleButton1.BackgroundImage")));
            this->guna2CircleButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->guna2CircleButton1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->guna2CircleButton1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->guna2CircleButton1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->guna2CircleButton1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->guna2CircleButton1->FillColor = System::Drawing::Color::Transparent;
            this->guna2CircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->guna2CircleButton1->ForeColor = System::Drawing::Color::White;
            this->guna2CircleButton1->Location = System::Drawing::Point(238, 196);
            this->guna2CircleButton1->Name = L"guna2CircleButton1";
            this->guna2CircleButton1->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->guna2CircleButton1->Size = System::Drawing::Size(26, 25);
            this->guna2CircleButton1->TabIndex = 58;
            this->guna2CircleButton1->Click += gcnew System::EventHandler(this, &profile::guna2CircleButton1_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label7->Location = System::Drawing::Point(65, 194);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(172, 24);
            this->label7->TabIndex = 57;
            this->label7->Text = L"Тень от формы";
            // 
            // toggleShadows
            // 
            this->toggleShadows->Animated = true;
            this->toggleShadows->Checked = true;
            this->toggleShadows->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleShadows->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleShadows->CheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleShadows->CheckedState->InnerColor = System::Drawing::Color::White;
            this->toggleShadows->Location = System::Drawing::Point(26, 198);
            this->toggleShadows->Name = L"toggleShadows";
            this->toggleShadows->Size = System::Drawing::Size(35, 20);
            this->toggleShadows->TabIndex = 56;
            this->toggleShadows->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleShadows->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleShadows->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleShadows->UncheckedState->InnerColor = System::Drawing::Color::White;
            this->toggleShadows->CheckedChanged += gcnew System::EventHandler(this, &profile::toggleShadows_CheckedChanged);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label6->Location = System::Drawing::Point(22, 270);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(247, 24);
            this->label6->TabIndex = 55;
            this->label6->Text = L"Закругленность краев";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->label5->Location = System::Drawing::Point(65, 159);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(388, 24);
            this->label5->TabIndex = 54;
            this->label5->Text = L"Прозрачность при перетаскивании";
            // 
            // guna2Separator1
            // 
            this->guna2Separator1->Location = System::Drawing::Point(-4, 63);
            this->guna2Separator1->Name = L"guna2Separator1";
            this->guna2Separator1->Size = System::Drawing::Size(940, 10);
            this->guna2Separator1->TabIndex = 52;
            // 
            // bunifuLabel2
            // 
            this->bunifuLabel2->AllowParentOverrides = false;
            this->bunifuLabel2->AutoEllipsis = true;
            this->bunifuLabel2->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel2->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bunifuLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->bunifuLabel2->Location = System::Drawing::Point(26, 102);
            this->bunifuLabel2->Name = L"bunifuLabel2";
            this->bunifuLabel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel2->Size = System::Drawing::Size(215, 40);
            this->bunifuLabel2->TabIndex = 50;
            this->bunifuLabel2->Text = L"Внешний вид";
            this->bunifuLabel2->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
            this->bunifuLabel2->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // toggleTransparent
            // 
            this->toggleTransparent->Animated = true;
            this->toggleTransparent->Checked = true;
            this->toggleTransparent->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleTransparent->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->toggleTransparent->CheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleTransparent->CheckedState->InnerColor = System::Drawing::Color::White;
            this->toggleTransparent->Location = System::Drawing::Point(26, 163);
            this->toggleTransparent->Name = L"toggleTransparent";
            this->toggleTransparent->Size = System::Drawing::Size(35, 20);
            this->toggleTransparent->TabIndex = 49;
            this->toggleTransparent->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleTransparent->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
                static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
            this->toggleTransparent->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
            this->toggleTransparent->UncheckedState->InnerColor = System::Drawing::Color::White;
            this->toggleTransparent->CheckedChanged += gcnew System::EventHandler(this, &profile::guna2ToggleSwitch1_CheckedChanged);
            // 
            // TrackBorderForm
            // 
            this->TrackBorderForm->LargeChange = 2;
            this->TrackBorderForm->Location = System::Drawing::Point(26, 297);
            this->TrackBorderForm->Maximum = 60;
            this->TrackBorderForm->Name = L"TrackBorderForm";
            this->TrackBorderForm->Size = System::Drawing::Size(180, 23);
            this->TrackBorderForm->TabIndex = 48;
            this->TrackBorderForm->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->TrackBorderForm->Value = 25;
            this->TrackBorderForm->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &profile::guna2TrackBar1_Scroll);
            // 
            // labelSettings
            // 
            this->labelSettings->AllowParentOverrides = false;
            this->labelSettings->AutoEllipsis = true;
            this->labelSettings->Cursor = System::Windows::Forms::Cursors::Default;
            this->labelSettings->CursorType = System::Windows::Forms::Cursors::Default;
            this->labelSettings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->labelSettings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelSettings->Location = System::Drawing::Point(395, 17);
            this->labelSettings->Name = L"labelSettings";
            this->labelSettings->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->labelSettings->Size = System::Drawing::Size(182, 40);
            this->labelSettings->TabIndex = 45;
            this->labelSettings->Text = L"Настройки";
            this->labelSettings->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
            this->labelSettings->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // buttonResume1
            // 
            this->buttonResume1->Animated = true;
            this->buttonResume1->BackColor = System::Drawing::Color::Transparent;
            this->buttonResume1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume1->BorderRadius = 20;
            this->buttonResume1->BorderThickness = 1;
            this->buttonResume1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
            this->buttonResume1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
            this->buttonResume1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
                static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
            this->buttonResume1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
            this->buttonResume1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->buttonResume1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonResume1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume1->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume1->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->buttonResume1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->buttonResume1->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image4")));
            this->buttonResume1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonResume1.Image")));
            this->buttonResume1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->buttonResume1->ImageSize = System::Drawing::Size(25, 25);
            this->buttonResume1->Location = System::Drawing::Point(748, 670);
            this->buttonResume1->Name = L"buttonResume1";
            this->buttonResume1->Size = System::Drawing::Size(181, 39);
            this->buttonResume1->TabIndex = 44;
            this->buttonResume1->Text = L"Продолжить";
            this->buttonResume1->TextOffset = System::Drawing::Point(10, 0);
            this->buttonResume1->UseTransparentBackground = true;
            this->buttonResume1->Click += gcnew System::EventHandler(this, &profile::buttonResume1_Click);
            // 
            // pageEnd
            // 
            this->pageEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->pageEnd->Controls->Add(this->labelClose);
            this->pageEnd->Controls->Add(this->panel2);
            this->pageEnd->Controls->Add(this->labelEnd);
            this->pageEnd->Location = System::Drawing::Point(4, 4);
            this->pageEnd->Name = L"pageEnd";
            this->pageEnd->Padding = System::Windows::Forms::Padding(3);
            this->pageEnd->Size = System::Drawing::Size(940, 711);
            this->pageEnd->TabIndex = 3;
            this->pageEnd->Text = L"pageEnd";
            // 
            // labelClose
            // 
            this->labelClose->AllowParentOverrides = false;
            this->labelClose->AutoEllipsis = true;
            this->labelClose->Cursor = System::Windows::Forms::Cursors::Default;
            this->labelClose->CursorType = System::Windows::Forms::Cursors::Default;
            this->labelClose->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->labelClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelClose->Location = System::Drawing::Point(112, 465);
            this->labelClose->Name = L"labelClose";
            this->labelClose->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->labelClose->Size = System::Drawing::Size(739, 40);
            this->labelClose->TabIndex = 48;
            this->labelClose->Text = L"Приложение перезапустится через 5 секунд";
            this->labelClose->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
            this->labelClose->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(71)));
            this->panel2->Controls->Add(this->buttonCloseEnd);
            this->panel2->Location = System::Drawing::Point(1, 6);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(940, 30);
            this->panel2->TabIndex = 47;
            // 
            // buttonCloseEnd
            // 
            this->buttonCloseEnd->BackColor = System::Drawing::Color::Transparent;
            this->buttonCloseEnd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCloseEnd.Image")));
            this->buttonCloseEnd->ImageRotate = 0;
            this->buttonCloseEnd->Location = System::Drawing::Point(904, 6);
            this->buttonCloseEnd->Name = L"buttonCloseEnd";
            this->buttonCloseEnd->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
            this->buttonCloseEnd->Size = System::Drawing::Size(20, 20);
            this->buttonCloseEnd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->buttonCloseEnd->TabIndex = 31;
            this->buttonCloseEnd->TabStop = false;
            this->buttonCloseEnd->Click += gcnew System::EventHandler(this, &profile::buttonCloseEnd_Click);
            // 
            // labelEnd
            // 
            this->labelEnd->AllowParentOverrides = false;
            this->labelEnd->AutoEllipsis = true;
            this->labelEnd->Cursor = System::Windows::Forms::Cursors::Default;
            this->labelEnd->CursorType = System::Windows::Forms::Cursors::Default;
            this->labelEnd->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
            this->labelEnd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->labelEnd->Location = System::Drawing::Point(271, 301);
            this->labelEnd->Name = L"labelEnd";
            this->labelEnd->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->labelEnd->Size = System::Drawing::Size(385, 40);
            this->labelEnd->TabIndex = 46;
            this->labelEnd->Text = L"Настройка завершена";
            this->labelEnd->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
            this->labelEnd->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
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
            this->MessageDialogQuestion->Caption = L"Подтвердите e-mail";
            this->MessageDialogQuestion->Icon = Guna::UI2::WinForms::MessageDialogIcon::Information;
            this->MessageDialogQuestion->Parent = this;
            this->MessageDialogQuestion->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageDialogQuestion->Text = L"Это может пригодится в будущем для восстановления вашего аккаунта.";
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
            this->MessageDialogUpload->Parent = nullptr;
            this->MessageDialogUpload->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageDialogUpload->Text = L"Поддерживаются только png и jpg фоматы";
            // 
            // timerTransition
            // 
            this->timerTransition->Interval = 1000;
            this->timerTransition->Tick += gcnew System::EventHandler(this, &profile::timerTransition_Tick);
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
            // timerCheckBox
            // 
            this->timerCheckBox->Interval = 1000;
            // 
            // dragControlPanel
            // 
            this->dragControlPanel->DockIndicatorTransparencyValue = 0.6;
            this->dragControlPanel->TargetControl = this->panel1;
            this->dragControlPanel->UseTransparentDrag = true;
            // 
            // dragControlProfile
            // 
            this->dragControlProfile->DockIndicatorTransparencyValue = 0.6;
            this->dragControlProfile->TargetControl = this->pageProfile;
            this->dragControlProfile->UseTransparentDrag = true;
            // 
            // timerReMail
            // 
            this->timerReMail->Interval = 1000;
            this->timerReMail->Tick += gcnew System::EventHandler(this, &profile::timer_Tick);
            // 
            // dragSettings
            // 
            this->dragSettings->DockIndicatorTransparencyValue = 0.6;
            this->dragSettings->TargetControl = this->pageSettings;
            this->dragSettings->UseTransparentDrag = true;
            // 
            // dragEnd
            // 
            this->dragEnd->DockIndicatorTransparencyValue = 0.6;
            this->dragEnd->TargetControl = this->pageEnd;
            this->dragEnd->UseTransparentDrag = true;
            // 
            // dragSuccessful
            // 
            this->dragSuccessful->DockIndicatorTransparencyValue = 0.6;
            this->dragSuccessful->TargetControl = this->pageSuccessful;
            this->dragSuccessful->UseTransparentDrag = true;
            // 
            // dragControlPanel2
            // 
            this->dragControlPanel2->DockIndicatorTransparencyValue = 0.6;
            this->dragControlPanel2->TargetControl = this->panel2;
            this->dragControlPanel2->UseTransparentDrag = true;
            // 
            // MessageInfo
            // 
            this->MessageInfo->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
            this->MessageInfo->Caption = L"Внимание";
            this->MessageInfo->Icon = Guna::UI2::WinForms::MessageDialogIcon::Warning;
            this->MessageInfo->Parent = this;
            this->MessageInfo->Style = Guna::UI2::WinForms::MessageDialogStyle::Dark;
            this->MessageInfo->Text = nullptr;
            // 
            // profile
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->ClientSize = System::Drawing::Size(940, 720);
            this->Controls->Add(this->Pages);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"profile";
            this->Opacity = 0;
            this->Text = L"PythonWave: Профиль";
            this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
            this->Pages->ResumeLayout(false);
            this->pageProfile->ResumeLayout(false);
            this->pageProfile->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonClose))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonMin))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUploadImage))->EndInit();
            this->pageSuccessful->ResumeLayout(false);
            this->pageSuccessful->PerformLayout();
            this->pageSettings->ResumeLayout(false);
            this->pageSettings->PerformLayout();
            this->pageEnd->ResumeLayout(false);
            this->pageEnd->PerformLayout();
            this->panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonCloseEnd))->EndInit();
            this->ResumeLayout(false);

        }

#pragma endregion

    private: Void profile_Load(Object^ sender, EventArgs^ e);

	// Custom functions
    private: Void SaveData();
    private: Void SaveConfig();

    private: int generateSecurityCode();
    private: bool IsValidEmail(String^ email);
    private: int SecurityCode = generateSecurityCode();
    private: Void enableMail(bool enable);
    private: Void DeleteDirectory(String^ folderPath);
  

    // Buttons
    private: Void buttonSendMail_Click(Object^ sender, EventArgs^ e);
    private: Void buttonValidateCode_Click(Object^ sender, EventArgs^ e);
    private: Void ButtonMinimize_Click(Object^ sender, EventArgs^ e);
    private: Void ButtonExit_Click(Object^ sender, EventArgs^ e);
    private: Void buttonQuestion_Click(Object^ sender, EventArgs^ e);
    private: Void buttonUpload_Click(Object^ sender, EventArgs^ e);
    private: Void buttonResume_Click(Object^ sender, EventArgs^ e);

    private: Void buttonResume1_Click(Object^ sender, EventArgs^ e);
    

    // TextBoxes
    private: Void textBoxMail_Click(Object^ sender, EventArgs^);


    // Timers
    private: Void timer_Tick(Object^ sender, EventArgs^ e);
    private: Void timerTransition_Tick(Object^ sender, EventArgs^ e);
    private: Void linkReMail_Click(System::Object^ sender, EventArgs^ e);



    private: Void textBoxUserName_Click(System::Object^ sender, EventArgs^ e) {
        textBoxUserName->BorderColor = Color::Gray;
    }
    private: Void bunifuDropdownSex_Click(System::Object^ sender, EventArgs^ e) {
        bunifuDropdownSex->BorderColor = Color::Gray;
    }
    private: Void bunifuDropdownDay_Click(System::Object^ sender, EventArgs^ e) {
        bunifuDropdownDay->BorderColor = Color::Gray;
    }
    private: Void bunifuDropdownMonth_Click(System::Object^ sender, EventArgs^ e) {
        bunifuDropdownMonth->BorderColor = Color::Gray;
    }
    private: Void bunifuDropdownYear_Click(System::Object^ sender, EventArgs^ e) {
        bunifuDropdownYear->BorderColor = Color::Gray;    
    }
    private: Void buttonCloseEnd_Click(System::Object^ sender, System::EventArgs^ e) {
        ClassFade^ Fade = gcnew ClassFade(this);
        Fade->SetAnimation("close");
        Fade = nullptr;
    }
     
           
           //Settings

    private: System::Void guna2TrackBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
        borderlessForm->BorderRadius = TrackBorderForm->Value;
        labelBorderForm->Text = Convert::ToString(TrackBorderForm->Value);
    }
    private: System::Void guna2ToggleSwitch1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        dragSettings->TransparentWhileDrag = toggleTransparent->Checked;
    }
    private: System::Void toggleShadows_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        borderlessForm->HasFormShadow = toggleShadows->Checked;
        if (borderlessForm->HasFormShadow == false) {
            MessageInfo->Show("Изменения вступят в силу после перезапуска");
        }
    }
    private: System::Void guna2CircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageInfo->Show("Изменения вступят в силу после перезапуска");
    }
    private: System::Void guna2TrackBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
        labelVolume->Text = Convert::ToString(TrackVolume->Value);
    }
    private: System::Void guna2TrackBar3_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
        buttonResume1->BorderRadius = TrackBorderBtn->Value;
        labelBorderBtn->Text = Convert::ToString(TrackBorderBtn->Value);
    }
};
}
