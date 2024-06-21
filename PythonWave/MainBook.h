#pragma once
#include "mainForm.h"

using namespace System;

Boolean isBookExists = true;

void mainForm::SaveBook(String^ Point, RichTextBox^ richTextBox)
{
	String^ filePath = User + "//book//" + Point + ".rtf";

	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
	StreamWriter^ sw = gcnew StreamWriter(fileStream);
	sw->Write(richTextBox->Rtf);
	sw->Close();
}
void mainForm::LoadPage(String^ Point, RichTextBox^ richTextBox)
{
	String^ filePath = User + "//book//" + Point + ".rtf";
	if (!File::Exists(filePath)) {
		filePath = "book//" + Point + ".rtf";
	}

	if (!File::Exists(filePath)) {
		MessageBox::Show("Файл:" + filePath + "Не найден", "Ошибка");
		isBookExists = false;
		return;
	}

	try {
		FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read, FileShare::ReadWrite);
		StreamReader^ sr = gcnew StreamReader(fileStream);
		String^ rtfContent = sr->ReadToEnd();
		sr->Close();
		fileStream->Close();

		richTextBox->Rtf = rtfContent;
	}
	catch (IOException^ e) {
		MessageError->Show(e->Message, "Ошибка загрузки книги");
	}
}
void mainForm::LoadBook() {
	LoadPage("start", richStart);

	array<RichTextBox^>^ richTextBoxes = { richBook1, richBook2, richBook3, richBook4, richBook5, richBook6, richBook7, richBook8, richBook9, richBook10, richBook11, richBook12, richBook13 };

	int countOfPages = Book->TabCount - 2;
	for (int i = 0; i < countOfPages; ++i) {
		String^ str = "r" + Convert::ToString(i + 1);
		LoadPage(str, richTextBoxes[i]);
	}

	String^ filePath = User + "//book//lastpage.txt";
	if (File::Exists(filePath)) {
		String^ pageName = File::ReadAllText(filePath);
		int tabPageIndex = -1;

		// Определяем соответствующий индекс вкладки для имени страницы
		for (int i = 0; i < Book->TabCount; ++i) {
			if (Book->TabPages[i]->Text == pageName) {
				tabPageIndex = i;
				break;
			}
		}

		if (tabPageIndex != -1) {
			Book->SelectTab(tabPageIndex);
			dropdownPages->SelectedIndex = tabPageIndex;
		}
	}

	if (!isBookExists)
		MessageWarning->Show("Ошибка загрузки книги", "Файлы повреждены");
}
void mainForm::UpdateLastBookPage() {
	CurrentBookPage = Book->SelectedTab;
	CurrentBookIndex = Book->SelectedIndex;
	CurrentBookFile = CurrentBookPage->Text;
	for each (Control ^ control in CurrentBookPage->Controls) {
		RichTextBox^ richTextBox = dynamic_cast<RichTextBox^>(control);

		if (richTextBox != nullptr) {
			CurrentRichBox = richTextBox;
			break;
		}
	}
}

bool mainForm::isCustomBookExists() {
	return Directory::Exists(User + "//myBook");
}
bool mainForm::isLastPageExists() {
	return File::Exists(User + "//myBook//lastpage.txt");
}
void mainForm::CreateLastPage() {
	if (!isLastPageExists()) {
		try {
			String^ filePath = User + "//book//lastpage.txt";
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
			StreamWriter^ writer = gcnew StreamWriter(fileStream);

			writer->Write(CurrentBookPage->Text);
			writer->Close();
			fileStream->Close();
		}
		catch (Exception^ e) {
			MessageError->Show(e->Message);
		}
	}
}
void mainForm::CreateCustomBook() {
	if (!isCustomBookExists())
		Directory::CreateDirectory(User + "//book");
}

void mainForm::ChangeSelectionBackColor(Color color, RichTextBox^ richTB)
{
	UpdateLastBookPage();
	CreateCustomBook();
	if (richTB->SelectionLength <= 0) {
		MessageInfo->Show("Выделите текст", "Выделение текста");
		return;
	}

	richTB->SelectionBackColor = color;
}
void mainForm::ChangeSelectionFontStyle(FontStyle style, RichTextBox^ richTB)
{
	UpdateLastBookPage();
	CreateCustomBook();
	if (richTB->SelectionLength <= 0) {
		MessageInfo->Show("Выделите текст", "Изменение шрифта");
		return;
	}

	Drawing::Font^ currentFont = richTB->SelectionFont;
	Drawing::Font^ newFont = gcnew Drawing::Font(currentFont, currentFont->Style ^ style);

	richTB->SelectionFont = newFont;
}
void mainForm::SetSelectionFontByDefault(RichTextBox^ richTB)
{
	UpdateLastBookPage();
	CreateCustomBook();
	if (richTB->SelectionLength <= 0) {
		if (MessageInfo != nullptr)
			MessageInfo->Show("Выделите текст", "Очистка пометок");
		return;
	}
	try {
		int start = richTB->SelectionStart;
		int end = start + richTB->SelectionLength;

		for (int i = start; i < end; i++) {
			Drawing::Font^ currentFont = richTB->SelectionFont;
			if (currentFont == nullptr) {
				currentFont = richTB->Font;
			}
			Color currentBackColor = richTB->SelectionBackColor;
		}

		Drawing::Font^ defaultFont = gcnew Drawing::Font("Century Gothic", richTB->SelectionFont->Size);
		richTB->SelectionFont = defaultFont;
		richTB->SelectionBackColor = Color::FromArgb(64, 66, 88);
	}
	catch (Exception^ e) {
		if (MessageError != nullptr)
			MessageError->Show(e->Message, "Неизвестная ошибка");
	}
}

Void mainForm::btnHighlight_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	ChangeSelectionBackColor(Color::Gray, CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}
Void mainForm::btnUnderline_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	ChangeSelectionFontStyle(FontStyle::Underline, CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}
Void mainForm::btnThick_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	ChangeSelectionFontStyle(FontStyle::Bold, CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}
Void mainForm::btnStrikeOut_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	ChangeSelectionFontStyle(FontStyle::Strikeout, CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}
Void mainForm::btnItalic_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	ChangeSelectionFontStyle(FontStyle::Italic, CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}
Void mainForm::btnClearFilters_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateLastBookPage();
	SetSelectionFontByDefault(CurrentRichBox);
	SaveBook(CurrentBookFile, CurrentRichBox);
}

Void mainForm::dropdownPages_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = dropdownPages->SelectedIndex;
	Book->SetPage(selectedIndex);
	UpdateLastBookPage();
	CreateCustomBook();
	CreateLastPage();
}
Void mainForm::btnPreviousBook_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentIndex = dropdownPages->SelectedIndex;
	if (currentIndex > 0) {
		dropdownPages->SelectedIndex = currentIndex - 1;
	}
}
Void mainForm::btnBookNext_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentIndex = dropdownPages->SelectedIndex;
	if (currentIndex < dropdownPages->Items->Count - 1) {
		dropdownPages->SelectedIndex = currentIndex + 1;
	}
}
