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
	private: Guna::UI2::WinForms::Guna2BorderlessForm^ guna2BorderlessForm1;
	protected:

	private: Guna::UI2::WinForms::Guna2AnimateWindow^ guna2AnimateWindow1;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonExit;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ ButtonMinimize;
	private: Guna::UI2::WinForms::Guna2DragControl^ guna2DragControl1;

	private: System::Windows::Forms::Timer^ fadetimer;


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
			this->guna2BorderlessForm1 = (gcnew Guna::UI2::WinForms::Guna2BorderlessForm(this->components));
			this->guna2DragControl1 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->guna2AnimateWindow1 = (gcnew Guna::UI2::WinForms::Guna2AnimateWindow(this->components));
			this->ButtonMinimize = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->ButtonExit = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->BeginInit();
			this->SuspendLayout();
			// 
			// guna2BorderlessForm1
			// 
			this->guna2BorderlessForm1->BorderRadius = 20;
			this->guna2BorderlessForm1->ContainerControl = this;
			this->guna2BorderlessForm1->DockIndicatorTransparencyValue = 0.6;
			this->guna2BorderlessForm1->TransparentWhileDrag = true;
			// 
			// guna2DragControl1
			// 
			this->guna2DragControl1->DockIndicatorTransparencyValue = 0.8;
			this->guna2DragControl1->UseTransparentDrag = true;
			// 
			// guna2AnimateWindow1
			// 
			this->guna2AnimateWindow1->Interval = 400;
			this->guna2AnimateWindow1->TargetForm = this;
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
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->ButtonMinimize);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->Text = L"login";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &login::login_FormClosing);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ButtonExit))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		//ќбъ€вление функций венесеных в func.h

	//--------------------------------------------------------------------------
	private: System::Void ExitWindow_click(System::Object^ sender, System::EventArgs^ e) {
		fade_mode = 2;
		fadetimer->Start();
	}
	//--------------------------------------------------------------------------

		   //јнимаци€ сворачивани€ окна

	//--------------------------------------------------------------------------
	//ќпредел€ем переменную, чтобы она знала, кака€ анимаци€ происходит
	short fade_mode = 0; //0 Ч по€вление, 1 Ч минимизаци€, 2 Ч закрытиеы
	short close_on_close = FALSE; 
	//переменна€, сообщающа€ обработчику закрыти€ повторно анимировать или нет - это позвол€ет 
	// this->Close(); дл€ запуска анимации, но позвол€ет избежать цикла.
		
		//WndProc
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
				if (HIWORD(msg.WParam.ToInt32()) == 0) { //because non-zero wpa here means the form is minimized
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
		private: System::Void MinimizeWindow_click(System::Object^ sender, System::EventArgs^ e) {
		SendMessage(HWND(this->Handle.ToPointer()), WM_SYSCOMMAND, SC_MINIMIZE, NULL);
	}
		//—ам код анимации событи€ (установлен на тик 10мс) и обработчик закрыти€ формы:
		private: System::Void fadetimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->IsDisposed == true) { //In the event that the form opened/closed quickly and has not stopped properly, clean up to avoid crashes.
		fadetimer->Stop();
		return;
	}
		switch (fade_mode) {
	case 0: //fading in
		if (this->Opacity < 1)
			this->Opacity += 0.2;
		else {
			fade_mode = -1;
			fadetimer->Stop();
		}
		break;
	case 1: //minimizing
		if (this->Opacity > 0)
			this->Opacity -= 0.2;
		else {
			fade_mode = -1;
			fadetimer->Stop();
			this->WindowState = Windows::Forms::FormWindowState::Minimized;
		}
		break;
	case 2: //closing
		if (this->Opacity > 0)
			this->Opacity -= 0.2;
		else {
			fade_mode = -1;
			fadetimer->Stop();
			close_on_close = TRUE;
			this->Close();
		}
		break;
	}
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

		}

};
}
