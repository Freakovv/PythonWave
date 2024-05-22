#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ guna2ToggleSwitch1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->guna2ToggleSwitch1 = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->SuspendLayout();
			// 
			// guna2ToggleSwitch1
			// 
			this->guna2ToggleSwitch1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2ToggleSwitch1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2ToggleSwitch1->CheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->CheckedState->InnerColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->Location = System::Drawing::Point(12, 12);
			this->guna2ToggleSwitch1->Name = L"guna2ToggleSwitch1";
			this->guna2ToggleSwitch1->Size = System::Drawing::Size(35, 20);
			this->guna2ToggleSwitch1->TabIndex = 0;
			this->guna2ToggleSwitch1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->InnerBorderColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->UncheckedState->InnerColor = System::Drawing::Color::White;
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
			this->guna2Button1->Location = System::Drawing::Point(278, 328);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->Size = System::Drawing::Size(180, 45);
			this->guna2Button1->TabIndex = 1;
			this->guna2Button1->Text = L"guna2Button1";
			this->guna2Button1->Click += gcnew System::EventHandler(this, &SettingsForm::guna2Button1_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 534);
			this->Controls->Add(this->guna2Button1);
			this->Controls->Add(this->guna2ToggleSwitch1);
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm->ApplySettings(guna2ToggleSwitch1->Checked);
		this->Close();
	}
	};
}
