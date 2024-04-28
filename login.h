#pragma once

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
	private: Guna::UI2::WinForms::Guna2DragControl^ guna2DragControl1;

	private: System::Windows::Forms::Timer^ fadetimer;
	private: System::Windows::Forms::Panel^ panelEntrance;
	private: Guna::UI2::WinForms::Guna2Elipse^ panelElipseEntrance;





	private:



	private: Guna::UI2::WinForms::Guna2BorderlessForm^ guna2BorderlessForm1;




	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: Guna::UI2::WinForms::Guna2ShadowPanel^ panelAuthorize;
	private: Guna::UI2::WinForms::Guna2Elipse^ panelElipseAuthorize;


	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;



































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
			this->guna2DragControl1 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->ButtonExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->panelEntrance = (gcnew System::Windows::Forms::Panel());
			this->panelAuthorize = (gcnew Guna::UI2::WinForms::Guna2ShadowPanel());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->panelElipseEntrance = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->guna2BorderlessForm1 = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->panelElipseAuthorize = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->BeginInit();
			this->panelEntrance->SuspendLayout();
			this->panelAuthorize->SuspendLayout();
			this->SuspendLayout();
			// 
			// guna2DragControl1
			// 
			this->guna2DragControl1->DockIndicatorColor = System::Drawing::Color::Gray;
			this->guna2DragControl1->DockIndicatorTransparencyValue = 0.8;
			this->guna2DragControl1->UseTransparentDrag = true;
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
			this->panelEntrance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelEntrance->Controls->Add(this->panelAuthorize);
			this->panelEntrance->Controls->Add(this->guna2Button2);
			this->panelEntrance->Controls->Add(this->guna2Button1);
			this->panelEntrance->Location = System::Drawing::Point(290, 140);
			this->panelEntrance->Name = L"panelEntrance";
			this->panelEntrance->Size = System::Drawing::Size(700, 550);
			this->panelEntrance->TabIndex = 2;
			// 
			// panelAuthorize
			// 
			this->panelAuthorize->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelAuthorize->BackColor = System::Drawing::Color::Transparent;
			this->panelAuthorize->Controls->Add(this->guna2TextBox1);
			this->panelAuthorize->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panelAuthorize->Location = System::Drawing::Point(3, 45);
			this->panelAuthorize->Name = L"panelAuthorize";
			this->panelAuthorize->ShadowColor = System::Drawing::Color::Black;
			this->panelAuthorize->Size = System::Drawing::Size(694, 502);
			this->panelAuthorize->TabIndex = 5;
			// 
			// guna2Button2
			// 
			this->guna2Button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->guna2Button2->Animated = true;
			this->guna2Button2->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button2->Checked = true;
			this->guna2Button2->CheckedState->CustomBorderColor = System::Drawing::Color::White;
			this->guna2Button2->CheckedState->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button2->CheckedState->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->CustomBorderColor = System::Drawing::Color::Transparent;
			this->guna2Button2->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
			this->guna2Button2->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button2->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2Button2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2Button2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->guna2Button2->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2Button2->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->Location = System::Drawing::Point(0, 0);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->guna2Button2->Size = System::Drawing::Size(180, 45);
			this->guna2Button2->TabIndex = 4;
			this->guna2Button2->Text = L"Авторизация";
			this->guna2Button2->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
			// 
			// guna2Button1
			// 
			this->guna2Button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->guna2Button1->Animated = true;
			this->guna2Button1->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button1->CheckedState->CustomBorderColor = System::Drawing::Color::Black;
			this->guna2Button1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->guna2Button1->CheckedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->guna2Button1->CustomBorderColor = System::Drawing::Color::Transparent;
			this->guna2Button1->CustomBorderThickness = System::Windows::Forms::Padding(0, 0, 0, 2);
			this->guna2Button1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2Button1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2Button1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->guna2Button1->FocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->Location = System::Drawing::Point(175, 0);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->guna2Button1->Size = System::Drawing::Size(180, 45);
			this->guna2Button1->TabIndex = 3;
			this->guna2Button1->Text = L"Регистрация";
			this->guna2Button1->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit;
			// 
			// panelElipseEntrance
			// 
			this->panelElipseEntrance->BorderRadius = 20;
			this->panelElipseEntrance->TargetControl = this->panelEntrance;
			// 
			// guna2BorderlessForm1
			// 
			this->guna2BorderlessForm1->BorderRadius = 20;
			this->guna2BorderlessForm1->ContainerControl = this;
			this->guna2BorderlessForm1->DockIndicatorTransparencyValue = 0.6;
			this->guna2BorderlessForm1->TransparentWhileDrag = true;
			// 
			// panelElipseAuthorize
			// 
			this->panelElipseAuthorize->BorderRadius = 20;
			this->panelElipseAuthorize->TargetControl = this->panelAuthorize;
			// 
			// guna2TextBox1
			// 
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
			this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->Location = System::Drawing::Point(14, 77);
			this->guna2TextBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '\0';
			this->guna2TextBox1->PlaceholderForeColor = System::Drawing::Color::Silver;
			this->guna2TextBox1->PlaceholderText = L"Логин";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->Size = System::Drawing::Size(262, 39);
			this->guna2TextBox1->TabIndex = 2;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panelEntrance);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->ButtonMinimize);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->Opacity = 0;
			this->Text = L"PythonWave: Авторизация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &login::login_FormClosing);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->EndInit();
			this->panelEntrance->ResumeLayout(false);
			this->panelAuthorize->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		//Объявление функций венесеных в func.h

	//--------------------------------------------------------------------------
	private: System::Void ExitWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	private: System::Void MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 1;
		fadetimer->Start();
	}
	//--------------------------------------------------------------------------


	//--------------------------------------------------------------------------

	//Анимация формы
	//fade_mode 0 — появление, 1 — минимизация, 2 — закрытие
	//close_on_close переменная, сообщающая обработчику закрытия повторно анимировать или нет - это позволяет 
	short fade_mode = 0; 
	short close_on_close = FALSE; 

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
	private: System::Void fadetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (this->IsDisposed == true) {
		// Обработка закрытия формы
		fadetimer->Stop();
		return;
	}
	switch (fade_mode) {
	case 0: // Появление
		if (this->Opacity < 1) {
			this->Opacity += 0.05;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
		}
		break;
	case 1: // Свернуть
		if (this->Opacity > 0) {
			this->Opacity -= 0.2;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->WindowState = Windows::Forms::FormWindowState::Minimized;
		}
		break;
	case 2: // Закрыть
		if (this->Opacity > 0) {
			this->Opacity -= 0.2;
		}
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->Close();
		}
		break;
	}
	// Установка тени в зависимости от состояния формы
	guna2BorderlessForm1->HasFormShadow = (fade_mode != 1); // Тень должна быть видна, если форма не минимизирована
}
	private: System::Void login_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			if (close_on_close && fade_mode != 2) {
				e->Cancel = true;
				fade_mode = 2;
				fadetimer->Start();
			}
		}

	//--------------------------------------------------------------------------


	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 0;
		fadetimer->Start();
		guna2BorderlessForm1->HasFormShadow = true;
	}
	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
