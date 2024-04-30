#pragma once

namespace PythonWave {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateProfile
	/// </summary>
	public ref class CreateProfile : public System::Windows::Forms::Form
	{
	public:
		CreateProfile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: Guna::UI2::WinForms::Guna2BorderlessForm^ borderlessForm;
	private: Bunifu::UI::WinForms::BunifuLabel^ labelWelcome;
	private: Guna::UI2::WinForms::Guna2Separator^ guna2Separator1;

	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonMinimize;
	private: Guna::UI2::WinForms::Guna2TextBox^ textBoxLogin;

	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;

	private: Bunifu::UI::WinForms::BunifuDropdown^ bunifuDropdown2;

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
			this->borderlessForm = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->labelWelcome = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->guna2Separator1 = (gcnew Guna::UI2::WinForms::Guna2Separator());
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->textBoxLogin = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuDropdown2 = (gcnew Bunifu::UI::WinForms::BunifuDropdown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->BeginInit();
			this->SuspendLayout();
			// 
			// borderlessForm
			// 
			this->borderlessForm->ContainerControl = this;
			this->borderlessForm->DockIndicatorTransparencyValue = 0.6;
			this->borderlessForm->TransparentWhileDrag = true;
			// 
			// labelWelcome
			// 
			this->labelWelcome->AllowParentOverrides = false;
			this->labelWelcome->AutoEllipsis = true;
			this->labelWelcome->AutoSize = false;
			this->labelWelcome->Cursor = System::Windows::Forms::Cursors::Default;
			this->labelWelcome->CursorType = System::Windows::Forms::Cursors::Default;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->labelWelcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->labelWelcome->Location = System::Drawing::Point(508, 20);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelWelcome->Size = System::Drawing::Size(174, 46);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Профиль";
			this->labelWelcome->TextAlignment = System::Drawing::ContentAlignment::TopCenter;
			this->labelWelcome->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			this->labelWelcome->Click += gcnew System::EventHandler(this, &CreateProfile::labelWelcome_Click);
			// 
			// guna2Separator1
			// 
			this->guna2Separator1->BackColor = System::Drawing::Color::Transparent;
			this->guna2Separator1->Location = System::Drawing::Point(508, 54);
			this->guna2Separator1->Name = L"guna2Separator1";
			this->guna2Separator1->Size = System::Drawing::Size(174, 24);
			this->guna2Separator1->TabIndex = 1;
			this->guna2Separator1->UseTransparentBackground = true;
			// 
			// ButtonMinimize
			// 
			this->ButtonMinimize->BackColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->FillColor = System::Drawing::Color::Transparent;
			this->ButtonMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMinimize.Image")));
			this->ButtonMinimize->ImageRotate = 0;
			this->ButtonMinimize->Location = System::Drawing::Point(1248, 12);
			this->ButtonMinimize->Name = L"ButtonMinimize";
			this->ButtonMinimize->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->ButtonMinimize->Size = System::Drawing::Size(20, 20);
			this->ButtonMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ButtonMinimize->TabIndex = 2;
			this->ButtonMinimize->TabStop = false;
			this->ButtonMinimize->UseTransparentBackground = true;
			this->ButtonMinimize->Click += gcnew System::EventHandler(this, &CreateProfile::ButtonMinimize_Click);
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Animated = true;
			this->textBoxLogin->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBoxLogin->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBoxLogin->AutoRoundedCorners = true;
			this->textBoxLogin->BorderColor = System::Drawing::Color::White;
			this->textBoxLogin->BorderRadius = 22;
			this->textBoxLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxLogin->DefaultText = L"Username";
			this->textBoxLogin->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->textBoxLogin->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->textBoxLogin->DisabledState->ForeColor = System::Drawing::Color::DimGray;
			this->textBoxLogin->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->textBoxLogin->Enabled = false;
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
			this->textBoxLogin->Location = System::Drawing::Point(14, 160);
			this->textBoxLogin->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->PasswordChar = '\0';
			this->textBoxLogin->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->textBoxLogin->PlaceholderText = L"Логин";
			this->textBoxLogin->SelectedText = L"";
			this->textBoxLogin->Size = System::Drawing::Size(315, 46);
			this->textBoxLogin->TabIndex = 3;
			// 
			// guna2TextBox1
			// 
			this->guna2TextBox1->Animated = true;
			this->guna2TextBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->guna2TextBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->guna2TextBox1->AutoRoundedCorners = true;
			this->guna2TextBox1->BorderColor = System::Drawing::Color::White;
			this->guna2TextBox1->BorderRadius = 22;
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
			this->guna2TextBox1->Location = System::Drawing::Point(127, 482);
			this->guna2TextBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '\0';
			this->guna2TextBox1->PlaceholderForeColor = System::Drawing::Color::DarkGray;
			this->guna2TextBox1->PlaceholderText = L"Логин";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->Size = System::Drawing::Size(411, 46);
			this->guna2TextBox1->TabIndex = 4;
			// 
			// bunifuDropdown2
			// 
			this->bunifuDropdown2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdown2->BackgroundColor = System::Drawing::Color::White;
			this->bunifuDropdown2->BorderColor = System::Drawing::Color::Silver;
			this->bunifuDropdown2->BorderRadius = 15;
			this->bunifuDropdown2->Color = System::Drawing::Color::Silver;
			this->bunifuDropdown2->Direction = Bunifu::UI::WinForms::BunifuDropdown::Directions::Down;
			this->bunifuDropdown2->DisabledBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdown2->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDropdown2->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->bunifuDropdown2->DisabledForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->bunifuDropdown2->DisabledIndicatorColor = System::Drawing::Color::DarkGray;
			this->bunifuDropdown2->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->bunifuDropdown2->DropdownBorderThickness = Bunifu::UI::WinForms::BunifuDropdown::BorderThickness::Thin;
			this->bunifuDropdown2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bunifuDropdown2->DropDownTextAlign = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdown2->FillDropDown = true;
			this->bunifuDropdown2->FillIndicator = false;
			this->bunifuDropdown2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bunifuDropdown2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->bunifuDropdown2->ForeColor = System::Drawing::Color::Black;
			this->bunifuDropdown2->FormattingEnabled = true;
			this->bunifuDropdown2->Icon = nullptr;
			this->bunifuDropdown2->IndicatorAlignment = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdown2->IndicatorColor = System::Drawing::Color::Gray;
			this->bunifuDropdown2->IndicatorLocation = Bunifu::UI::WinForms::BunifuDropdown::Indicator::Right;
			this->bunifuDropdown2->ItemBackColor = System::Drawing::Color::White;
			this->bunifuDropdown2->ItemBorderColor = System::Drawing::Color::White;
			this->bunifuDropdown2->ItemForeColor = System::Drawing::Color::Black;
			this->bunifuDropdown2->ItemHeight = 26;
			this->bunifuDropdown2->ItemHighLightColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdown2->ItemHighLightForeColor = System::Drawing::Color::White;
			this->bunifuDropdown2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Мужской", L"Женский" });
			this->bunifuDropdown2->ItemTopMargin = 3;
			this->bunifuDropdown2->Location = System::Drawing::Point(33, 353);
			this->bunifuDropdown2->Name = L"bunifuDropdown2";
			this->bunifuDropdown2->Size = System::Drawing::Size(156, 32);
			this->bunifuDropdown2->TabIndex = 9;
			this->bunifuDropdown2->Text = L"Пол";
			this->bunifuDropdown2->TextAlignment = Bunifu::UI::WinForms::BunifuDropdown::TextAlign::Left;
			this->bunifuDropdown2->TextLeftMargin = 5;
			// 
			// CreateProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1280, 719);
			this->Controls->Add(this->bunifuDropdown2);
			this->Controls->Add(this->guna2TextBox1);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->ButtonMinimize);
			this->Controls->Add(this->guna2Separator1);
			this->Controls->Add(this->labelWelcome);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateProfile";
			this->Text = L"CreateProfile";
			this->Load += gcnew System::EventHandler(this, &CreateProfile::CreateProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void guna2ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreateProfile_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelWelcome_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
