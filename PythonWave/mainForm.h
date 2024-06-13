﻿#pragma once

#include "config.h"
#include "ClassFade.h"
#include <regex>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace PythonWave {
	using namespace Guna;
	using namespace System;
	using namespace System::IO;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;

	public ref class mainForm : public Form
	{
	public:
		String^ User;
		String^ UserSurname;
		String^ UserEmail;
		String^ UserBirth;
		String^ UserSex;
		String^ UserName;
		String^ UserRank = "Новичок";

	public:
		ClassFade^ Fade;
		Dictionary<int, String^>^ ranks;

	private: System::Windows::Forms::Timer^ timerAnim;
	private: Bunifu::UI::WinForms::BunifuPages^ Pages;

	private: System::Windows::Forms::TabPage^ pageBook;
	private: Bunifu::UI::WinForms::BunifuPages^ Book;
	private: System::Windows::Forms::TabPage^ pgBookStart;
	private: System::Windows::Forms::RichTextBox^ richStart;
	private: System::Windows::Forms::TabPage^ Book1;
	private: System::Windows::Forms::RichTextBox^ richBook1;
	private: System::Windows::Forms::TabPage^ Book2;
	private: System::Windows::Forms::RichTextBox^ richBook2;
	private: System::Windows::Forms::TabPage^ Book3;
	private: System::Windows::Forms::RichTextBox^ richBook3;
	private: System::Windows::Forms::TabPage^ Book4;
	private: System::Windows::Forms::RichTextBox^ richBook4;
	private: System::Windows::Forms::TabPage^ Book5;
	private: System::Windows::Forms::RichTextBox^ richBook5;
	private: System::Windows::Forms::TabPage^ Book6;
	private: System::Windows::Forms::RichTextBox^ richBook6;
	private: System::Windows::Forms::TabPage^ Book7;
	private: System::Windows::Forms::RichTextBox^ richBook7;
	private: System::Windows::Forms::TabPage^ Book8;
	private: System::Windows::Forms::RichTextBox^ richBook8;
	private: System::Windows::Forms::TabPage^ Book9;
	private: System::Windows::Forms::RichTextBox^ richBook9;
	private: System::Windows::Forms::TabPage^ Book10;
	private: System::Windows::Forms::RichTextBox^ richBook10;
	private: System::Windows::Forms::TabPage^ Book11;
	private: System::Windows::Forms::RichTextBox^ richBook11;
	private: System::Windows::Forms::TabPage^ Book12;
	private: System::Windows::Forms::RichTextBox^ richBook12;
	private: System::Windows::Forms::TabPage^ Book13;
	private: System::Windows::Forms::RichTextBox^ richBook13;
	private: System::Windows::Forms::TabPage^ Book14;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ myToolbox;
	private: Guna::UI2::WinForms::Guna2ComboBox^ dropdownPages;
	private: Guna::UI2::WinForms::Guna2Button^ btnPreviousBook;
	private: Guna::UI2::WinForms::Guna2Button^ btnBookNext;
	private: Guna::UI2::WinForms::Guna2Button^ btnItalic;
	private: Guna::UI2::WinForms::Guna2Button^ btnStrikeOut;
	private: Guna::UI2::WinForms::Guna2Button^ btnClearFilters;
	private: Guna::UI2::WinForms::Guna2Button^ btnThick;
	private: Guna::UI2::WinForms::Guna2Button^ btnUnderline;
	private: Guna::UI2::WinForms::Guna2CircleButton^ btnQuestionBook;
	private: Guna::UI2::WinForms::Guna2Button^ btnHighlight;
	private: System::Windows::Forms::TabPage^ pageTasks;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;

	private: System::Windows::Forms::TabPage^ pageProfile;
	private: System::Windows::Forms::Panel^ panelProfileData;
	private: Guna::UI2::WinForms::Guna2Button^ btnProfileEdit;
	private: System::Windows::Forms::Label^ lblProfileRank;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblRegDate;
	private: System::Windows::Forms::Label^ lblBirth;
	private: System::Windows::Forms::Label^ lblSex;
	private: System::Windows::Forms::Label^ lblSurname;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::PictureBox^ pictureProfile;
	private: System::Windows::Forms::TabPage^ pageStats;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartProductivity;
	private: System::Windows::Forms::TabPage^ pageSettings;
	private: System::Windows::Forms::Label^ label11;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleStyle;
	private: System::Windows::Forms::Label^ label9;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleAlwaysHide;
	private: Guna::UI2::WinForms::Guna2Button^ btnSettingsSave;
	private: Guna::UI2::WinForms::Guna2Button^ btnSettingsCancel;
	private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator1;
	private: Bunifu::UI::WinForms::BunifuLabel^ labelSettings;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel3;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel2;
	private: System::Windows::Forms::Label^ labelBorderBtn;
	private: System::Windows::Forms::Label^ label12;
	private: Guna::UI2::WinForms::Guna2TrackBar^ TrackBorderBtn;
	private: System::Windows::Forms::Label^ labelVolume;
	private: System::Windows::Forms::Label^ label10;
	private: Guna::UI2::WinForms::Guna2TrackBar^ TrackVolume;
	private: System::Windows::Forms::Label^ labelBorderForm;
	private: System::Windows::Forms::Label^ label8;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleGreeting;
	private: Guna::UI2::WinForms::Guna2CircleButton^ btnMessageShadow;
	private: System::Windows::Forms::Label^ label7;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleShadows;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ toggleTransparent;
	private: Guna::UI2::WinForms::Guna2TrackBar^ TrackBorderForm;
	private: System::Windows::Forms::TabPage^ pageProfileEdit;
	private: Guna::UI2::WinForms::Guna2Button^ btnChangePassword;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassNew2;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassNew;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxPassOld;
	private: System::Windows::Forms::Label^ label3;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxCodeNew;
	private: Guna::UI2::WinForms::Guna2Button^ btnCancelChanges;
	private: System::Windows::Forms::LinkLabel^ linkREMOVEACC;
	private: System::Windows::Forms::Label^ lblSexEdit;
	private: System::Windows::Forms::Label^ lblLoginEdit;
	private: System::Windows::Forms::Label^ lblBirthEdit;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelTimer;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckCode;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureBoxCheckMail;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxEmail;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxCode;
	private: Guna::UI2::WinForms::Guna2Button^ buttonSendMail;
	private: Guna::UI2::WinForms::Guna2Button^ buttonCheckCode;
	private: System::Windows::Forms::Label^ lblSurnameEdit;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserSurname;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxUserName;
	private: System::Windows::Forms::Label^ lblNameEdit;
	private: Guna::UI2::WinForms::Guna2Button^ btnProfileSave;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: System::Windows::Forms::PictureBox^ pictureProfileEdit;
	private: System::Windows::Forms::LinkLabel^ linkReMail;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ anim1;
	private: System::Windows::Forms::Label^ lblAnim1;
	private: System::Windows::Forms::TabPage^ anim2;
	private: System::Windows::Forms::Label^ lblAnim2;

	private: System::Windows::Forms::TabPage^ anim4;
	private: Guna::UI2::WinForms::Guna2Button^ btnSync1;

	private: System::Windows::Forms::Label^ lblAnim4;

	private: System::Windows::Forms::TabPage^ anim3;
	private: Guna::UI2::WinForms::Guna2Button^ btnSync;

	private: System::Windows::Forms::Label^ lblSync5;

	private: System::Windows::Forms::Label^ lblSync2;
	private: System::Windows::Forms::Label^ lblSync3;
	private: System::Windows::Forms::Label^ lblSync4;

	private: System::Windows::Forms::Label^ lblSync1;

	private: System::Windows::Forms::Label^ lblSync;

	private: Guna::UI2::WinForms::Guna2Transition^ gunaTransition;
	private: System::Windows::Forms::TabPage^ pageHome;
	private: System::Windows::Forms::Timer^ ANIMFIX;
	private: Bunifu::UI::WinForms::BunifuPages^ PagesTasks;
	private: System::Windows::Forms::TabPage^ TasksMain;
private: System::Windows::Forms::TabPage^ Task1;


	private: Guna::UI2::WinForms::Guna2GradientButton^ btnTask1;


private: Guna::UI2::WinForms::Guna2DragControl^ dragTask;
private: System::Windows::Forms::Label^ TaskTitle;







private: System::Windows::Forms::RichTextBox^ richTask1;
private: Guna::UI2::WinForms::Guna2Panel^ panelTask;
private: Guna::UI2::WinForms::Guna2Button^ btnSaveCode;

private: System::Windows::Forms::Panel^ solutionPanel;
private: System::Windows::Forms::Label^ TaskText;
private: Guna::UI2::WinForms::Guna2Button^ btnTestCode;







	public:

	public:

	public:

	public:

	public:
		MouseEventHandler^ mouseDownHandler;

		mainForm(String^ Login)
		{
			User = Login;

			Fade = gcnew ClassFade(this);
			ranks = gcnew Dictionary<int, String^>();

			ranks->Add(1, "Новичок");
			ranks->Add(2, "Исследователь");
			ranks->Add(3, "Разработчик");
			ranks->Add(4, "Инженер");
			ranks->Add(5, "Мастер");

			InitializeComponent();
			mouseDownHandler = gcnew MouseEventHandler(this, &mainForm::Form_MouseDown);

			if (User == "") {
				MessageError->Show("Передан некорректный логин", "Ошибка загрузки пользователя");
				Application::Exit();
			}
			this->Load += gcnew EventHandler(this, &mainForm::main_Load);
			srand(static_cast<unsigned int>(time(NULL)));
		}

		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MessageError->Show("Форма открыта без пользователя", "Критическая ошибка");
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

	private:

		UI2::WinForms::Guna2MessageDialog^ MessageInfo;
		Guna::UI2::WinForms::Guna2MessageDialog^ MessageWarning;
		Guna::UI2::WinForms::Guna2MessageDialog^ MessageError;
		Guna::UI2::WinForms::Guna2MessageDialog^ MessageQuestion;

		System::Windows::Forms::OpenFileDialog^ openFileDialog1;

		System::Windows::Forms::Timer^ timerReMail;

		Guna::UI2::WinForms::Guna2MessageDialog^ MessageDefault;

		Guna::UI2::WinForms::Guna2CirclePictureBox^ pictureUserBar;

		System::Windows::Forms::Panel^ panelMain;
		System::Windows::Forms::Panel^ panelMenu;
		Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
		Guna::UI2::WinForms::Guna2Separator^ separatorMain;
		Guna::UI2::WinForms::Guna2VSeparator^ separatorMenu;
		Guna::UI2::WinForms::Guna2Button^ btnHome;
		Guna::UI2::WinForms::Guna2Button^ btnBook;
		Guna::UI2::WinForms::Guna2Button^ btnCourses;
		Guna::UI2::WinForms::Guna2Button^ btnMenu;
		System::Windows::Forms::Timer^ timerMenu;
		Guna::UI2::WinForms::Guna2Button^ btnStats;
		Guna::UI2::WinForms::Guna2Button^ btnLogOut;
		Guna::UI2::WinForms::Guna2Button^ btnSettings;
		Guna::UI2::WinForms::Guna2Button^ btnProfile;
		Guna::UI2::WinForms::Guna2PictureBox^ pctrboxLogo;
		System::Windows::Forms::Label^ labelPyWave;
		Guna::UI2::WinForms::Guna2CirclePictureBox^ btnExit;
		Guna::UI2::WinForms::Guna2CirclePictureBox^ btnMinimize;

		Guna::UI2::WinForms::Guna2DragControl^ dragMain;
		System::Windows::Forms::Panel^ panelUserBar;
		System::Windows::Forms::Label^ labelRankBar;
		System::Windows::Forms::Label^ labelNameBar;
		Guna::UI2::WinForms::Guna2RatingStar^ StarsUser;
		System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation3 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation2 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation4 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			Guna::UI2::AnimatorNS::Animation^ animation1 = (gcnew Guna::UI2::AnimatorNS::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->btnMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->separatorMain = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->panelUserBar = (gcnew System::Windows::Forms::Panel());
			this->StarsUser = (gcnew Guna::UI2::WinForms::Guna2RatingStar());
			this->pictureUserBar = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->labelRankBar = (gcnew System::Windows::Forms::Label());
			this->labelNameBar = (gcnew System::Windows::Forms::Label());
			this->labelPyWave = (gcnew System::Windows::Forms::Label());
			this->pctrboxLogo = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
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
			this->dragMain = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->MessageInfo = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageWarning = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageError = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->MessageQuestion = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timerReMail = (gcnew System::Windows::Forms::Timer(this->components));
			this->MessageDefault = (gcnew Guna::UI2::WinForms::Guna2MessageDialog());
			this->timerAnim = (gcnew System::Windows::Forms::Timer(this->components));
			this->anim4 = (gcnew System::Windows::Forms::TabPage());
			this->btnSync1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->lblAnim4 = (gcnew System::Windows::Forms::Label());
			this->anim2 = (gcnew System::Windows::Forms::TabPage());
			this->lblAnim2 = (gcnew System::Windows::Forms::Label());
			this->anim1 = (gcnew System::Windows::Forms::TabPage());
			this->lblAnim1 = (gcnew System::Windows::Forms::Label());
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
			this->pageSettings = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->toggleStyle = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toggleAlwaysHide = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->btnSettingsSave = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnSettingsCancel = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Separator1 = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->labelSettings = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel3 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel2 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->labelBorderBtn = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TrackBorderBtn = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
			this->labelVolume = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TrackVolume = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
			this->labelBorderForm = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->toggleGreeting = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->btnMessageShadow = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->toggleShadows = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->toggleTransparent = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->TrackBorderForm = (gcnew Guna::UI2::WinForms::Guna2TrackBar());
			this->pageStats = (gcnew System::Windows::Forms::TabPage());
			this->chartProductivity = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
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
			this->pageTasks = (gcnew System::Windows::Forms::TabPage());
			this->PagesTasks = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->TasksMain = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->btnTask1 = (gcnew Guna::UI2::WinForms::Guna2GradientButton());
			this->Task1 = (gcnew System::Windows::Forms::TabPage());
			this->TaskTitle = (gcnew System::Windows::Forms::Label());
			this->solutionPanel = (gcnew System::Windows::Forms::Panel());
			this->TaskText = (gcnew System::Windows::Forms::Label());
			this->panelTask = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->btnTestCode = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnSaveCode = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->richTask1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pageBook = (gcnew System::Windows::Forms::TabPage());
			this->Book = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->pgBookStart = (gcnew System::Windows::Forms::TabPage());
			this->richStart = (gcnew System::Windows::Forms::RichTextBox());
			this->Book1 = (gcnew System::Windows::Forms::TabPage());
			this->richBook1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book2 = (gcnew System::Windows::Forms::TabPage());
			this->richBook2 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book3 = (gcnew System::Windows::Forms::TabPage());
			this->richBook3 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book4 = (gcnew System::Windows::Forms::TabPage());
			this->richBook4 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book5 = (gcnew System::Windows::Forms::TabPage());
			this->richBook5 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book6 = (gcnew System::Windows::Forms::TabPage());
			this->richBook6 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book7 = (gcnew System::Windows::Forms::TabPage());
			this->richBook7 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book8 = (gcnew System::Windows::Forms::TabPage());
			this->richBook8 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book9 = (gcnew System::Windows::Forms::TabPage());
			this->richBook9 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book10 = (gcnew System::Windows::Forms::TabPage());
			this->richBook10 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book11 = (gcnew System::Windows::Forms::TabPage());
			this->richBook11 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book12 = (gcnew System::Windows::Forms::TabPage());
			this->richBook12 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book13 = (gcnew System::Windows::Forms::TabPage());
			this->richBook13 = (gcnew System::Windows::Forms::RichTextBox());
			this->Book14 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->myToolbox = (gcnew System::Windows::Forms::Panel());
			this->dropdownPages = (gcnew Guna::UI2::WinForms::Guna2ComboBox());
			this->btnPreviousBook = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnBookNext = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnItalic = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnStrikeOut = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnClearFilters = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnThick = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnUnderline = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnQuestionBook = (gcnew Guna::UI2::WinForms::Guna2CircleButton());
			this->btnHighlight = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->Pages = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->pageHome = (gcnew System::Windows::Forms::TabPage());
			this->anim3 = (gcnew System::Windows::Forms::TabPage());
			this->btnSync = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->lblSync5 = (gcnew System::Windows::Forms::Label());
			this->lblSync2 = (gcnew System::Windows::Forms::Label());
			this->lblSync3 = (gcnew System::Windows::Forms::Label());
			this->lblSync4 = (gcnew System::Windows::Forms::Label());
			this->lblSync1 = (gcnew System::Windows::Forms::Label());
			this->lblSync = (gcnew System::Windows::Forms::Label());
			this->gunaTransition = (gcnew Guna::UI2::WinForms::Guna2Transition());
			this->ANIMFIX = (gcnew System::Windows::Forms::Timer(this->components));
			this->dragTask = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->BeginInit();
			this->panelUserBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUserBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctrboxLogo))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->anim4->SuspendLayout();
			this->anim2->SuspendLayout();
			this->anim1->SuspendLayout();
			this->pageProfileEdit->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfileEdit))->BeginInit();
			this->pageSettings->SuspendLayout();
			this->pageStats->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartProductivity))->BeginInit();
			this->pageProfile->SuspendLayout();
			this->panelProfileData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfile))->BeginInit();
			this->pageTasks->SuspendLayout();
			this->PagesTasks->SuspendLayout();
			this->TasksMain->SuspendLayout();
			this->guna2Panel1->SuspendLayout();
			this->Task1->SuspendLayout();
			this->solutionPanel->SuspendLayout();
			this->panelTask->SuspendLayout();
			this->pageBook->SuspendLayout();
			this->Book->SuspendLayout();
			this->pgBookStart->SuspendLayout();
			this->Book1->SuspendLayout();
			this->Book2->SuspendLayout();
			this->Book3->SuspendLayout();
			this->Book4->SuspendLayout();
			this->Book5->SuspendLayout();
			this->Book6->SuspendLayout();
			this->Book7->SuspendLayout();
			this->Book8->SuspendLayout();
			this->Book9->SuspendLayout();
			this->Book10->SuspendLayout();
			this->Book11->SuspendLayout();
			this->Book12->SuspendLayout();
			this->Book13->SuspendLayout();
			this->Book14->SuspendLayout();
			this->myToolbox->SuspendLayout();
			this->Pages->SuspendLayout();
			this->anim3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelMain->Controls->Add(this->btnExit);
			this->panelMain->Controls->Add(this->btnMinimize);
			this->panelMain->Controls->Add(this->separatorMain);
			this->panelMain->Controls->Add(this->panelUserBar);
			this->panelMain->Controls->Add(this->labelPyWave);
			this->panelMain->Controls->Add(this->pctrboxLogo);
			this->gunaTransition->SetDecoration(this->panelMain, Guna::UI2::AnimatorNS::DecorationType::None);
			this->panelMain->Location = System::Drawing::Point(0, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1600, 80);
			this->panelMain->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition->SetDecoration(this->btnExit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnMinimize, Guna::UI2::AnimatorNS::DecorationType::None);
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
			// separatorMain
			// 
			this->gunaTransition->SetDecoration(this->separatorMain, Guna::UI2::AnimatorNS::DecorationType::None);
			this->separatorMain->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->separatorMain->Location = System::Drawing::Point(0, 79);
			this->separatorMain->Name = L"separatorMain";
			this->separatorMain->Size = System::Drawing::Size(1600, 1);
			this->separatorMain->TabIndex = 0;
			// 
			// panelUserBar
			// 
			this->panelUserBar->Controls->Add(this->StarsUser);
			this->panelUserBar->Controls->Add(this->pictureUserBar);
			this->panelUserBar->Controls->Add(this->labelRankBar);
			this->panelUserBar->Controls->Add(this->labelNameBar);
			this->gunaTransition->SetDecoration(this->panelUserBar, Guna::UI2::AnimatorNS::DecorationType::None);
			this->panelUserBar->Location = System::Drawing::Point(1129, 0);
			this->panelUserBar->Name = L"panelUserBar";
			this->panelUserBar->Size = System::Drawing::Size(407, 80);
			this->panelUserBar->TabIndex = 34;
			this->panelUserBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// StarsUser
			// 
			this->StarsUser->Cursor = System::Windows::Forms::Cursors::Help;
			this->gunaTransition->SetDecoration(this->StarsUser, Guna::UI2::AnimatorNS::DecorationType::None);
			this->StarsUser->Location = System::Drawing::Point(195, 44);
			this->StarsUser->Name = L"StarsUser";
			this->StarsUser->RatingColor = System::Drawing::Color::White;
			this->StarsUser->ReadOnly = true;
			this->StarsUser->Size = System::Drawing::Size(96, 24);
			this->StarsUser->TabIndex = 3;
			this->StarsUser->Click += gcnew System::EventHandler(this, &mainForm::ratingUser_Click);
			// 
			// pictureUserBar
			// 
			this->pictureUserBar->BackColor = System::Drawing::Color::Transparent;
			this->pictureUserBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gunaTransition->SetDecoration(this->pictureUserBar, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pictureUserBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureUserBar.Image")));
			this->pictureUserBar->ImageRotate = 0;
			this->pictureUserBar->Location = System::Drawing::Point(25, 15);
			this->pictureUserBar->Name = L"pictureUserBar";
			this->pictureUserBar->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->pictureUserBar->Size = System::Drawing::Size(50, 50);
			this->pictureUserBar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureUserBar->TabIndex = 35;
			this->pictureUserBar->TabStop = false;
			this->pictureUserBar->UseTransparentBackground = true;
			// 
			// labelRankBar
			// 
			this->labelRankBar->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelRankBar, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelRankBar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRankBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelRankBar->Location = System::Drawing::Point(96, 42);
			this->labelRankBar->Name = L"labelRankBar";
			this->labelRankBar->Size = System::Drawing::Size(99, 24);
			this->labelRankBar->TabIndex = 2;
			this->labelRankBar->Text = L"Уровень";
			this->labelRankBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// labelNameBar
			// 
			this->labelNameBar->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelNameBar, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelNameBar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelNameBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelNameBar->Location = System::Drawing::Point(96, 9);
			this->labelNameBar->Name = L"labelNameBar";
			this->labelNameBar->Size = System::Drawing::Size(151, 24);
			this->labelNameBar->TabIndex = 1;
			this->labelNameBar->Text = L"Пользователь";
			this->labelNameBar->Click += gcnew System::EventHandler(this, &mainForm::btnProfile_Click);
			// 
			// labelPyWave
			// 
			this->labelPyWave->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelPyWave, Guna::UI2::AnimatorNS::DecorationType::None);
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
			// pctrboxLogo
			// 
			this->pctrboxLogo->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition->SetDecoration(this->pctrboxLogo, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pctrboxLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctrboxLogo.Image")));
			this->pctrboxLogo->ImageRotate = 0;
			this->pctrboxLogo->Location = System::Drawing::Point(14, 2);
			this->pctrboxLogo->Name = L"pctrboxLogo";
			this->pctrboxLogo->Size = System::Drawing::Size(72, 80);
			this->pctrboxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pctrboxLogo->TabIndex = 1;
			this->pctrboxLogo->TabStop = false;
			this->pctrboxLogo->UseTransparentBackground = true;
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
			this->gunaTransition->SetDecoration(this->panelMenu, Guna::UI2::AnimatorNS::DecorationType::None);
			this->panelMenu->Location = System::Drawing::Point(0, 80);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(80, 820);
			this->panelMenu->TabIndex = 1;
			// 
			// separatorMenu
			// 
			this->separatorMenu->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition->SetDecoration(this->separatorMenu, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnProfile, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnLogOut, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnSettings, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnMenu, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnCourses, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->btnCourses->Text = L"Задания";
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
			this->gunaTransition->SetDecoration(this->btnBook, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnHome, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnStats, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->MessageWarning->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
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
			// MessageDefault
			// 
			this->MessageDefault->Buttons = Guna::UI2::WinForms::MessageDialogButtons::OK;
			this->MessageDefault->Caption = L"";
			this->MessageDefault->Icon = Guna::UI2::WinForms::MessageDialogIcon::None;
			this->MessageDefault->Parent = this;
			this->MessageDefault->Style = Guna::UI2::WinForms::MessageDialogStyle::Light;
			this->MessageDefault->Text = nullptr;
			// 
			// timerAnim
			// 
			this->timerAnim->Interval = 1000;
			this->timerAnim->Tick += gcnew System::EventHandler(this, &mainForm::timerAnim_Tick);
			// 
			// anim4
			// 
			this->anim4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->anim4->Controls->Add(this->btnSync1);
			this->anim4->Controls->Add(this->lblAnim4);
			this->gunaTransition->SetDecoration(this->anim4, Guna::UI2::AnimatorNS::DecorationType::None);
			this->anim4->Location = System::Drawing::Point(4, 4);
			this->anim4->Name = L"anim4";
			this->anim4->Padding = System::Windows::Forms::Padding(3);
			this->anim4->Size = System::Drawing::Size(1512, 894);
			this->anim4->TabIndex = 12;
			this->anim4->Text = L"anim4";
			// 
			// btnSync1
			// 
			this->btnSync1->Animated = true;
			this->btnSync1->BackColor = System::Drawing::Color::Transparent;
			this->btnSync1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync1->BorderRadius = 20;
			this->btnSync1->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnSync1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnSync1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSync1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSync1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSync1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSync1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSync1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSync1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync1->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync1->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSync1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync1->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image28")));
			this->btnSync1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSync1.Image")));
			this->btnSync1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSync1->Location = System::Drawing::Point(1323, 753);
			this->btnSync1->Name = L"btnSync1";
			this->btnSync1->Size = System::Drawing::Size(181, 39);
			this->btnSync1->TabIndex = 50;
			this->btnSync1->Text = L"Продолжить";
			this->btnSync1->TextOffset = System::Drawing::Point(10, 0);
			this->btnSync1->UseTransparentBackground = true;
			this->btnSync1->Visible = false;
			this->btnSync1->Click += gcnew System::EventHandler(this, &mainForm::btnSync1_Click);
			// 
			// lblAnim4
			// 
			this->gunaTransition->SetDecoration(this->lblAnim4, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblAnim4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAnim4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblAnim4->Location = System::Drawing::Point(142, 249);
			this->lblAnim4->Name = L"lblAnim4";
			this->lblAnim4->Size = System::Drawing::Size(1310, 305);
			this->lblAnim4->TabIndex = 11;
			this->lblAnim4->Text = resources->GetString(L"lblAnim4.Text");
			// 
			// anim2
			// 
			this->anim2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->anim2->Controls->Add(this->lblAnim2);
			this->gunaTransition->SetDecoration(this->anim2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->anim2->Location = System::Drawing::Point(4, 4);
			this->anim2->Name = L"anim2";
			this->anim2->Padding = System::Windows::Forms::Padding(3);
			this->anim2->Size = System::Drawing::Size(1512, 894);
			this->anim2->TabIndex = 9;
			this->anim2->Text = L"anim2";
			// 
			// lblAnim2
			// 
			this->lblAnim2->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblAnim2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblAnim2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAnim2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblAnim2->Location = System::Drawing::Point(172, 370);
			this->lblAnim2->Name = L"lblAnim2";
			this->lblAnim2->Size = System::Drawing::Size(1218, 58);
			this->lblAnim2->TabIndex = 3;
			this->lblAnim2->Text = L"Перед началом ознакомьтесь с политикой задач";
			// 
			// anim1
			// 
			this->anim1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->anim1->Controls->Add(this->lblAnim1);
			this->gunaTransition->SetDecoration(this->anim1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->anim1->Location = System::Drawing::Point(4, 4);
			this->anim1->Name = L"anim1";
			this->anim1->Padding = System::Windows::Forms::Padding(3);
			this->anim1->Size = System::Drawing::Size(1512, 894);
			this->anim1->TabIndex = 8;
			this->anim1->Text = L"anim1";
			// 
			// lblAnim1
			// 
			this->lblAnim1->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblAnim1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblAnim1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAnim1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblAnim1->Location = System::Drawing::Point(136, 370);
			this->lblAnim1->Name = L"lblAnim1";
			this->lblAnim1->Size = System::Drawing::Size(1280, 58);
			this->lblAnim1->TabIndex = 2;
			this->lblAnim1->Text = L"Приветствуем вас на странице заданий, UserName!";
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
			this->gunaTransition->SetDecoration(this->pageProfileEdit, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageProfileEdit->Location = System::Drawing::Point(4, 4);
			this->pageProfileEdit->Name = L"pageProfileEdit";
			this->pageProfileEdit->Size = System::Drawing::Size(1512, 894);
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
			this->gunaTransition->SetDecoration(this->btnChangePassword, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->btnChangePassword->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image22")));
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
			this->gunaTransition->SetDecoration(this->textBoxPassNew2, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->textBoxPassNew, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->textBoxPassOld, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->label3, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->textBoxCodeNew, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnCancelChanges, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->btnCancelChanges->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image23")));
			this->btnCancelChanges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelChanges.Image")));
			this->btnCancelChanges->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnCancelChanges->ImageSize = System::Drawing::Size(25, 25);
			this->btnCancelChanges->Location = System::Drawing::Point(1166, 753);
			this->btnCancelChanges->Name = L"btnCancelChanges";
			this->btnCancelChanges->Size = System::Drawing::Size(154, 39);
			this->btnCancelChanges->TabIndex = 70;
			this->btnCancelChanges->Text = L"Назад";
			this->btnCancelChanges->TextOffset = System::Drawing::Point(10, 0);
			this->btnCancelChanges->UseTransparentBackground = true;
			this->btnCancelChanges->Click += gcnew System::EventHandler(this, &mainForm::btnCancelChanges_Click);
			// 
			// linkREMOVEACC
			// 
			this->linkREMOVEACC->AutoSize = true;
			this->gunaTransition->SetDecoration(this->linkREMOVEACC, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblSexEdit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblLoginEdit, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblLoginEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLoginEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblLoginEdit->Location = System::Drawing::Point(749, 9);
			this->lblLoginEdit->Name = L"lblLoginEdit";
			this->lblLoginEdit->Size = System::Drawing::Size(111, 42);
			this->lblLoginEdit->TabIndex = 67;
			this->lblLoginEdit->Text = L"Freak";
			// 
			// lblBirthEdit
			// 
			this->lblBirthEdit->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblBirthEdit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->label4, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->labelTimer, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->pictureBoxCheckCode, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->pictureBoxCheckMail, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->textBoxEmail, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->textBoxEmail->TextChanged += gcnew System::EventHandler(this, &mainForm::textBoxEmail_TextChanged);
			this->textBoxEmail->Click += gcnew System::EventHandler(this, &mainForm::textBoxEmail_Click);
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
			this->gunaTransition->SetDecoration(this->textBoxCode, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->buttonSendMail, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->buttonSendMail->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image24")));
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
			this->gunaTransition->SetDecoration(this->buttonCheckCode, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->buttonCheckCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image25")));
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
			this->gunaTransition->SetDecoration(this->lblSurnameEdit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->textBoxUserSurname, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->textBoxUserSurname->TextChanged += gcnew System::EventHandler(this, &mainForm::textBoxUserSurname_TextChanged);
			this->textBoxUserSurname->Click += gcnew System::EventHandler(this, &mainForm::textBoxUserSurname_Click);
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
			this->gunaTransition->SetDecoration(this->textBoxUserName, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->textBoxUserName->TextChanged += gcnew System::EventHandler(this, &mainForm::textBoxUserName_TextChanged);
			this->textBoxUserName->Click += gcnew System::EventHandler(this, &mainForm::textBoxUserName_Click);
			// 
			// lblNameEdit
			// 
			this->lblNameEdit->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblNameEdit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->btnProfileSave, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->btnProfileSave->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image26")));
			this->btnProfileSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProfileSave.Image")));
			this->btnProfileSave->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnProfileSave->Location = System::Drawing::Point(1323, 753);
			this->btnProfileSave->Name = L"btnProfileSave";
			this->btnProfileSave->Size = System::Drawing::Size(181, 39);
			this->btnProfileSave->TabIndex = 48;
			this->btnProfileSave->Text = L"Сохранить";
			this->btnProfileSave->TextOffset = System::Drawing::Point(10, 0);
			this->btnProfileSave->UseTransparentBackground = true;
			this->btnProfileSave->Click += gcnew System::EventHandler(this, &mainForm::btnProfileSave_Click);
			// 
			// guna2Button2
			// 
			this->guna2Button2->Animated = true;
			this->guna2Button2->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button2->BorderRadius = 20;
			this->guna2Button2->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->guna2Button2, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->guna2Button2->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image27")));
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
			this->guna2Button2->Click += gcnew System::EventHandler(this, &mainForm::buttonUploadImage_Click);
			// 
			// pictureProfileEdit
			// 
			this->pictureProfileEdit->BackColor = System::Drawing::Color::Transparent;
			this->pictureProfileEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gunaTransition->SetDecoration(this->pictureProfileEdit, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pictureProfileEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureProfileEdit.Image")));
			this->pictureProfileEdit->Location = System::Drawing::Point(629, 54);
			this->pictureProfileEdit->Name = L"pictureProfileEdit";
			this->pictureProfileEdit->Size = System::Drawing::Size(200, 200);
			this->pictureProfileEdit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureProfileEdit->TabIndex = 61;
			this->pictureProfileEdit->TabStop = false;
			this->pictureProfileEdit->Click += gcnew System::EventHandler(this, &mainForm::buttonUploadImage_Click);
			// 
			// linkReMail
			// 
			this->linkReMail->AutoSize = true;
			this->gunaTransition->SetDecoration(this->linkReMail, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->label2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(478, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(529, 19);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Рекомендуем загружать изображения в формате 4:3 (квадрат)";
			this->label2->Visible = false;
			// 
			// pageSettings
			// 
			this->pageSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageSettings->Controls->Add(this->label11);
			this->pageSettings->Controls->Add(this->toggleStyle);
			this->pageSettings->Controls->Add(this->label9);
			this->pageSettings->Controls->Add(this->toggleAlwaysHide);
			this->pageSettings->Controls->Add(this->btnSettingsSave);
			this->pageSettings->Controls->Add(this->btnSettingsCancel);
			this->pageSettings->Controls->Add(this->guna2Separator1);
			this->pageSettings->Controls->Add(this->labelSettings);
			this->pageSettings->Controls->Add(this->bunifuLabel3);
			this->pageSettings->Controls->Add(this->bunifuLabel2);
			this->pageSettings->Controls->Add(this->labelBorderBtn);
			this->pageSettings->Controls->Add(this->label12);
			this->pageSettings->Controls->Add(this->TrackBorderBtn);
			this->pageSettings->Controls->Add(this->labelVolume);
			this->pageSettings->Controls->Add(this->label10);
			this->pageSettings->Controls->Add(this->TrackVolume);
			this->pageSettings->Controls->Add(this->labelBorderForm);
			this->pageSettings->Controls->Add(this->label8);
			this->pageSettings->Controls->Add(this->toggleGreeting);
			this->pageSettings->Controls->Add(this->btnMessageShadow);
			this->pageSettings->Controls->Add(this->label7);
			this->pageSettings->Controls->Add(this->toggleShadows);
			this->pageSettings->Controls->Add(this->label6);
			this->pageSettings->Controls->Add(this->label5);
			this->pageSettings->Controls->Add(this->toggleTransparent);
			this->pageSettings->Controls->Add(this->TrackBorderForm);
			this->gunaTransition->SetDecoration(this->pageSettings, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageSettings->Location = System::Drawing::Point(4, 4);
			this->pageSettings->Name = L"pageSettings";
			this->pageSettings->Size = System::Drawing::Size(1512, 894);
			this->pageSettings->TabIndex = 5;
			this->pageSettings->Text = L"pageSettings";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label11, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(78, 281);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(206, 24);
			this->label11->TabIndex = 95;
			this->label11->Text = L"Стиль PythonWave";
			// 
			// toggleStyle
			// 
			this->toggleStyle->Animated = true;
			this->toggleStyle->Checked = true;
			this->toggleStyle->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggleStyle->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggleStyle->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleStyle->CheckedState->InnerColor = System::Drawing::Color::White;
			this->gunaTransition->SetDecoration(this->toggleStyle, Guna::UI2::AnimatorNS::DecorationType::None);
			this->toggleStyle->Location = System::Drawing::Point(37, 285);
			this->toggleStyle->Name = L"toggleStyle";
			this->toggleStyle->Size = System::Drawing::Size(35, 20);
			this->toggleStyle->TabIndex = 94;
			this->toggleStyle->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleStyle->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleStyle->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleStyle->UncheckedState->InnerColor = System::Drawing::Color::White;
			this->toggleStyle->CheckedChanged += gcnew System::EventHandler(this, &mainForm::toggleStyle_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label9, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(621, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(291, 24);
			this->label9->TabIndex = 93;
			this->label9->Text = L"Всегда сворачивать меню";
			// 
			// toggleAlwaysHide
			// 
			this->toggleAlwaysHide->Animated = true;
			this->toggleAlwaysHide->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggleAlwaysHide->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggleAlwaysHide->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleAlwaysHide->CheckedState->InnerColor = System::Drawing::Color::White;
			this->gunaTransition->SetDecoration(this->toggleAlwaysHide, Guna::UI2::AnimatorNS::DecorationType::None);
			this->toggleAlwaysHide->Location = System::Drawing::Point(582, 178);
			this->toggleAlwaysHide->Name = L"toggleAlwaysHide";
			this->toggleAlwaysHide->Size = System::Drawing::Size(35, 20);
			this->toggleAlwaysHide->TabIndex = 92;
			this->toggleAlwaysHide->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleAlwaysHide->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleAlwaysHide->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleAlwaysHide->UncheckedState->InnerColor = System::Drawing::Color::White;
			this->toggleAlwaysHide->CheckedChanged += gcnew System::EventHandler(this, &mainForm::toggleAlwaysHide_CheckedChanged);
			// 
			// btnSettingsSave
			// 
			this->btnSettingsSave->Animated = true;
			this->btnSettingsSave->BackColor = System::Drawing::Color::Transparent;
			this->btnSettingsSave->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsSave->BorderRadius = 20;
			this->btnSettingsSave->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnSettingsSave, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnSettingsSave->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSettingsSave->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSettingsSave->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSettingsSave->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSettingsSave->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSettingsSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSettingsSave->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsSave->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsSave->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSettingsSave->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsSave->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image20")));
			this->btnSettingsSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettingsSave.Image")));
			this->btnSettingsSave->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSettingsSave->Location = System::Drawing::Point(1328, 753);
			this->btnSettingsSave->Name = L"btnSettingsSave";
			this->btnSettingsSave->Size = System::Drawing::Size(181, 39);
			this->btnSettingsSave->TabIndex = 91;
			this->btnSettingsSave->Text = L"Сохранить";
			this->btnSettingsSave->TextOffset = System::Drawing::Point(10, 0);
			this->btnSettingsSave->UseTransparentBackground = true;
			this->btnSettingsSave->Click += gcnew System::EventHandler(this, &mainForm::btnSettingsSave_Click);
			// 
			// btnSettingsCancel
			// 
			this->btnSettingsCancel->Animated = true;
			this->btnSettingsCancel->BackColor = System::Drawing::Color::Transparent;
			this->btnSettingsCancel->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsCancel->BorderRadius = 20;
			this->btnSettingsCancel->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnSettingsCancel, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnSettingsCancel->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSettingsCancel->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSettingsCancel->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSettingsCancel->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSettingsCancel->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSettingsCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSettingsCancel->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsCancel->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsCancel->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSettingsCancel->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSettingsCancel->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image21")));
			this->btnSettingsCancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettingsCancel.Image")));
			this->btnSettingsCancel->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSettingsCancel->ImageSize = System::Drawing::Size(25, 25);
			this->btnSettingsCancel->Location = System::Drawing::Point(1166, 753);
			this->btnSettingsCancel->Name = L"btnSettingsCancel";
			this->btnSettingsCancel->Size = System::Drawing::Size(154, 39);
			this->btnSettingsCancel->TabIndex = 90;
			this->btnSettingsCancel->Text = L"Отмена";
			this->btnSettingsCancel->TextOffset = System::Drawing::Point(10, 0);
			this->btnSettingsCancel->UseTransparentBackground = true;
			this->btnSettingsCancel->Click += gcnew System::EventHandler(this, &mainForm::btnCancelSettings_Click);
			// 
			// guna2Separator1
			// 
			this->gunaTransition->SetDecoration(this->guna2Separator1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->guna2Separator1->Location = System::Drawing::Point(-5, 46);
			this->guna2Separator1->Name = L"guna2Separator1";
			this->guna2Separator1->Size = System::Drawing::Size(1521, 10);
			this->guna2Separator1->TabIndex = 88;
			// 
			// labelSettings
			// 
			this->labelSettings->AllowParentOverrides = false;
			this->labelSettings->AutoEllipsis = true;
			this->labelSettings->Cursor = System::Windows::Forms::Cursors::Default;
			this->labelSettings->CursorType = System::Windows::Forms::Cursors::Default;
			this->gunaTransition->SetDecoration(this->labelSettings, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelSettings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->labelSettings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelSettings->Location = System::Drawing::Point(671, 3);
			this->labelSettings->Name = L"labelSettings";
			this->labelSettings->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelSettings->Size = System::Drawing::Size(182, 40);
			this->labelSettings->TabIndex = 87;
			this->labelSettings->Text = L"Настройки";
			this->labelSettings->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->labelSettings->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel3
			// 
			this->bunifuLabel3->AllowParentOverrides = false;
			this->bunifuLabel3->AutoEllipsis = true;
			this->bunifuLabel3->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel3->CursorType = System::Windows::Forms::Cursors::Default;
			this->gunaTransition->SetDecoration(this->bunifuLabel3, Guna::UI2::AnimatorNS::DecorationType::None);
			this->bunifuLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuLabel3->Location = System::Drawing::Point(584, 117);
			this->bunifuLabel3->Name = L"bunifuLabel3";
			this->bunifuLabel3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel3->Size = System::Drawing::Size(120, 40);
			this->bunifuLabel3->TabIndex = 86;
			this->bunifuLabel3->Text = L"Другое";
			this->bunifuLabel3->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->bunifuLabel3->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel2
			// 
			this->bunifuLabel2->AllowParentOverrides = false;
			this->bunifuLabel2->AutoEllipsis = true;
			this->bunifuLabel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel2->CursorType = System::Windows::Forms::Cursors::Default;
			this->gunaTransition->SetDecoration(this->bunifuLabel2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->bunifuLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuLabel2->Location = System::Drawing::Point(37, 117);
			this->bunifuLabel2->Name = L"bunifuLabel2";
			this->bunifuLabel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel2->Size = System::Drawing::Size(215, 40);
			this->bunifuLabel2->TabIndex = 71;
			this->bunifuLabel2->Text = L"Внешний вид";
			this->bunifuLabel2->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->bunifuLabel2->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// labelBorderBtn
			// 
			this->labelBorderBtn->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelBorderBtn, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelBorderBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBorderBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelBorderBtn->Location = System::Drawing::Point(224, 417);
			this->labelBorderBtn->Name = L"labelBorderBtn";
			this->labelBorderBtn->Size = System::Drawing::Size(28, 21);
			this->labelBorderBtn->TabIndex = 85;
			this->labelBorderBtn->Text = L"20";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label12, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(33, 390);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(260, 24);
			this->label12->TabIndex = 84;
			this->label12->Text = L"Закругленность кнопок";
			// 
			// TrackBorderBtn
			// 
			this->gunaTransition->SetDecoration(this->TrackBorderBtn, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TrackBorderBtn->LargeChange = 2;
			this->TrackBorderBtn->Location = System::Drawing::Point(37, 417);
			this->TrackBorderBtn->Maximum = 20;
			this->TrackBorderBtn->Name = L"TrackBorderBtn";
			this->TrackBorderBtn->Size = System::Drawing::Size(180, 23);
			this->TrackBorderBtn->TabIndex = 83;
			this->TrackBorderBtn->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TrackBorderBtn->Value = 20;
			this->TrackBorderBtn->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &mainForm::TrackBorderBtn_Scroll);
			// 
			// labelVolume
			// 
			this->labelVolume->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelVolume, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelVolume->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelVolume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelVolume->Location = System::Drawing::Point(773, 237);
			this->labelVolume->Name = L"labelVolume";
			this->labelVolume->Size = System::Drawing::Size(28, 21);
			this->labelVolume->TabIndex = 82;
			this->labelVolume->Text = L"50";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label10, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(581, 213);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 24);
			this->label10->TabIndex = 81;
			this->label10->Text = L"Громкость";
			// 
			// TrackVolume
			// 
			this->gunaTransition->SetDecoration(this->TrackVolume, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TrackVolume->LargeChange = 2;
			this->TrackVolume->Location = System::Drawing::Point(585, 237);
			this->TrackVolume->Name = L"TrackVolume";
			this->TrackVolume->Size = System::Drawing::Size(180, 23);
			this->TrackVolume->TabIndex = 80;
			this->TrackVolume->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TrackVolume->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &mainForm::TrackVolume_Scroll);
			// 
			// labelBorderForm
			// 
			this->labelBorderForm->AutoSize = true;
			this->gunaTransition->SetDecoration(this->labelBorderForm, Guna::UI2::AnimatorNS::DecorationType::None);
			this->labelBorderForm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBorderForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelBorderForm->Location = System::Drawing::Point(224, 364);
			this->labelBorderForm->Name = L"labelBorderForm";
			this->labelBorderForm->Size = System::Drawing::Size(28, 21);
			this->labelBorderForm->TabIndex = 79;
			this->labelBorderForm->Text = L"25";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label8, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(76, 245);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(255, 24);
			this->label8->TabIndex = 78;
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
			this->gunaTransition->SetDecoration(this->toggleGreeting, Guna::UI2::AnimatorNS::DecorationType::None);
			this->toggleGreeting->Location = System::Drawing::Point(37, 249);
			this->toggleGreeting->Name = L"toggleGreeting";
			this->toggleGreeting->Size = System::Drawing::Size(35, 20);
			this->toggleGreeting->TabIndex = 77;
			this->toggleGreeting->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleGreeting->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleGreeting->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleGreeting->UncheckedState->InnerColor = System::Drawing::Color::White;
			this->toggleGreeting->CheckedChanged += gcnew System::EventHandler(this, &mainForm::toggleGreeting_CheckedChanged);
			// 
			// btnMessageShadow
			// 
			this->btnMessageShadow->BackColor = System::Drawing::Color::Transparent;
			this->btnMessageShadow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMessageShadow.BackgroundImage")));
			this->btnMessageShadow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaTransition->SetDecoration(this->btnMessageShadow, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnMessageShadow->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnMessageShadow->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnMessageShadow->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnMessageShadow->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnMessageShadow->FillColor = System::Drawing::Color::Transparent;
			this->btnMessageShadow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btnMessageShadow->ForeColor = System::Drawing::Color::White;
			this->btnMessageShadow->Location = System::Drawing::Point(249, 211);
			this->btnMessageShadow->Name = L"btnMessageShadow";
			this->btnMessageShadow->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->btnMessageShadow->Size = System::Drawing::Size(26, 25);
			this->btnMessageShadow->TabIndex = 76;
			this->btnMessageShadow->Click += gcnew System::EventHandler(this, &mainForm::btnMessageShadow_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label7, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(76, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 24);
			this->label7->TabIndex = 75;
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
			this->gunaTransition->SetDecoration(this->toggleShadows, Guna::UI2::AnimatorNS::DecorationType::None);
			this->toggleShadows->Location = System::Drawing::Point(37, 213);
			this->toggleShadows->Name = L"toggleShadows";
			this->toggleShadows->Size = System::Drawing::Size(35, 20);
			this->toggleShadows->TabIndex = 74;
			this->toggleShadows->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleShadows->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleShadows->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleShadows->UncheckedState->InnerColor = System::Drawing::Color::White;
			this->toggleShadows->CheckedChanged += gcnew System::EventHandler(this, &mainForm::toggleShadows_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label6, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(33, 337);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(247, 24);
			this->label6->TabIndex = 73;
			this->label6->Text = L"Закругленность краев";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->gunaTransition->SetDecoration(this->label5, Guna::UI2::AnimatorNS::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(76, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(446, 24);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Прозрачность при перетаскивании окна";
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
			this->gunaTransition->SetDecoration(this->toggleTransparent, Guna::UI2::AnimatorNS::DecorationType::None);
			this->toggleTransparent->Location = System::Drawing::Point(37, 178);
			this->toggleTransparent->Name = L"toggleTransparent";
			this->toggleTransparent->Size = System::Drawing::Size(35, 20);
			this->toggleTransparent->TabIndex = 70;
			this->toggleTransparent->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleTransparent->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->toggleTransparent->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->toggleTransparent->UncheckedState->InnerColor = System::Drawing::Color::White;
			this->toggleTransparent->CheckedChanged += gcnew System::EventHandler(this, &mainForm::toggleTransparent_CheckedChanged);
			// 
			// TrackBorderForm
			// 
			this->gunaTransition->SetDecoration(this->TrackBorderForm, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TrackBorderForm->LargeChange = 2;
			this->TrackBorderForm->Location = System::Drawing::Point(37, 364);
			this->TrackBorderForm->Maximum = 60;
			this->TrackBorderForm->Name = L"TrackBorderForm";
			this->TrackBorderForm->Size = System::Drawing::Size(180, 23);
			this->TrackBorderForm->TabIndex = 69;
			this->TrackBorderForm->ThumbColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TrackBorderForm->Value = 25;
			this->TrackBorderForm->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &mainForm::TrackBorderForm_Scroll);
			// 
			// pageStats
			// 
			this->pageStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageStats->Controls->Add(this->chartProductivity);
			this->gunaTransition->SetDecoration(this->pageStats, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageStats->Location = System::Drawing::Point(4, 4);
			this->pageStats->Name = L"pageStats";
			this->pageStats->Size = System::Drawing::Size(1512, 894);
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
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->BorderColor = System::Drawing::Color::Empty;
			chartArea1->Name = L"ChartArea1";
			this->chartProductivity->ChartAreas->Add(chartArea1);
			this->gunaTransition->SetDecoration(this->chartProductivity, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->chartProductivity->Location = System::Drawing::Point(12, 12);
			this->chartProductivity->Name = L"chartProductivity";
			this->chartProductivity->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Cross;
			series1->BorderWidth = 10;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ShadowColor = System::Drawing::Color::Gray;
			series1->ShadowOffset = 5;
			series1->YValuesPerPoint = 2;
			this->chartProductivity->Series->Add(series1);
			this->chartProductivity->Size = System::Drawing::Size(660, 541);
			this->chartProductivity->TabIndex = 0;
			this->chartProductivity->Text = L"chartProductivity";
			// 
			// pageProfile
			// 
			this->pageProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageProfile->Controls->Add(this->panelProfileData);
			this->pageProfile->Controls->Add(this->pictureProfile);
			this->gunaTransition->SetDecoration(this->pageProfile, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageProfile->Location = System::Drawing::Point(4, 4);
			this->pageProfile->Name = L"pageProfile";
			this->pageProfile->Size = System::Drawing::Size(1512, 894);
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
			this->gunaTransition->SetDecoration(this->panelProfileData, Guna::UI2::AnimatorNS::DecorationType::None);
			this->panelProfileData->Location = System::Drawing::Point(343, 3);
			this->panelProfileData->Name = L"panelProfileData";
			this->panelProfileData->Size = System::Drawing::Size(1166, 813);
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
			this->gunaTransition->SetDecoration(this->btnProfileEdit, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->btnProfileEdit->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image19")));
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
			this->gunaTransition->SetDecoration(this->lblProfileRank, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblEmail, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblRegDate, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblBirth, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblSex, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblSurname, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblName, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->gunaTransition->SetDecoration(this->lblLogin, Guna::UI2::AnimatorNS::DecorationType::None);
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
			this->pictureProfile->BackColor = System::Drawing::Color::Transparent;
			this->pictureProfile->Cursor = System::Windows::Forms::Cursors::Default;
			this->gunaTransition->SetDecoration(this->pictureProfile, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pictureProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureProfile.Image")));
			this->pictureProfile->Location = System::Drawing::Point(21, 26);
			this->pictureProfile->Name = L"pictureProfile";
			this->pictureProfile->Size = System::Drawing::Size(300, 300);
			this->pictureProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureProfile->TabIndex = 43;
			this->pictureProfile->TabStop = false;
			// 
			// pageTasks
			// 
			this->pageTasks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageTasks->Controls->Add(this->PagesTasks);
			this->gunaTransition->SetDecoration(this->pageTasks, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageTasks->Location = System::Drawing::Point(4, 4);
			this->pageTasks->Name = L"pageTasks";
			this->pageTasks->Size = System::Drawing::Size(1512, 894);
			this->pageTasks->TabIndex = 2;
			this->pageTasks->Text = L"pageTasks";
			// 
			// PagesTasks
			// 
			this->PagesTasks->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->PagesTasks->AllowTransitions = true;
			this->PagesTasks->Controls->Add(this->TasksMain);
			this->PagesTasks->Controls->Add(this->Task1);
			this->gunaTransition->SetDecoration(this->PagesTasks, Guna::UI2::AnimatorNS::DecorationType::None);
			this->PagesTasks->Location = System::Drawing::Point(0, 0);
			this->PagesTasks->Multiline = true;
			this->PagesTasks->Name = L"PagesTasks";
			this->PagesTasks->Page = this->Task1;
			this->PagesTasks->PageIndex = 1;
			this->PagesTasks->PageName = L"Task1";
			this->PagesTasks->PageTitle = L"Task1";
			this->PagesTasks->SelectedIndex = 0;
			this->PagesTasks->Size = System::Drawing::Size(1512, 868);
			this->PagesTasks->TabIndex = 1;
			animation3->AnimateOnlyDifferences = false;
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
			animation3->TimeCoeff = 0;
			animation3->TransparencyCoeff = 0;
			this->PagesTasks->Transition = animation3;
			this->PagesTasks->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
			// 
			// TasksMain
			// 
			this->TasksMain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->TasksMain->Controls->Add(this->guna2Panel1);
			this->gunaTransition->SetDecoration(this->TasksMain, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TasksMain->Location = System::Drawing::Point(4, 4);
			this->TasksMain->Name = L"TasksMain";
			this->TasksMain->Padding = System::Windows::Forms::Padding(3);
			this->TasksMain->Size = System::Drawing::Size(1504, 842);
			this->TasksMain->TabIndex = 0;
			this->TasksMain->Text = L"TasksMain";
			// 
			// guna2Panel1
			// 
			this->guna2Panel1->Controls->Add(this->btnTask1);
			this->gunaTransition->SetDecoration(this->guna2Panel1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->guna2Panel1->Location = System::Drawing::Point(0, 0);
			this->guna2Panel1->Name = L"guna2Panel1";
			this->guna2Panel1->Size = System::Drawing::Size(1512, 816);
			this->guna2Panel1->TabIndex = 0;
			// 
			// btnTask1
			// 
			this->btnTask1->BackColor = System::Drawing::Color::Transparent;
			this->btnTask1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTask1.BackgroundImage")));
			this->btnTask1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnTask1->CustomImages->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image16")));
			this->btnTask1->CustomImages->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaTransition->SetDecoration(this->btnTask1, Guna::UI2::AnimatorNS::DecorationType::BottomMirror);
			this->btnTask1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnTask1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnTask1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnTask1->DisabledState->FillColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnTask1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnTask1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->btnTask1->FillColor2 = System::Drawing::Color::DarkSlateGray;
			this->btnTask1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->btnTask1->ForeColor = System::Drawing::Color::White;
			this->btnTask1->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->btnTask1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTask1.Image")));
			this->btnTask1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnTask1->ImageOffset = System::Drawing::Point(-600, 250);
			this->btnTask1->ImageSize = System::Drawing::Size(1500, 500);
			this->btnTask1->Location = System::Drawing::Point(15, 15);
			this->btnTask1->Name = L"btnTask1";
			this->btnTask1->Size = System::Drawing::Size(300, 250);
			this->btnTask1->TabIndex = 1;
			this->btnTask1->Text = L"Простое сложение чисел";
			this->btnTask1->TextOffset = System::Drawing::Point(0, -70);
			this->btnTask1->Tile = true;
			this->btnTask1->Click += gcnew System::EventHandler(this, &mainForm::btnTask1_Click);
			// 
			// Task1
			// 
			this->Task1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Task1->Controls->Add(this->TaskTitle);
			this->Task1->Controls->Add(this->solutionPanel);
			this->gunaTransition->SetDecoration(this->Task1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Task1->Location = System::Drawing::Point(4, 4);
			this->Task1->Name = L"Task1";
			this->Task1->Padding = System::Windows::Forms::Padding(3);
			this->Task1->Size = System::Drawing::Size(1504, 842);
			this->Task1->TabIndex = 1;
			this->Task1->Text = L"Task1";
			// 
			// TaskTitle
			// 
			this->TaskTitle->AutoSize = true;
			this->TaskTitle->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition->SetDecoration(this->TaskTitle, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TaskTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TaskTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->TaskTitle->Location = System::Drawing::Point(6, 16);
			this->TaskTitle->Name = L"TaskTitle";
			this->TaskTitle->Size = System::Drawing::Size(1170, 58);
			this->TaskTitle->TabIndex = 4;
			this->TaskTitle->Text = L"Задача B сложности. Простое сложение чисел";
			// 
			// solutionPanel
			// 
			this->solutionPanel->AutoScroll = true;
			this->solutionPanel->Controls->Add(this->TaskText);
			this->solutionPanel->Controls->Add(this->panelTask);
			this->gunaTransition->SetDecoration(this->solutionPanel, Guna::UI2::AnimatorNS::DecorationType::None);
			this->solutionPanel->Location = System::Drawing::Point(0, 0);
			this->solutionPanel->Name = L"solutionPanel";
			this->solutionPanel->Size = System::Drawing::Size(1504, 812);
			this->solutionPanel->TabIndex = 5;
			// 
			// TaskText
			// 
			this->TaskText->AutoSize = true;
			this->TaskText->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition->SetDecoration(this->TaskText, Guna::UI2::AnimatorNS::DecorationType::None);
			this->TaskText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TaskText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->TaskText->Location = System::Drawing::Point(6, 91);
			this->TaskText->Name = L"TaskText";
			this->TaskText->Size = System::Drawing::Size(955, 78);
			this->TaskText->TabIndex = 5;
			this->TaskText->Text = L"Вам дана функция, в которую входят две переменные. \r\nВаша задача вернуть из них с"
				L"умму этих двух переменных";
			this->TaskText->TextChanged += gcnew System::EventHandler(this, &mainForm::TaskText_TextChanged);
			// 
			// panelTask
			// 
			this->panelTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->panelTask->Controls->Add(this->btnTestCode);
			this->panelTask->Controls->Add(this->btnSaveCode);
			this->panelTask->Controls->Add(this->richTask1);
			this->gunaTransition->SetDecoration(this->panelTask, Guna::UI2::AnimatorNS::DecorationType::None);
			this->panelTask->Location = System::Drawing::Point(13, 242);
			this->panelTask->Name = L"panelTask";
			this->panelTask->Size = System::Drawing::Size(852, 330);
			this->panelTask->TabIndex = 3;
			// 
			// btnTestCode
			// 
			this->btnTestCode->Animated = true;
			this->btnTestCode->BackColor = System::Drawing::Color::Transparent;
			this->btnTestCode->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnTestCode->BorderRadius = 20;
			this->btnTestCode->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnTestCode, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnTestCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnTestCode->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnTestCode->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnTestCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnTestCode->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnTestCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnTestCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnTestCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnTestCode->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnTestCode->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnTestCode->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnTestCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image17")));
			this->btnTestCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTestCode.Image")));
			this->btnTestCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnTestCode->Location = System::Drawing::Point(513, 284);
			this->btnTestCode->Name = L"btnTestCode";
			this->btnTestCode->Size = System::Drawing::Size(165, 39);
			this->btnTestCode->TabIndex = 50;
			this->btnTestCode->Text = L"Проверить";
			this->btnTestCode->TextOffset = System::Drawing::Point(10, 0);
			this->btnTestCode->UseTransparentBackground = true;
			this->btnTestCode->Click += gcnew System::EventHandler(this, &mainForm::btnTestCode_Click);
			// 
			// btnSaveCode
			// 
			this->btnSaveCode->Animated = true;
			this->btnSaveCode->BackColor = System::Drawing::Color::Transparent;
			this->btnSaveCode->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSaveCode->BorderRadius = 20;
			this->btnSaveCode->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnSaveCode, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnSaveCode->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSaveCode->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSaveCode->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSaveCode->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSaveCode->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSaveCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSaveCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSaveCode->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSaveCode->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSaveCode->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSaveCode->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSaveCode->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image18")));
			this->btnSaveCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveCode.Image")));
			this->btnSaveCode->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSaveCode->Location = System::Drawing::Point(684, 284);
			this->btnSaveCode->Name = L"btnSaveCode";
			this->btnSaveCode->Size = System::Drawing::Size(163, 39);
			this->btnSaveCode->TabIndex = 49;
			this->btnSaveCode->Text = L"Сохранить";
			this->btnSaveCode->TextOffset = System::Drawing::Point(10, 0);
			this->btnSaveCode->UseTransparentBackground = true;
			// 
			// richTask1
			// 
			this->richTask1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->gunaTransition->SetDecoration(this->richTask1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richTask1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTask1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->richTask1->Location = System::Drawing::Point(5, 15);
			this->richTask1->Name = L"richTask1";
			this->richTask1->Size = System::Drawing::Size(842, 263);
			this->richTask1->TabIndex = 1;
			this->richTask1->Text = L"def add_numbers(a, b):\n    # верните из функции сумму a и b";
			this->richTask1->TextChanged += gcnew System::EventHandler(this, &mainForm::richTask1_TextChanged);
			// 
			// pageBook
			// 
			this->pageBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pageBook->Controls->Add(this->Book);
			this->pageBook->Controls->Add(this->myToolbox);
			this->gunaTransition->SetDecoration(this->pageBook, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageBook->Location = System::Drawing::Point(4, 4);
			this->pageBook->Name = L"pageBook";
			this->pageBook->Padding = System::Windows::Forms::Padding(3);
			this->pageBook->Size = System::Drawing::Size(1512, 894);
			this->pageBook->TabIndex = 1;
			this->pageBook->Text = L"pageBook";
			// 
			// Book
			// 
			this->Book->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->Book->AllowTransitions = true;
			this->Book->Controls->Add(this->pgBookStart);
			this->Book->Controls->Add(this->Book1);
			this->Book->Controls->Add(this->Book2);
			this->Book->Controls->Add(this->Book3);
			this->Book->Controls->Add(this->Book4);
			this->Book->Controls->Add(this->Book5);
			this->Book->Controls->Add(this->Book6);
			this->Book->Controls->Add(this->Book7);
			this->Book->Controls->Add(this->Book8);
			this->Book->Controls->Add(this->Book9);
			this->Book->Controls->Add(this->Book10);
			this->Book->Controls->Add(this->Book11);
			this->Book->Controls->Add(this->Book12);
			this->Book->Controls->Add(this->Book13);
			this->Book->Controls->Add(this->Book14);
			this->gunaTransition->SetDecoration(this->Book, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Book->Location = System::Drawing::Point(-4, 42);
			this->Book->Multiline = true;
			this->Book->Name = L"Book";
			this->Book->Page = this->pgBookStart;
			this->Book->PageIndex = 0;
			this->Book->PageName = L"pgBookStart";
			this->Book->PageTitle = L"start";
			this->Book->SelectedIndex = 0;
			this->Book->Size = System::Drawing::Size(1520, 803);
			this->Book->TabIndex = 0;
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
			this->Book->Transition = animation2;
			this->Book->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
			// 
			// pgBookStart
			// 
			this->pgBookStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->pgBookStart->Controls->Add(this->richStart);
			this->gunaTransition->SetDecoration(this->pgBookStart, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pgBookStart->Location = System::Drawing::Point(4, 4);
			this->pgBookStart->Name = L"pgBookStart";
			this->pgBookStart->Padding = System::Windows::Forms::Padding(3);
			this->pgBookStart->Size = System::Drawing::Size(1512, 777);
			this->pgBookStart->TabIndex = 0;
			this->pgBookStart->Text = L"start";
			// 
			// richStart
			// 
			this->richStart->AutoWordSelection = true;
			this->richStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richStart->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richStart, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richStart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richStart->ForeColor = System::Drawing::Color::White;
			this->richStart->Location = System::Drawing::Point(6, 0);
			this->richStart->Name = L"richStart";
			this->richStart->ReadOnly = true;
			this->richStart->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richStart->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richStart->Size = System::Drawing::Size(1512, 770);
			this->richStart->TabIndex = 8;
			this->richStart->Text = L"";
			// 
			// Book1
			// 
			this->Book1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book1->Controls->Add(this->richBook1);
			this->gunaTransition->SetDecoration(this->Book1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book1->Location = System::Drawing::Point(4, 4);
			this->Book1->Name = L"Book1";
			this->Book1->Size = System::Drawing::Size(1512, 777);
			this->Book1->TabIndex = 1;
			this->Book1->Text = L"r1";
			// 
			// richBook1
			// 
			this->richBook1->AutoWordSelection = true;
			this->richBook1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook1->ForeColor = System::Drawing::Color::White;
			this->richBook1->Location = System::Drawing::Point(6, -1);
			this->richBook1->Name = L"richBook1";
			this->richBook1->ReadOnly = true;
			this->richBook1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook1->Size = System::Drawing::Size(1513, 771);
			this->richBook1->TabIndex = 9;
			this->richBook1->Text = L"";
			// 
			// Book2
			// 
			this->Book2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book2->Controls->Add(this->richBook2);
			this->gunaTransition->SetDecoration(this->Book2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book2->Location = System::Drawing::Point(4, 4);
			this->Book2->Name = L"Book2";
			this->Book2->Size = System::Drawing::Size(1512, 777);
			this->Book2->TabIndex = 2;
			this->Book2->Text = L"r2";
			// 
			// richBook2
			// 
			this->richBook2->AutoWordSelection = true;
			this->richBook2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook2->ForeColor = System::Drawing::Color::White;
			this->richBook2->Location = System::Drawing::Point(6, -1);
			this->richBook2->Name = L"richBook2";
			this->richBook2->ReadOnly = true;
			this->richBook2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook2->Size = System::Drawing::Size(1507, 770);
			this->richBook2->TabIndex = 9;
			this->richBook2->Text = L"";
			// 
			// Book3
			// 
			this->Book3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book3->Controls->Add(this->richBook3);
			this->gunaTransition->SetDecoration(this->Book3, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book3->Location = System::Drawing::Point(4, 4);
			this->Book3->Name = L"Book3";
			this->Book3->Size = System::Drawing::Size(1512, 777);
			this->Book3->TabIndex = 3;
			this->Book3->Text = L"r3";
			// 
			// richBook3
			// 
			this->richBook3->AutoWordSelection = true;
			this->richBook3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook3, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook3->ForeColor = System::Drawing::Color::White;
			this->richBook3->Location = System::Drawing::Point(6, -1);
			this->richBook3->Name = L"richBook3";
			this->richBook3->ReadOnly = true;
			this->richBook3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richBook3->Size = System::Drawing::Size(1507, 770);
			this->richBook3->TabIndex = 9;
			this->richBook3->Text = L"";
			// 
			// Book4
			// 
			this->Book4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book4->Controls->Add(this->richBook4);
			this->gunaTransition->SetDecoration(this->Book4, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book4->Location = System::Drawing::Point(4, 4);
			this->Book4->Name = L"Book4";
			this->Book4->Size = System::Drawing::Size(1512, 777);
			this->Book4->TabIndex = 4;
			this->Book4->Text = L"r4";
			// 
			// richBook4
			// 
			this->richBook4->AutoWordSelection = true;
			this->richBook4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook4, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook4->ForeColor = System::Drawing::Color::White;
			this->richBook4->Location = System::Drawing::Point(6, -1);
			this->richBook4->Name = L"richBook4";
			this->richBook4->ReadOnly = true;
			this->richBook4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook4->Size = System::Drawing::Size(1507, 770);
			this->richBook4->TabIndex = 9;
			this->richBook4->Text = L"";
			// 
			// Book5
			// 
			this->Book5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book5->Controls->Add(this->richBook5);
			this->gunaTransition->SetDecoration(this->Book5, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book5->Location = System::Drawing::Point(4, 4);
			this->Book5->Name = L"Book5";
			this->Book5->Size = System::Drawing::Size(1512, 777);
			this->Book5->TabIndex = 5;
			this->Book5->Text = L"r5";
			// 
			// richBook5
			// 
			this->richBook5->AutoWordSelection = true;
			this->richBook5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook5, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook5->ForeColor = System::Drawing::Color::White;
			this->richBook5->Location = System::Drawing::Point(6, -1);
			this->richBook5->Name = L"richBook5";
			this->richBook5->ReadOnly = true;
			this->richBook5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook5->Size = System::Drawing::Size(1507, 770);
			this->richBook5->TabIndex = 9;
			this->richBook5->Text = L"";
			// 
			// Book6
			// 
			this->Book6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book6->Controls->Add(this->richBook6);
			this->gunaTransition->SetDecoration(this->Book6, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book6->Location = System::Drawing::Point(4, 4);
			this->Book6->Name = L"Book6";
			this->Book6->Size = System::Drawing::Size(1512, 777);
			this->Book6->TabIndex = 6;
			this->Book6->Text = L"r6";
			// 
			// richBook6
			// 
			this->richBook6->AutoWordSelection = true;
			this->richBook6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook6, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook6->ForeColor = System::Drawing::Color::White;
			this->richBook6->Location = System::Drawing::Point(6, -1);
			this->richBook6->Name = L"richBook6";
			this->richBook6->ReadOnly = true;
			this->richBook6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook6->Size = System::Drawing::Size(1507, 770);
			this->richBook6->TabIndex = 9;
			this->richBook6->Text = L"";
			// 
			// Book7
			// 
			this->Book7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book7->Controls->Add(this->richBook7);
			this->gunaTransition->SetDecoration(this->Book7, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book7->Location = System::Drawing::Point(4, 4);
			this->Book7->Name = L"Book7";
			this->Book7->Padding = System::Windows::Forms::Padding(3);
			this->Book7->Size = System::Drawing::Size(1512, 777);
			this->Book7->TabIndex = 7;
			this->Book7->Text = L"r7";
			// 
			// richBook7
			// 
			this->richBook7->AutoWordSelection = true;
			this->richBook7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook7, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook7->ForeColor = System::Drawing::Color::White;
			this->richBook7->Location = System::Drawing::Point(6, 0);
			this->richBook7->Name = L"richBook7";
			this->richBook7->ReadOnly = true;
			this->richBook7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook7->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook7->Size = System::Drawing::Size(1512, 770);
			this->richBook7->TabIndex = 8;
			this->richBook7->Text = L"";
			// 
			// Book8
			// 
			this->Book8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book8->Controls->Add(this->richBook8);
			this->gunaTransition->SetDecoration(this->Book8, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book8->Location = System::Drawing::Point(4, 4);
			this->Book8->Name = L"Book8";
			this->Book8->Padding = System::Windows::Forms::Padding(3);
			this->Book8->Size = System::Drawing::Size(1512, 777);
			this->Book8->TabIndex = 8;
			this->Book8->Text = L"r8";
			// 
			// richBook8
			// 
			this->richBook8->AutoWordSelection = true;
			this->richBook8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook8, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook8->ForeColor = System::Drawing::Color::White;
			this->richBook8->Location = System::Drawing::Point(6, 0);
			this->richBook8->Name = L"richBook8";
			this->richBook8->ReadOnly = true;
			this->richBook8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook8->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook8->Size = System::Drawing::Size(1512, 770);
			this->richBook8->TabIndex = 8;
			this->richBook8->Text = L"";
			// 
			// Book9
			// 
			this->Book9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book9->Controls->Add(this->richBook9);
			this->gunaTransition->SetDecoration(this->Book9, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book9->Location = System::Drawing::Point(4, 4);
			this->Book9->Name = L"Book9";
			this->Book9->Padding = System::Windows::Forms::Padding(3);
			this->Book9->Size = System::Drawing::Size(1512, 777);
			this->Book9->TabIndex = 9;
			this->Book9->Text = L"r9";
			// 
			// richBook9
			// 
			this->richBook9->AutoWordSelection = true;
			this->richBook9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook9, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook9->ForeColor = System::Drawing::Color::White;
			this->richBook9->Location = System::Drawing::Point(6, 0);
			this->richBook9->Name = L"richBook9";
			this->richBook9->ReadOnly = true;
			this->richBook9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook9->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook9->Size = System::Drawing::Size(1512, 770);
			this->richBook9->TabIndex = 8;
			this->richBook9->Text = L"";
			// 
			// Book10
			// 
			this->Book10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book10->Controls->Add(this->richBook10);
			this->gunaTransition->SetDecoration(this->Book10, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book10->Location = System::Drawing::Point(4, 4);
			this->Book10->Name = L"Book10";
			this->Book10->Padding = System::Windows::Forms::Padding(3);
			this->Book10->Size = System::Drawing::Size(1512, 777);
			this->Book10->TabIndex = 10;
			this->Book10->Text = L"r10";
			// 
			// richBook10
			// 
			this->richBook10->AutoWordSelection = true;
			this->richBook10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook10, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook10->ForeColor = System::Drawing::Color::White;
			this->richBook10->Location = System::Drawing::Point(5, 0);
			this->richBook10->Name = L"richBook10";
			this->richBook10->ReadOnly = true;
			this->richBook10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook10->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook10->Size = System::Drawing::Size(1513, 770);
			this->richBook10->TabIndex = 8;
			this->richBook10->Text = L"";
			// 
			// Book11
			// 
			this->Book11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book11->Controls->Add(this->richBook11);
			this->gunaTransition->SetDecoration(this->Book11, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book11->Location = System::Drawing::Point(4, 4);
			this->Book11->Name = L"Book11";
			this->Book11->Padding = System::Windows::Forms::Padding(3);
			this->Book11->Size = System::Drawing::Size(1512, 777);
			this->Book11->TabIndex = 11;
			this->Book11->Text = L"r11";
			// 
			// richBook11
			// 
			this->richBook11->AutoWordSelection = true;
			this->richBook11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook11, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook11->ForeColor = System::Drawing::Color::White;
			this->richBook11->Location = System::Drawing::Point(5, 0);
			this->richBook11->Name = L"richBook11";
			this->richBook11->ReadOnly = true;
			this->richBook11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook11->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook11->Size = System::Drawing::Size(1513, 770);
			this->richBook11->TabIndex = 8;
			this->richBook11->Text = L"";
			// 
			// Book12
			// 
			this->Book12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book12->Controls->Add(this->richBook12);
			this->gunaTransition->SetDecoration(this->Book12, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book12->Location = System::Drawing::Point(4, 4);
			this->Book12->Name = L"Book12";
			this->Book12->Padding = System::Windows::Forms::Padding(3);
			this->Book12->Size = System::Drawing::Size(1512, 777);
			this->Book12->TabIndex = 12;
			this->Book12->Text = L"r12";
			// 
			// richBook12
			// 
			this->richBook12->AutoWordSelection = true;
			this->richBook12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook12, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook12->ForeColor = System::Drawing::Color::White;
			this->richBook12->Location = System::Drawing::Point(5, 0);
			this->richBook12->Name = L"richBook12";
			this->richBook12->ReadOnly = true;
			this->richBook12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook12->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook12->Size = System::Drawing::Size(1513, 770);
			this->richBook12->TabIndex = 8;
			this->richBook12->Text = L"";
			// 
			// Book13
			// 
			this->Book13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book13->Controls->Add(this->richBook13);
			this->gunaTransition->SetDecoration(this->Book13, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book13->Location = System::Drawing::Point(4, 4);
			this->Book13->Name = L"Book13";
			this->Book13->Padding = System::Windows::Forms::Padding(3);
			this->Book13->Size = System::Drawing::Size(1512, 777);
			this->Book13->TabIndex = 13;
			this->Book13->Text = L"r13";
			// 
			// richBook13
			// 
			this->richBook13->AutoWordSelection = true;
			this->richBook13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richBook13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richBook13, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richBook13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richBook13->ForeColor = System::Drawing::Color::White;
			this->richBook13->Location = System::Drawing::Point(6, 0);
			this->richBook13->Name = L"richBook13";
			this->richBook13->ReadOnly = true;
			this->richBook13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richBook13->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richBook13->Size = System::Drawing::Size(1512, 770);
			this->richBook13->TabIndex = 8;
			this->richBook13->Text = L"";
			// 
			// Book14
			// 
			this->Book14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->Book14->Controls->Add(this->richTextBox1);
			this->gunaTransition->SetDecoration(this->Book14, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Book14->Location = System::Drawing::Point(4, 4);
			this->Book14->Name = L"Book14";
			this->Book14->Padding = System::Windows::Forms::Padding(3);
			this->Book14->Size = System::Drawing::Size(1512, 777);
			this->Book14->TabIndex = 14;
			this->Book14->Text = L"r14";
			// 
			// richTextBox1
			// 
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaTransition->SetDecoration(this->richTextBox1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(6, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(1512, 770);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// myToolbox
			// 
			this->myToolbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->myToolbox->Controls->Add(this->dropdownPages);
			this->myToolbox->Controls->Add(this->btnPreviousBook);
			this->myToolbox->Controls->Add(this->btnBookNext);
			this->myToolbox->Controls->Add(this->btnItalic);
			this->myToolbox->Controls->Add(this->btnStrikeOut);
			this->myToolbox->Controls->Add(this->btnClearFilters);
			this->myToolbox->Controls->Add(this->btnThick);
			this->myToolbox->Controls->Add(this->btnUnderline);
			this->myToolbox->Controls->Add(this->btnQuestionBook);
			this->myToolbox->Controls->Add(this->btnHighlight);
			this->gunaTransition->SetDecoration(this->myToolbox, Guna::UI2::AnimatorNS::DecorationType::None);
			this->myToolbox->Location = System::Drawing::Point(0, 0);
			this->myToolbox->Name = L"myToolbox";
			this->myToolbox->Size = System::Drawing::Size(1520, 41);
			this->myToolbox->TabIndex = 9;
			// 
			// dropdownPages
			// 
			this->dropdownPages->BackColor = System::Drawing::Color::Transparent;
			this->dropdownPages->BorderColor = System::Drawing::Color::Silver;
			this->dropdownPages->BorderRadius = 10;
			this->gunaTransition->SetDecoration(this->dropdownPages, Guna::UI2::AnimatorNS::DecorationType::None);
			this->dropdownPages->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->dropdownPages->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dropdownPages->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dropdownPages->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dropdownPages->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->dropdownPages->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->dropdownPages->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dropdownPages->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->dropdownPages->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dropdownPages->ItemHeight = 30;
			this->dropdownPages->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"PythonWave: Старт", L"1. Основы синтаксиса, функции",
					L"2. Циклы", L"3. Ветвление", L"4. Строки", L"5. Списки", L"6. Кортеджи", L"7. Словари", L"8. Множества", L"9. Модули ", L"10. Файлы",
					L"11. Стандартные модули ", L"12. Пользовательские библиотеки", L"13. Взаимодействие с интернетом", L"Почему моя программа не работает\?"
			});
			this->dropdownPages->ItemsAppearance->SelectedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->dropdownPages->ItemsAppearance->SelectedForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dropdownPages->Location = System::Drawing::Point(1256, 3);
			this->dropdownPages->Name = L"dropdownPages";
			this->dropdownPages->Size = System::Drawing::Size(248, 36);
			this->dropdownPages->StartIndex = 0;
			this->dropdownPages->TabIndex = 9;
			this->dropdownPages->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->dropdownPages->TextOffset = System::Drawing::Point(5, 0);
			this->dropdownPages->SelectedIndexChanged += gcnew System::EventHandler(this, &mainForm::dropdownPages_SelectedIndexChanged);
			// 
			// btnPreviousBook
			// 
			this->btnPreviousBook->Animated = true;
			this->btnPreviousBook->BackColor = System::Drawing::Color::Transparent;
			this->btnPreviousBook->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnPreviousBook->BorderRadius = 15;
			this->btnPreviousBook->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnPreviousBook, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnPreviousBook->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnPreviousBook->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnPreviousBook->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnPreviousBook->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnPreviousBook->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnPreviousBook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnPreviousBook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnPreviousBook->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnPreviousBook->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnPreviousBook->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnPreviousBook->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnPreviousBook->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image8")));
			this->btnPreviousBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPreviousBook.Image")));
			this->btnPreviousBook->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnPreviousBook->ImageOffset = System::Drawing::Point(-2, 0);
			this->btnPreviousBook->Location = System::Drawing::Point(1174, 5);
			this->btnPreviousBook->Name = L"btnPreviousBook";
			this->btnPreviousBook->Size = System::Drawing::Size(35, 31);
			this->btnPreviousBook->TabIndex = 100;
			this->btnPreviousBook->TextOffset = System::Drawing::Point(10, 0);
			this->btnPreviousBook->UseTransparentBackground = true;
			this->btnPreviousBook->Click += gcnew System::EventHandler(this, &mainForm::btnPreviousBook_Click);
			// 
			// btnBookNext
			// 
			this->btnBookNext->Animated = true;
			this->btnBookNext->BackColor = System::Drawing::Color::Transparent;
			this->btnBookNext->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBookNext->BorderRadius = 15;
			this->btnBookNext->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnBookNext, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnBookNext->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnBookNext->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnBookNext->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnBookNext->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnBookNext->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBookNext->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnBookNext->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnBookNext->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBookNext->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBookNext->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnBookNext->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBookNext->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image9")));
			this->btnBookNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBookNext.Image")));
			this->btnBookNext->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnBookNext->ImageOffset = System::Drawing::Point(-2, 0);
			this->btnBookNext->Location = System::Drawing::Point(1215, 5);
			this->btnBookNext->Name = L"btnBookNext";
			this->btnBookNext->Size = System::Drawing::Size(35, 31);
			this->btnBookNext->TabIndex = 99;
			this->btnBookNext->UseTransparentBackground = true;
			this->btnBookNext->Click += gcnew System::EventHandler(this, &mainForm::btnBookNext_Click);
			// 
			// btnItalic
			// 
			this->btnItalic->Animated = true;
			this->btnItalic->BackColor = System::Drawing::Color::Transparent;
			this->btnItalic->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnItalic->BorderRadius = 15;
			this->btnItalic->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnItalic, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnItalic->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnItalic->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnItalic->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnItalic->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnItalic->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnItalic->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnItalic->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnItalic->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnItalic->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnItalic->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnItalic->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnItalic->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image10")));
			this->btnItalic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnItalic.Image")));
			this->btnItalic->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnItalic->Location = System::Drawing::Point(238, 5);
			this->btnItalic->Name = L"btnItalic";
			this->btnItalic->Size = System::Drawing::Size(40, 31);
			this->btnItalic->TabIndex = 98;
			this->btnItalic->TextOffset = System::Drawing::Point(10, 0);
			this->btnItalic->UseTransparentBackground = true;
			this->btnItalic->Click += gcnew System::EventHandler(this, &mainForm::btnItalic_Click);
			// 
			// btnStrikeOut
			// 
			this->btnStrikeOut->Animated = true;
			this->btnStrikeOut->BackColor = System::Drawing::Color::Transparent;
			this->btnStrikeOut->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStrikeOut->BorderRadius = 15;
			this->btnStrikeOut->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnStrikeOut, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnStrikeOut->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnStrikeOut->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnStrikeOut->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnStrikeOut->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnStrikeOut->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStrikeOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnStrikeOut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnStrikeOut->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStrikeOut->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStrikeOut->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnStrikeOut->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnStrikeOut->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image11")));
			this->btnStrikeOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStrikeOut.Image")));
			this->btnStrikeOut->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnStrikeOut->Location = System::Drawing::Point(192, 5);
			this->btnStrikeOut->Name = L"btnStrikeOut";
			this->btnStrikeOut->Size = System::Drawing::Size(40, 31);
			this->btnStrikeOut->TabIndex = 97;
			this->btnStrikeOut->TextOffset = System::Drawing::Point(10, 0);
			this->btnStrikeOut->UseTransparentBackground = true;
			this->btnStrikeOut->Click += gcnew System::EventHandler(this, &mainForm::btnStrikeOut_Click);
			// 
			// btnClearFilters
			// 
			this->btnClearFilters->Animated = true;
			this->btnClearFilters->BackColor = System::Drawing::Color::Transparent;
			this->btnClearFilters->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnClearFilters->BorderRadius = 15;
			this->btnClearFilters->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnClearFilters, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnClearFilters->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnClearFilters->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnClearFilters->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnClearFilters->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnClearFilters->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnClearFilters->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnClearFilters->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnClearFilters->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnClearFilters->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnClearFilters->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnClearFilters->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnClearFilters->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image12")));
			this->btnClearFilters->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClearFilters.Image")));
			this->btnClearFilters->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnClearFilters->Location = System::Drawing::Point(284, 5);
			this->btnClearFilters->Name = L"btnClearFilters";
			this->btnClearFilters->Size = System::Drawing::Size(40, 31);
			this->btnClearFilters->TabIndex = 96;
			this->btnClearFilters->TextOffset = System::Drawing::Point(10, 0);
			this->btnClearFilters->UseTransparentBackground = true;
			this->btnClearFilters->Click += gcnew System::EventHandler(this, &mainForm::btnClearFilters_Click);
			// 
			// btnThick
			// 
			this->btnThick->Animated = true;
			this->btnThick->BackColor = System::Drawing::Color::Transparent;
			this->btnThick->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnThick->BorderRadius = 15;
			this->btnThick->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnThick, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnThick->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnThick->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnThick->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnThick->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnThick->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnThick->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnThick->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnThick->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnThick->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnThick->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnThick->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnThick->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image13")));
			this->btnThick->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThick.Image")));
			this->btnThick->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnThick->Location = System::Drawing::Point(146, 5);
			this->btnThick->Name = L"btnThick";
			this->btnThick->Size = System::Drawing::Size(40, 31);
			this->btnThick->TabIndex = 95;
			this->btnThick->TextOffset = System::Drawing::Point(10, 0);
			this->btnThick->UseTransparentBackground = true;
			this->btnThick->Click += gcnew System::EventHandler(this, &mainForm::btnThick_Click);
			// 
			// btnUnderline
			// 
			this->btnUnderline->Animated = true;
			this->btnUnderline->BackColor = System::Drawing::Color::Transparent;
			this->btnUnderline->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnUnderline->BorderRadius = 15;
			this->btnUnderline->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnUnderline, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnUnderline->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnUnderline->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnUnderline->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnUnderline->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnUnderline->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnUnderline->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnUnderline->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnUnderline->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnUnderline->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnUnderline->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnUnderline->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnUnderline->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image14")));
			this->btnUnderline->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUnderline.Image")));
			this->btnUnderline->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnUnderline->Location = System::Drawing::Point(100, 5);
			this->btnUnderline->Name = L"btnUnderline";
			this->btnUnderline->Size = System::Drawing::Size(40, 31);
			this->btnUnderline->TabIndex = 93;
			this->btnUnderline->TextOffset = System::Drawing::Point(10, 0);
			this->btnUnderline->UseTransparentBackground = true;
			this->btnUnderline->Click += gcnew System::EventHandler(this, &mainForm::btnUnderline_Click);
			// 
			// btnQuestionBook
			// 
			this->btnQuestionBook->Animated = true;
			this->btnQuestionBook->BackColor = System::Drawing::Color::Transparent;
			this->btnQuestionBook->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gunaTransition->SetDecoration(this->btnQuestionBook, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnQuestionBook->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnQuestionBook->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnQuestionBook->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnQuestionBook->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnQuestionBook->FillColor = System::Drawing::Color::Transparent;
			this->btnQuestionBook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btnQuestionBook->ForeColor = System::Drawing::Color::White;
			this->btnQuestionBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnQuestionBook.Image")));
			this->btnQuestionBook->ImageOffset = System::Drawing::Point(0, 12);
			this->btnQuestionBook->Location = System::Drawing::Point(18, 10);
			this->btnQuestionBook->Name = L"btnQuestionBook";
			this->btnQuestionBook->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->btnQuestionBook->Size = System::Drawing::Size(20, 20);
			this->btnQuestionBook->TabIndex = 92;
			this->btnQuestionBook->Text = L"guna2CircleButton1";
			this->btnQuestionBook->UseTransparentBackground = true;
			this->btnQuestionBook->Click += gcnew System::EventHandler(this, &mainForm::btnQuestionBook_Click);
			// 
			// btnHighlight
			// 
			this->btnHighlight->Animated = true;
			this->btnHighlight->BackColor = System::Drawing::Color::Transparent;
			this->btnHighlight->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHighlight->BorderRadius = 15;
			this->btnHighlight->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnHighlight, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnHighlight->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnHighlight->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnHighlight->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnHighlight->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnHighlight->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHighlight->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnHighlight->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnHighlight->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHighlight->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHighlight->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnHighlight->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnHighlight->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image15")));
			this->btnHighlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHighlight.Image")));
			this->btnHighlight->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnHighlight->Location = System::Drawing::Point(54, 5);
			this->btnHighlight->Name = L"btnHighlight";
			this->btnHighlight->Size = System::Drawing::Size(40, 31);
			this->btnHighlight->TabIndex = 91;
			this->btnHighlight->TextOffset = System::Drawing::Point(10, 0);
			this->btnHighlight->UseTransparentBackground = true;
			this->btnHighlight->Click += gcnew System::EventHandler(this, &mainForm::btnHighlight_Click);
			// 
			// Pages
			// 
			this->Pages->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->Pages->AllowTransitions = false;
			this->Pages->Controls->Add(this->pageHome);
			this->Pages->Controls->Add(this->pageBook);
			this->Pages->Controls->Add(this->pageTasks);
			this->Pages->Controls->Add(this->pageProfile);
			this->Pages->Controls->Add(this->pageStats);
			this->Pages->Controls->Add(this->pageSettings);
			this->Pages->Controls->Add(this->pageProfileEdit);
			this->Pages->Controls->Add(this->anim1);
			this->Pages->Controls->Add(this->anim2);
			this->Pages->Controls->Add(this->anim4);
			this->Pages->Controls->Add(this->anim3);
			this->gunaTransition->SetDecoration(this->Pages, Guna::UI2::AnimatorNS::DecorationType::None);
			this->Pages->Location = System::Drawing::Point(80, 80);
			this->Pages->Multiline = true;
			this->Pages->Name = L"Pages";
			this->Pages->Page = this->pageTasks;
			this->Pages->PageIndex = 2;
			this->Pages->PageName = L"pageTasks";
			this->Pages->PageTitle = L"pageTasks";
			this->Pages->SelectedIndex = 0;
			this->Pages->Size = System::Drawing::Size(1520, 920);
			this->Pages->TabIndex = 2;
			animation4->AnimateOnlyDifferences = true;
			animation4->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation4.BlindCoeff")));
			animation4->LeafCoeff = 0;
			animation4->MaxTime = 1;
			animation4->MinTime = 0;
			animation4->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation4.MosaicCoeff")));
			animation4->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation4.MosaicShift")));
			animation4->MosaicSize = 0;
			animation4->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
			animation4->RotateCoeff = 0;
			animation4->RotateLimit = 0;
			animation4->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation4.ScaleCoeff")));
			animation4->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation4.SlideCoeff")));
			animation4->TimeCoeff = 0;
			animation4->TransparencyCoeff = 1;
			this->Pages->Transition = animation4;
			this->Pages->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Transparent;
			// 
			// pageHome
			// 
			this->pageHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->gunaTransition->SetDecoration(this->pageHome, Guna::UI2::AnimatorNS::DecorationType::None);
			this->pageHome->Location = System::Drawing::Point(4, 4);
			this->pageHome->Name = L"pageHome";
			this->pageHome->Padding = System::Windows::Forms::Padding(3);
			this->pageHome->Size = System::Drawing::Size(1512, 894);
			this->pageHome->TabIndex = 0;
			this->pageHome->Text = L"pageHome";
			// 
			// anim3
			// 
			this->anim3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->anim3->Controls->Add(this->btnSync);
			this->anim3->Controls->Add(this->lblSync5);
			this->anim3->Controls->Add(this->lblSync2);
			this->anim3->Controls->Add(this->lblSync3);
			this->anim3->Controls->Add(this->lblSync4);
			this->anim3->Controls->Add(this->lblSync1);
			this->anim3->Controls->Add(this->lblSync);
			this->gunaTransition->SetDecoration(this->anim3, Guna::UI2::AnimatorNS::DecorationType::None);
			this->anim3->Location = System::Drawing::Point(4, 4);
			this->anim3->Name = L"anim3";
			this->anim3->Padding = System::Windows::Forms::Padding(3);
			this->anim3->Size = System::Drawing::Size(1512, 894);
			this->anim3->TabIndex = 19;
			this->anim3->Text = L"anim3";
			// 
			// btnSync
			// 
			this->btnSync->Animated = true;
			this->btnSync->BackColor = System::Drawing::Color::Transparent;
			this->btnSync->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync->BorderRadius = 20;
			this->btnSync->BorderThickness = 1;
			this->gunaTransition->SetDecoration(this->btnSync, Guna::UI2::AnimatorNS::DecorationType::None);
			this->btnSync->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btnSync->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btnSync->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btnSync->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btnSync->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->btnSync->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSync->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync->HoverState->CustomBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->btnSync->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnSync->HoverState->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resource.Image29")));
			this->btnSync->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSync.Image")));
			this->btnSync->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnSync->Location = System::Drawing::Point(1323, 753);
			this->btnSync->Name = L"btnSync";
			this->btnSync->Size = System::Drawing::Size(181, 39);
			this->btnSync->TabIndex = 49;
			this->btnSync->Text = L"Продолжить";
			this->btnSync->TextOffset = System::Drawing::Point(10, 0);
			this->btnSync->UseTransparentBackground = true;
			this->btnSync->Visible = false;
			this->btnSync->Click += gcnew System::EventHandler(this, &mainForm::btnSync_Click);
			// 
			// lblSync5
			// 
			this->gunaTransition->SetDecoration(this->lblSync5, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSync5->Location = System::Drawing::Point(5, 373);
			this->lblSync5->Name = L"lblSync5";
			this->lblSync5->Size = System::Drawing::Size(1338, 350);
			this->lblSync5->TabIndex = 9;
			this->lblSync5->Text = resources->GetString(L"lblSync5.Text");
			this->lblSync5->Visible = false;
			// 
			// lblSync2
			// 
			this->lblSync2->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblSync2, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync2->ForeColor = System::Drawing::Color::SlateBlue;
			this->lblSync2->Location = System::Drawing::Point(33, 156);
			this->lblSync2->Name = L"lblSync2";
			this->lblSync2->Size = System::Drawing::Size(268, 44);
			this->lblSync2->TabIndex = 8;
			this->lblSync2->Text = L"‣ A - Средний";
			this->lblSync2->Visible = false;
			// 
			// lblSync3
			// 
			this->lblSync3->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblSync3, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync3->ForeColor = System::Drawing::Color::Orange;
			this->lblSync3->Location = System::Drawing::Point(38, 221);
			this->lblSync3->Name = L"lblSync3";
			this->lblSync3->Size = System::Drawing::Size(265, 44);
			this->lblSync3->TabIndex = 7;
			this->lblSync3->Text = L"‣ S - Сложный";
			this->lblSync3->Visible = false;
			// 
			// lblSync4
			// 
			this->lblSync4->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblSync4, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync4->ForeColor = System::Drawing::Color::Chocolate;
			this->lblSync4->Location = System::Drawing::Point(24, 289);
			this->lblSync4->Name = L"lblSync4";
			this->lblSync4->Size = System::Drawing::Size(418, 44);
			this->lblSync4->TabIndex = 6;
			this->lblSync4->Text = L"✱ S+ - Очень сложный";
			this->lblSync4->Visible = false;
			// 
			// lblSync1
			// 
			this->lblSync1->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblSync1, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync1->ForeColor = System::Drawing::Color::SeaGreen;
			this->lblSync1->Location = System::Drawing::Point(33, 95);
			this->lblSync1->Name = L"lblSync1";
			this->lblSync1->Size = System::Drawing::Size(254, 44);
			this->lblSync1->TabIndex = 4;
			this->lblSync1->Text = L"‣ B - Простой";
			this->lblSync1->Visible = false;
			// 
			// lblSync
			// 
			this->lblSync->AutoSize = true;
			this->gunaTransition->SetDecoration(this->lblSync, Guna::UI2::AnimatorNS::DecorationType::None);
			this->lblSync->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSync->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->lblSync->Location = System::Drawing::Point(172, 20);
			this->lblSync->Name = L"lblSync";
			this->lblSync->Size = System::Drawing::Size(1178, 58);
			this->lblSync->TabIndex = 3;
			this->lblSync->Text = L"Всего существует 3 уровня сложности заданий:";
			// 
			// gunaTransition
			// 
			this->gunaTransition->AnimationType = Guna::UI2::AnimatorNS::AnimationType::Custom;
			this->gunaTransition->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
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
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->gunaTransition->DefaultAnimation = animation1;
			// 
			// dragTask
			// 
			this->dragTask->DockForm = true;
			this->dragTask->DockIndicatorTransparencyValue = 0.6;
			this->dragTask->DragMode = Guna::UI2::WinForms::Enums::DragMode::Control;
			this->dragTask->TargetControl = this->richTask1;
			this->dragTask->UseTransparentDrag = true;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1600, 1000);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->Pages);
			this->gunaTransition->SetDecoration(this, Guna::UI2::AnimatorNS::DecorationType::None);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mainForm";
			this->Opacity = 0;
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &mainForm::main_Load);
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMinimize))->EndInit();
			this->panelUserBar->ResumeLayout(false);
			this->panelUserBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUserBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctrboxLogo))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->anim4->ResumeLayout(false);
			this->anim2->ResumeLayout(false);
			this->anim2->PerformLayout();
			this->anim1->ResumeLayout(false);
			this->anim1->PerformLayout();
			this->pageProfileEdit->ResumeLayout(false);
			this->pageProfileEdit->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckCode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheckMail))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfileEdit))->EndInit();
			this->pageSettings->ResumeLayout(false);
			this->pageSettings->PerformLayout();
			this->pageStats->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartProductivity))->EndInit();
			this->pageProfile->ResumeLayout(false);
			this->panelProfileData->ResumeLayout(false);
			this->panelProfileData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureProfile))->EndInit();
			this->pageTasks->ResumeLayout(false);
			this->PagesTasks->ResumeLayout(false);
			this->TasksMain->ResumeLayout(false);
			this->guna2Panel1->ResumeLayout(false);
			this->Task1->ResumeLayout(false);
			this->Task1->PerformLayout();
			this->solutionPanel->ResumeLayout(false);
			this->solutionPanel->PerformLayout();
			this->panelTask->ResumeLayout(false);
			this->pageBook->ResumeLayout(false);
			this->Book->ResumeLayout(false);
			this->pgBookStart->ResumeLayout(false);
			this->Book1->ResumeLayout(false);
			this->Book2->ResumeLayout(false);
			this->Book3->ResumeLayout(false);
			this->Book4->ResumeLayout(false);
			this->Book5->ResumeLayout(false);
			this->Book6->ResumeLayout(false);
			this->Book7->ResumeLayout(false);
			this->Book8->ResumeLayout(false);
			this->Book9->ResumeLayout(false);
			this->Book10->ResumeLayout(false);
			this->Book11->ResumeLayout(false);
			this->Book12->ResumeLayout(false);
			this->Book13->ResumeLayout(false);
			this->Book14->ResumeLayout(false);
			this->myToolbox->ResumeLayout(false);
			this->Pages->ResumeLayout(false);
			this->anim3->ResumeLayout(false);
			this->anim3->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private:
		String^ NEW_NAME;
		String^ NEW_SURNAME;
		String^ NEW_MAIL;
		Boolean isProfileSaved = true;
		int securityCode;
		int securityCodeNew;
		bool email_confirmed = false;
		Boolean isCoursesVisited;

		void logsLoad() {
			if (File::Exists("script//logs.bin"))
				isCoursesVisited = Convert::ToBoolean(readBinaryFile("script//logs.bin"));
			else
				isCoursesVisited = false;
		}
	private:
		// MainFunc.h

		Void HideWAnimation(Forms::Control^ CONTROL) {
			UI2::AnimatorNS::Animation^ MYANIM = gcnew UI2::AnimatorNS::Animation();
			gunaTransition->HideSync(dynamic_cast<Forms::Control^>(CONTROL), true, MYANIM->Transparent);
		}
		Void ShowWAnimation(Forms::Control^ CONTROL) {
			UI2::AnimatorNS::Animation^ MYANIM = gcnew UI2::AnimatorNS::Animation();
			gunaTransition->ShowSync(dynamic_cast<Forms::Control^>(CONTROL), true, MYANIM->Transparent);
		}

		String^ readBinaryFile(String^ filePath);
		size_t readPassword(String^ filePath);
		Void writeBinaryFile(String^ filePath, String^ content);
		bool IsValidEmail(String^ email);
		int generateSecurityCode();
		Void DeleteDirectory(String^ folderPath);

		// Data
		Void DataLoad();
		Void DataChange();
		Void DataSave();

		Void cfgLoad();
		Void cfgSave();

		Void levelUp();

	private:
		// main-header.h

	// Form
		Void Form_MouseDown(Object^ sender, MouseEventArgs^ e);
		Void main_Load(System::Object^ sender, System::EventArgs^ e);
		Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnExit_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e);

		Void ratingUser_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageInfo->Show("Оценка ваших успехов в учебе :)");
		}
		Void btnQuestionBook_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageInfo->Show("Примените желаемые пометки, выделив текст", "Панель инструментов");
		}

	// MainMenu.h
	private:
		bool courseAnimationState = false;

		Void SetProfileDefaults();
		Boolean CheckSave();
		Void timerMenu_Tick(System::Object^ sender, System::EventArgs^ e);

		Void funcSelectTab(TabPage^ tabPage);
		Void timerAnim_Tick(System::Object^ sender, System::EventArgs^ e);
		Void btnHome_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnBook_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnCourses_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnStats_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e);

		Void btnSync_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnSync1_Click(System::Object^ sender, System::EventArgs^ e);

		// Профиль
	private:
		String^ GetFolderCreationDate(String^ folderPath);
		Void buttonUploadImage_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonResume_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonSendMail_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCheckCode_Click(System::Object^ sender, System::EventArgs^ e);
		Void timerEmail_Tick(System::Object^ sender, System::EventArgs^ e);
		Void linkReMail_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

		// Email
		Void enableMail(bool enable);
		Void linkREMOVEACC_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnProfileSave_Click(System::Object^ sender, System::EventArgs^ e);

		// Проверка на изменение данных
		Boolean CheckProfileSave(UI2::WinForms::Guna2TextBox^ TB, String^ field) {
			if (TB->Text != field) {
				isProfileSaved = false;
				return false;
			}
			return true;
		}
		Void textBoxUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			CheckProfileSave(textBoxUserName, UserName);
		}
		Void textBoxUserSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			CheckProfileSave(textBoxUserSurname, UserSurname);
		}
		Void textBoxEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			email_confirmed = CheckProfileSave(textBoxEmail, UserEmail);
		}

		Void btnCancelChanges_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnCancelSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		}

	private:
		bool menu = true;

		bool alwaysHideMenu = false;
		bool transparentWhileDrag = true;
		bool greeting = true;
		bool formShadow = true;
		bool PythonWaveStyle = true;

		int volume = 50;
		int borderBtn = 20;
		int borderForm = 25;

		void RegisterMouseDownEvent(Control^ parent, bool enable)
		{
			if (enable && parent->Name != "btnMenu")
			{
				parent->MouseDown += mouseDownHandler;
			}
			else
			{
				parent->MouseDown -= mouseDownHandler;
			}

			for each (Control ^ child in parent->Controls)
			{
				RegisterMouseDownEvent(child, enable);
			}
		}

	private:
		Void TrackBorderForm_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
			borderlessForm->BorderRadius = TrackBorderForm->Value;
			borderForm = TrackBorderForm->Value;

			labelBorderForm->Text = Convert::ToString(borderForm);
		}
		Void TrackBorderBtn_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
			borderBtn = TrackBorderBtn->Value;
			btnSettingsCancel->BorderRadius = TrackBorderBtn->Value;
			btnSettingsSave->BorderRadius = TrackBorderBtn->Value;

			labelBorderBtn->Text = Convert::ToString(TrackBorderBtn->Value);
		}
		Void TrackVolume_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
			volume = TrackVolume->Value;

			labelVolume->Text = Convert::ToString(volume);
		}
		Void toggleTransparent_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			transparentWhileDrag = toggleTransparent->Checked;

			dragMain->TransparentWhileDrag = transparentWhileDrag;
		}
		Void toggleGreeting_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			greeting = toggleGreeting->Checked;
		}
		Void toggleShadows_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			formShadow = toggleShadows->Checked;
		}
		Void toggleAlwaysHide_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			alwaysHideMenu = toggleAlwaysHide->Checked;
			RegisterMouseDownEvent(this, alwaysHideMenu);
		}
		Void btnMessageShadow_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageWarning->Show("Эта функция на стадии ранней разработки");
		}
		Void btnSettingsSave_Click(System::Object^ sender, System::EventArgs^ e) {
			cfgSave();
			MessageInfo->Show("Настройки успешно сохранены");
		}
		Void toggleStyle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			PythonWaveStyle = toggleStyle->Checked;
			PythonWaveStyleState(PythonWaveStyle);
		}

		Void PythonWaveStyleState(bool enable) {
			if (enable) {
				this->FormBorderStyle = Forms::FormBorderStyle::None;
				Config^ tempCfg = tempCfg->LoadConfig();
				borderForm = tempCfg->borderForm;
				tempCfg = nullptr;
			}
			else {
				this->FormBorderStyle = Forms::FormBorderStyle::FixedToolWindow;
				borderForm = 0;
			}

			btnExit->Visible = enable;
			btnMinimize->Visible = enable;
			TrackBorderForm->Enabled = enable;

			borderlessForm->BorderRadius = borderForm;
			TrackBorderForm->Value = borderForm;
			labelBorderForm->Text = Convert::ToString(borderForm);
		}

		//textboxes
		Void textBoxUserName_Click(System::Object^ sender, System::EventArgs^ e) {
			textBoxUserName->BorderColor = Color::Silver;
		}
		Void textBoxUserSurname_Click(System::Object^ sender, System::EventArgs^ e) {
			textBoxUserSurname->BorderColor = Color::Silver;
		}
		Void textBoxEmail_Click(System::Object^ sender, System::EventArgs^ e) {
			textBoxEmail->BorderColor = Color::Silver;
		}

		//MainBook.h
		TabPage^ CurrentBookPage;
		int CurrentBookIndex;
		RichTextBox^ CurrentRichBox;
		String^ CurrentBookFile;

		void SaveBook(String^ Point, RichTextBox^ richTextBox);
		void LoadPage(String^ Point, RichTextBox^ richTextBox);
		void LoadBook();
		void UpdateLastBookPage();

		bool isCustomBookExists();
		bool isLastPageExists();
		void CreateCustomBook();
		void CreateLastPage();

		void ChangeSelectionBackColor(Color color, RichTextBox^ richTB);
		void ChangeSelectionFontStyle(FontStyle style, RichTextBox^ richTB);
		void SetSelectionFontByDefault(RichTextBox^ richTB);

		//Пометки
		Void btnHighlight_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnUnderline_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnThick_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnStrikeOut_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnItalic_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnClearFilters_Click(System::Object^ sender, System::EventArgs^ e);
		//Переходы по страницам
		Void dropdownPages_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		Void btnPreviousBook_Click(System::Object^ sender, System::EventArgs^ e);
		Void btnBookNext_Click(System::Object^ sender, System::EventArgs^ e);


		// mainTasks.h
		String^ CurrentTask;

		void SyntaxHighlight(RichTextBox^ richTB) {
			int selectionStart = richTB->SelectionStart;
			int selectionLength = richTB->SelectionLength;

			array<String^>^ keywords = { "def", "return", "if", "else", "for", "while" };

			Color defaultTextColor = Color::FromArgb(238, 238, 238);

			richTB->SelectAll();
			richTB->SelectionColor = defaultTextColor;
			richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Regular);

			for each (String ^ keyword in keywords) {
				std::string text = msclr::interop::marshal_as<std::string>(richTB->Text);
				std::regex word_regex("\\b" + msclr::interop::marshal_as<std::string>(keyword) + "\\b");
				std::sregex_iterator words_begin = std::sregex_iterator(text.begin(), text.end(), word_regex);
				std::sregex_iterator words_end = std::sregex_iterator();

				for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
					std::smatch match = *i;
					int start = match.position();
					int length = match.length();

					richTB->Select(start, length);
					richTB->SelectionColor = Color::RoyalBlue;
					richTB->SelectionFont = gcnew System::Drawing::Font(richTB->Font, FontStyle::Bold);
				}
			}

			richTB->Select(selectionStart, selectionLength);
			richTB->SelectionColor = defaultTextColor;  
		}
		void PyRun(String^ code);



		Void richTask1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			SyntaxHighlight(richTask1);
		}
		Void btnTask1_Click(System::Object^ sender, System::EventArgs^ e) {
			SyntaxHighlight(richTask1);
			PagesTasks->SelectTab(Task1);
			CurrentTask = "Task1";
		}
		Void TaskText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			panelTask->Location = System::Drawing::Point(0, this->ClientSize.Height - panelTask->Height);
		}
		Void btnTestCode_Click(System::Object^ sender, System::EventArgs^ e);
};
}
