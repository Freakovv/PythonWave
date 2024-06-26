#pragma once
#include <cliext/map>
namespace kurs {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для labs
	/// </summary>
	public ref class labs : public System::Windows::Forms::Form
	{
	public:
		labs(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~labs()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label6;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(labs::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 23);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(406, 171);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(596, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить ЛР";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &labs::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(611, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox2->Location = System::Drawing::Point(611, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(312, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Сохранить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &labs::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(776, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 31);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Удалить ЛР";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &labs::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox4->Location = System::Drawing::Point(776, 84);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(517, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 18);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Номер ЛР:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(473, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Дата начала ЛР:\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(787, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Номер ЛР";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(302, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 59);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Экспорт отчета";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &labs::button2_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox5->Location = System::Drawing::Point(31, 360);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox6->Location = System::Drawing::Point(183, 360);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 364);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"с";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(153, 364);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"по";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"лабораторные работы", L"фамилии" });
			this->comboBox1->Location = System::Drawing::Point(135, 214);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 18;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"возрастанию", L"убыванию" });
			this->comboBox2->Location = System::Drawing::Point(135, 254);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 24);
			this->comboBox2->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 18);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Сортировать:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(97, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 18);
			this->label7->TabIndex = 21;
			this->label7->Text = L"по";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(149, 292);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 35);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Сортировать";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &labs::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox3->Location = System::Drawing::Point(499, 219);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 26);
			this->textBox3->TabIndex = 23;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(530, 254);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 41);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Искать";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &labs::button6_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(667, 179);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(209, 140);
			this->richTextBox1->TabIndex = 25;
			this->richTextBox1->Text = L"";
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->Location = System::Drawing::Point(806, 338);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 68);
			this->button7->TabIndex = 26;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &labs::button7_Click);
			// 
			// labs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(905, 426);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"labs";
			this->Text = L"163umneck";
			this->Load += gcnew System::EventHandler(this, &labs::labs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		private : 
			// Функция для проверки даты и окрашивания ячеек
			void CheckDatesAndColorCells(System::Windows::Forms::DataGridView^ dataGridView) {
				// Получите текущую дату
				System::DateTime currentDate = System::DateTime::Now.Date;
				// Просмотрите все столбцы
				for (int i = 0; i < dataGridView->Columns->Count; ++i) {
					// Получите название столбца
					System::String^ columnName = dataGridView->Columns[i]->Name;
					// Проверьте, содержит ли название столбца дату последней сдачи
					if (columnName->Contains("(") && columnName->Contains(")")) {
						// Извлеките дату последней сдачи из названия столбца
						int startIndex = columnName->IndexOf("(") + 1;
						int endIndex = columnName->IndexOf(")");
						System::String^ endDateStr = columnName->Substring(startIndex, endIndex - startIndex);
						// Преобразуйте строку в дату
						System::DateTime endDate = System::DateTime::Parse(endDateStr);
						// Если текущая дата превышает дату последней сдачи, окрасьте ячейки в красный цвет
						// Если текущая дата равна дате последней сдачи, окрасьте ячейки в желтый цвет
						// Если дата последней сдачи еще не наступила, окрасьте ячейки в белый цвет
						for each (System::Windows::Forms::DataGridViewRow ^ row in dataGridView->Rows) {
							// Проверьте, является ли ячейка пустой
							if (!row->IsNewRow && (row->Cells[i]->Value == "" || row->Cells[i]->Value == nullptr)) {
								if (currentDate > endDate) {
									row->Cells[i]->Style->BackColor = System::Drawing::Color::Red;
								}
								else if (currentDate == endDate) {
									row->Cells[i]->Style->BackColor = System::Drawing::Color::Yellow;
								}
								else if (currentDate < endDate) {
									row->Cells[i]->Style->BackColor = System::Drawing::Color::White;
								}
							}
						}
					}
				}
			}
			// Функция для сохранения данных из DataGridView в файл CSV
			void SaveDataToCSV(System::Windows::Forms::DataGridView^ dataGridView, String^ filePath) {
				StreamWriter^ sw = gcnew StreamWriter(filePath, false, System::Text::Encoding::Default);
				String^ data = "";
				// Запись заголовков столбцов
				for each (DataGridViewColumn ^ column in dataGridView->Columns) {
					data += column->HeaderText + ";";
				}
				sw->WriteLine(data);
				// Запись данных
				for each (DataGridViewRow ^ row in dataGridView->Rows) {
					data = "";
					for each (DataGridViewCell ^ cell in row->Cells) {
						data += cell->Value + ";";
					}
					sw->WriteLine(data);
				}
				sw->Close();
			}
			// Функция для загрузки данных из файла CSV в DataGridView
			void LoadDataFromCSV(System::Windows::Forms::DataGridView^ dataGridView, String^ filePath) {
				StreamReader^ sr = gcnew StreamReader(filePath, System::Text::Encoding::Default);
				String^ line;
				// Чтение данных
				line = sr->ReadLine();
				if (line != nullptr) {
					// Создание столбцов
					array<String^>^ headers = line->Split(';');
					for each (String ^ header in headers) {
						dataGridView->Columns->Add(header, header);
					}
					// Чтение и добавление строк
					while ((line = sr->ReadLine()) != nullptr) {
						array<String^>^ items = line->Split(';');
						dataGridView->Rows->Add(items);
					}
					for (int i = 0; i < dataGridView1->Columns->Count; i++)
					{
						if (String::IsNullOrEmpty(dataGridView1->Columns[i]->HeaderText))
						{
							dataGridView1->Columns->RemoveAt(i);
							i--; // Уменьшаем индекс, т.к. столбец был удален
						}
					}
				}
				sr->Close();
			}
#pragma endregion
private: System::Void labs_Load(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ group = File::OpenText("current.txt");
	String^ name = group->ReadToEnd();
	group->Close();
	name = name->Trim();
	String^ txt = Convert::ToString(name) + ".csv";
	LoadDataFromCSV(dataGridView1, txt);
	CheckDatesAndColorCells(dataGridView1);
	dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &labs::dataGridView1_CellValueChanged);
	FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &labs::labs_FormClosing);
	ToolTip^ toolTip1 = gcnew ToolTip;
	toolTip1->SetToolTip(this->textBox1, "В это поле можно вводить целые положительные числа");
	ToolTip^ toolTip2 = gcnew ToolTip;
	toolTip2->SetToolTip(this->textBox2, "В это поле вводится дата в формате день.месяц");
	ToolTip^ toolTip3 = gcnew ToolTip;
	toolTip3->SetToolTip(this->textBox3, "В это поле можно вводить фамилии учащихся для поиска по фамилии\r\nи 'ЛР'/'Лабораторная работа ' номер для поиска по ЛР");
	ToolTip^ toolTip4 = gcnew ToolTip;
	toolTip4->SetToolTip(this->textBox4, "В это поле можно вводить целые положительные числа");
	ToolTip^ toolTip5 = gcnew ToolTip;
	toolTip5->SetToolTip(this->textBox5, "В это поле вводится дата в формате день.месяц");
	ToolTip^ toolTip6 = gcnew ToolTip;
	toolTip6->SetToolTip(this->textBox6, "В это поле вводится дата в формате день.месяц");
}
private: System::Void labs_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Обработчик событий для изменения значений ячеек
	System::Windows::Forms::DataGridView^ dataGridView = safe_cast<System::Windows::Forms::DataGridView^>(sender);
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
		System::Windows::Forms::DataGridViewCell^ cell = dataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex];
		if (cell->Value != nullptr && cell->Value->ToString() != "") {
			try {
				int value = Convert::ToInt32(cell->Value);
				if (value >= 1 && value <= 10) {
					cell->Tag = cell->Value; // Сохраняем новое значение в Tag
				}
				else {
					// Недопустимое значение, возвращаем старое и выводим предупреждение
					System::Windows::Forms::MessageBox::Show("Пожалуйста, введите целое число от 1 до 10.", "Неверное значение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
					cell->Value = cell->Tag != nullptr ? cell->Tag->ToString() : "";
				}
			}
			catch (FormatException^) {
				// Недопустимое значение, возвращаем старое и выводим предупреждение
				System::Windows::Forms::MessageBox::Show("Пожалуйста, введите целое число от 1 до 10.", "Неверное значение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
				cell->Value = cell->Tag != nullptr ? cell->Tag->ToString() : "";
			}
		}
		else {
			// Если значение пустое, сохраняем его в Tag и не показываем предупреждение
			cell->Tag = "";
		}
		// Если значение пустое, сохраняем пустое значение в Tag
		if (cell->Value == nullptr || cell->Value->ToString() == "") {
			cell->Tag = "";
		}
		// Если ячейка была красной и пустой, то поменять её цвет на белый при изменении значения
		if (cell->Style->BackColor == System::Drawing::Color::Red && cell->Value != "" && cell->Value != nullptr) {
			cell->Style->BackColor = System::Drawing::Color::White;
		}
	}
	// Применяем проверку дат и окраску ячеек
	CheckDatesAndColorCells(dataGridView);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (textBox1->Text != "") {
			String^ labNumber = textBox1->Text;
			System::Text::RegularExpressions::Regex^ integerRegex = gcnew System::Text::RegularExpressions::Regex("^[0-9]+$");
			if (!integerRegex->IsMatch(labNumber)) {
				MessageBox::Show("В поле 'Номер ЛР' можно вводить только целые числа");
				textBox1->Clear();
				return;
			}
			// Проверка на существование номера лабораторной работы
			for (int i = 0; i < dataGridView1->Columns->Count; ++i) {
				if (dataGridView1->Columns[i]->Name->Contains("ЛР" + labNumber)) {
					MessageBox::Show("Такой номер лабораторной работы уже существует");
					textBox1->Clear();
					return;
;					}
			}
			if (textBox2->Text != "") {
				String^ startDate = textBox2->Text;
				// Проверка формата даты
				System::Text::RegularExpressions::Regex^ dateRegex = gcnew System::Text::RegularExpressions::Regex("^\\d{2}\\.\\d{2}$");
				if (!dateRegex->IsMatch(startDate)) {
					MessageBox::Show("Дата начала ЛР введена в неправильном формате. Формат должен быть 01.01 (число.месяц)");
					textBox2->Clear();
					return;
				}
				// Расчет конечной даты
				array<String^>^ dateParts = startDate->Split('.');
				int day = Int32::Parse(dateParts[0]);
				int month = Int32::Parse(dateParts[1]);
				DateTime startDateTime = DateTime(DateTime::Now.Year, month, day);
				DateTime endDateTime = startDateTime.AddDays(14);
				String^ endDate = endDateTime.ToString("dd.MM");
				String^ columnName = "ЛР" + labNumber + " " + startDate + " (" + endDate + ")";
				dataGridView1->Columns->Add(columnName, columnName);
				// Заполните новый столбец пустыми значениями
				for each (DataGridViewRow ^ row in dataGridView1->Rows) {
					row->Cells[columnName]->Value = "";
				}
				CheckDatesAndColorCells(dataGridView1);
				StreamReader^ group = File::OpenText("current.txt");
				String^ name = group->ReadToEnd();
				group->Close();
				name = name->Trim();
				String^ tex = Convert::ToString(name) + ".csv";
				SaveDataToCSV(dataGridView1, tex);
			}
			else {
				MessageBox::Show("Введите дату начала ЛР");
			}
		}
		else {
			MessageBox::Show("Введите номер лабораторной работы");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Введена некорректная дата");
		textBox2->Clear();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ group = File::OpenText("current.txt");
	String^ name = group->ReadToEnd();
	group->Close();
	name = name->Trim();
	String^ tex = Convert::ToString(name) + ".csv";
	SaveDataToCSV(dataGridView1,tex);
	CheckDatesAndColorCells(dataGridView1);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "") {
		String^ labNumber = textBox4->Text;
		System::Text::RegularExpressions::Regex^ integerRegex = gcnew System::Text::RegularExpressions::Regex("^[0-9]+$");
		if (!integerRegex->IsMatch(labNumber)) {
			MessageBox::Show("В поле 'Номер ЛР' можно вводить только целые числа");
			textBox4->Clear();
			return;
		}
		if (textBox4->Text != "" && (Convert::ToInt32(textBox4->Text) > 0)) {
			String^ labNumber = textBox4->Text;
			int columnIndex = -1;
			// Проверка на существование номера лабораторной работы
			for (int i = 0; i < dataGridView1->Columns->Count; ++i) {
				if (dataGridView1->Columns[i]->Name->Contains("ЛР" + labNumber)) {
					columnIndex = i;
					break;
				}
			}

			if (columnIndex != -1) {
				dataGridView1->Columns->RemoveAt(columnIndex);
			}
			else {
				MessageBox::Show("Лабораторная работа с номером " + labNumber + " не найдена.");
			}
		}
		else {
			MessageBox::Show("Введите корректный номер лабораторной работы для удаления");
			this->textBox4->Clear();
		}
	}
	else {
		MessageBox::Show("Введите номер лабораторной работы");
	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Чтение дат из текстбоксов
	if (textBox5->Text != "") {
		if (textBox6->Text != "") {
			String^ startDateStr = textBox5->Text;
			String^ endDateStr = textBox6->Text;

			// Проверка формата дат с использованием регулярных выражений
			System::Text::RegularExpressions::Regex^ dateRegex = gcnew System::Text::RegularExpressions::Regex("^\\d{2}\\.\\d{2}$");
			if (!dateRegex->IsMatch(startDateStr)) {
				MessageBox::Show("Дата начала введена в неправильном формате. Формат должен быть 01.01 (число.месяц)");
				textBox5->Clear();
				return;
			}
			if (!dateRegex->IsMatch(endDateStr)) {
				MessageBox::Show("Дата окончания введена в неправильном формате. Формат должен быть 01.01 (число.месяц)");
				textBox6->Clear();
				return;
			}
			// Преобразование строковых дат в DateTime, добавление текущего года для обработки даты
			DateTime startDate = DateTime::ParseExact(startDateStr + ".2024", "dd.MM.yyyy", nullptr);
			DateTime endDate = DateTime::ParseExact(endDateStr + ".2024", "dd.MM.yyyy", nullptr);
			String^ report = "";
			// Перебор всех столбцов, начиная со второго, поскольку первый столбец содержит фамилии
			for (int colIndex = 1; colIndex < dataGridView1->Columns->Count; ++colIndex) {
				String^ columnName = dataGridView1->Columns[colIndex]->Name;
				// Извлечение и проверка даты окончания из названия столбца
				if (columnName->Contains("ЛР") && columnName->Contains("(") && columnName->Contains(")")) {
					int endDateIndex = columnName->IndexOf("(") + 1;
					String^ endDateStrColumn = columnName->Substring(endDateIndex, columnName->IndexOf(")") - endDateIndex);
					DateTime labEndDate = DateTime::ParseExact(endDateStrColumn + ".2024", "dd.MM.yyyy", nullptr);
					// Проверка, находится ли дата окончания в заданном диапазоне
					if (labEndDate >= startDate && labEndDate <= endDate) {
						// Добавление абзацов для разделения лабораторных работ
						if (!String::IsNullOrEmpty(report)) {
							report += "\r\n";
						}
						report += columnName->Substring(0, columnName->IndexOf(" ")) + ":\r\n";
						String^ notSubmitted = "Не сдали: ";
						bool hasNonSubmitted = false;
						bool hasSubmitted = false;
						for each (System::Windows::Forms::DataGridViewRow ^ row in dataGridView1->Rows) {
							if (row->IsNewRow) continue;
							String^ studentName = row->Cells[0]->Value->ToString(); // Фамилия ученика
							auto cellValue = row->Cells[colIndex]->Value; // Оценка за лабораторную работу
							if (cellValue != nullptr && cellValue->ToString() != "") {
								report += studentName + " " + cellValue->ToString() + ". ";
								hasSubmitted = true;
							}
							else {
								hasNonSubmitted = true;
								notSubmitted += studentName + ", ";
							}
						}
						// Удаление лишней запятой и пробела в конце строки для "Не сдали"
						if (hasNonSubmitted) {
							notSubmitted = notSubmitted->TrimEnd(gcnew array<wchar_t> { ',', ' ' });
							report += "\r\n" + notSubmitted;
						}
						report += "\r\n";
					}
				}
			}
			report = report->TrimEnd();
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			saveFileDialog1->Title = "Сохранить отчет";
			saveFileDialog1->DefaultExt = "txt";
			saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
			saveFileDialog1->RestoreDirectory = true;
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::Default);
				sw->WriteLine(report);
				sw->Close();
				System::Windows::Forms::MessageBox::Show("Отчет был создан", "", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Введите конечную дату");
		}
	}
	else {
		MessageBox::Show("Введите начальную дату");
	}
}
// Класс компаратора для сортировки столбцов
ref class ColumnComparer : public System::Collections::Generic::IComparer<DataGridViewColumn^> {
public:
	String^ sortOrder;
	ColumnComparer(String^ sortOrder) {
		this->sortOrder = sortOrder;
	}
	virtual int Compare(DataGridViewColumn^ a, DataGridViewColumn^ b) {
		int aNumber = Int32::Parse(a->Name->Substring(2, a->Name->IndexOf(" ") - 2));
		int bNumber = Int32::Parse(b->Name->Substring(2, b->Name->IndexOf(" ") - 2));
		return sortOrder == "возрастанию" ? aNumber.CompareTo(bNumber) : bNumber.CompareTo(aNumber);
	}
};
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Получаем выбранные критерии сортировки
	if (comboBox1->Text != "") {
		if (comboBox2->Text != "") {
			String^ sortField = comboBox1->SelectedItem->ToString();
			String^ sortOrder = comboBox2->SelectedItem->ToString();
			// Проверяем, какой критерий сортировки был выбран
			if (sortField == "фамилии") {
				// Сортируем по фамилии
				dataGridView1->Sort(dataGridView1->Columns["Фамилия"], sortOrder == "возрастанию" ? ListSortDirection::Ascending : ListSortDirection::Descending);
			}
			else if (sortField == "лабораторные работы") {
				// Сортируем столбцы по номеру лабораторной работы
				List<DataGridViewColumn^>^ columns = gcnew List<DataGridViewColumn^>();
				for (int i = 1; i < dataGridView1->Columns->Count; i++) {
					DataGridViewColumn^ column = dataGridView1->Columns[i];
					if (column->Name->StartsWith("ЛР")) {
						columns->Add(column);
					}
				}
				columns->Sort(gcnew ColumnComparer(sortOrder));
				for (int i = 0; i < columns->Count; i++) {
					columns[i]->DisplayIndex = i + 1;
				}
			}
		}
		else {
			MessageBox::Show("Введите критерий сортировки");
		}
	}
	else {
		MessageBox::Show("Введите параметр сортировки");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != "") {
		// Получаем введенное пользователем значение для поиска
		String^ searchValue = textBox3->Text;
		try {
			// Очищаем richtextbox1 перед выводом результатов
			richTextBox1->Clear();
			if (searchValue->StartsWith("ЛР")) {
				// Поиск по номеру лабораторной работы
				String^ labNumberStr = searchValue->Substring(2)->Trim(); // Изменено здесь
				int labNumber = Int32::Parse(labNumberStr); // Изменено здесь
				String^ labColumn = "ЛР" + labNumber;
				String^ passed = "Сдали: ";
				String^ notPassed = "Не сдали: ";
				bool found = false;
				for (int i = 0; i < dataGridView1->Rows->Count; i++) {
					DataGridViewRow^ row = dataGridView1->Rows[i];
					for (int j = 1; j < dataGridView1->Columns->Count; j++) {
						DataGridViewColumn^ column = dataGridView1->Columns[j];
						if (column->Name->StartsWith(labColumn)) {
							String^ cellValue = row->Cells[column->Name]->Value != nullptr ? row->Cells[column->Name]->Value->ToString() : "";
							found = true;
							if (!String::IsNullOrEmpty(cellValue)) {
								passed += row->Cells["Фамилия"]->Value->ToString() + " (" + cellValue + "), ";
							}
							else {
								notPassed += row->Cells["Фамилия"]->Value->ToString() + ", ";
							}
						}
					}
				}
				if (found) {
					richTextBox1->Text = "Лабораторная работа " + labNumber + ":\n" + passed->TrimEnd(',', ' ') + "\n" + notPassed->TrimEnd(',', ' ');
				}
				else {
					MessageBox::Show("Не найдено результата по запросу " + searchValue);
				}
			}
			else {
				// Поиск по фамилии
				String^ passed = "Сдал: ";
				String^ notPassed = "Не сдал: ";
				bool found = false;
				for (int i = 0; i < dataGridView1->Rows->Count; i++) {
					DataGridViewRow^ row = dataGridView1->Rows[i];
					if (row->Cells["Фамилия"]->Value->ToString()->Equals(searchValue, StringComparison::OrdinalIgnoreCase)) {
						found = true;
						for (int j = 1; j < dataGridView1->Columns->Count; j++) {
							DataGridViewCell^ cell = row->Cells[j];
							String^ cellValue = cell->Value != nullptr ? cell->Value->ToString() : "";
							String^ labWork = cell->OwningColumn->Name->Substring(0, cell->OwningColumn->Name->IndexOf(' '));
							if (!String::IsNullOrEmpty(cellValue)) {
								passed += labWork + " (" + cellValue + "), ";
							}
							else {
								notPassed += labWork + ", ";
							}
						}
						break;
					}
				}
				if (found) {
					richTextBox1->Text = "Учащийся " + searchValue + ":\n" + passed->TrimEnd(',', ' ') + "\n" + notPassed->TrimEnd(',', ' ');
				}
				else {
					MessageBox::Show("Не найдено результата по запросу " + searchValue);
				}
			}
		}
		catch (Exception^ ex) {
			// Обрабатываем исключения и выводим сообщение об ошибке
			MessageBox::Show("Не найдено результата по запросу " + searchValue);
		}
	}
	else {
		MessageBox::Show("Введите запрос для поиска");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ path = System::IO::Path::GetFullPath("Справочная система.pdf");
	if (!System::IO::File::Exists(path)) return;
	System::Diagnostics::Process::Start(path);
}
};
}
