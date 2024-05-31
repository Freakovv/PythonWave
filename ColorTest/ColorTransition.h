#pragma once

namespace ColorTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColorTransition
	/// </summary>
	public ref class ColorTransition : public System::Windows::Forms::Form
	{
	public:
		ColorTransition(void)
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
		~ColorTransition()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2ColorTransition^ guna2ColorTransition1;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
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
			this->guna2ColorTransition1 = (gcnew Guna::UI2::WinForms::Guna2ColorTransition(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->SuspendLayout();
			// 
			// guna2ColorTransition1
			// 
			this->guna2ColorTransition1->AutoTransition = true;
			this->guna2ColorTransition1->ColorArray = gcnew cli::array< System::Drawing::Color >(3) {
				System::Drawing::Color::White, System::Drawing::Color::Blue,
					System::Drawing::Color::Orange
			};
			this->guna2ColorTransition1->ProgressValue = 20;
			this->guna2ColorTransition1->StartColor = System::Drawing::Color::White;
			this->guna2ColorTransition1->ValueChanged += gcnew System::EventHandler(this, &ColorTransition::guna2ColorTransition1_ValueChanged);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ColorTransition::timer1_Tick);
			// 
			// guna2Button1
			// 
			this->guna2Button1->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->guna2Button1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->guna2Button1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->Location = System::Drawing::Point(464, 303);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->Size = System::Drawing::Size(180, 45);
			this->guna2Button1->TabIndex = 0;
			this->guna2Button1->Text = L"guna2Button1";
			this->guna2Button1->Click += gcnew System::EventHandler(this, &ColorTransition::guna2Button1_Click);
			// 
			// ColorTransition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 670);
			this->Controls->Add(this->guna2Button1);
			this->Name = L"ColorTransition";
			this->Text = L"ColorTransition";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void guna2ColorTransition1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (guna2ColorTransition1->ProgressValue < 100) {
			guna2ColorTransition1->ProgressValue++;
		}
		this->BackColor = guna2ColorTransition1->EndColor;
	}
	};
}
