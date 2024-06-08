#pragma once
#include "mainForm.h"

using namespace PythonWave;
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;


void mainForm::SaveBook(String^ Point, RichTextBox^ richTextBox)
{
	String^ filePath = User + "//" + Point + ".rtf";

	if (File::Exists(filePath))
	{
		File::Delete(filePath);
	}

	FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
	StreamWriter^ sw = gcnew StreamWriter(fileStream);
	sw->Write(richTextBox->Rtf);
	sw->Close();
}
void mainForm::LoadBook(String^ Point, RichTextBox^ richTextBox)
{
	String^ filePath = User + "//" + Point + ".rtf";
	if (!File::Exists(filePath)) {
		filePath = "books//" + Point + ".rtf";
	}

	if (!File::Exists(filePath)) {
		MessageError->Show("Книга не найдена", "Целостность файлов нарушена");
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
void mainForm::UpdateLastBookPage() {
	CurrentBookPage = Book->SelectedTab;
	CurrentBookIndex = Book->SelectedIndex;
}

bool mainForm::isCustomBookExists() {
	return Directory::Exists(User + "//myBook");
}
bool mainForm::isLastPageExists() {
	return File::Exists(User + "//myBook//lastpage.txt");
}
void mainForm::CreateCustomBook() {
	if (!isCustomBookExists())
		Directory::CreateDirectory(User + "//myBook");
	if (!isLastPageExists())
		File::Create(User + "//lastpage.txt");
}

void mainForm::ChangeSelectionBackColor(Color color, RichTextBox^ richTB)
{
	CreateCustomBook();
	if (richTB->SelectionLength <= 0) {
		MessageInfo->Show("Выделите текст", "Выделение текста");
		return;
	}

	richTB->SelectionBackColor = color;
}
void mainForm::ChangeSelectionFontStyle(FontStyle style, RichTextBox^ richTB)
{
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
	CreateCustomBook();
	if (richTB->SelectionLength <= 0) {
		MessageInfo->Show("Выделите текст", "Очистка пометок");
		return;
	}

	Drawing::Font^ currentFont = richTB->SelectionFont;

	bool isBold = currentFont->Bold;
	bool isItalic = currentFont->Italic;
	bool isStrikeout = currentFont->Strikeout;
	bool isUnderline = (currentFont->Underline == true);

	Color currentBackColor = richTB->SelectionBackColor;
	Color defaultBackColor = Color::FromArgb(64, 66, 88);
	bool isDefaultBackColor = (currentBackColor == defaultBackColor);

	if (!isBold && !isItalic && !isStrikeout && !isUnderline && isDefaultBackColor) {
		MessageInfo->Show("Никаких пометок для выделенного текста не замечено", "Очистка пометок");
		return;
	}

	if (isBold || isItalic || isStrikeout || isUnderline || !isDefaultBackColor) {
		Drawing::Font^ defaultFont = gcnew Drawing::Font("Century Gothic", currentFont->Size);
		richTB->SelectionFont = defaultFont;
		richTB->SelectionBackColor = defaultBackColor;
	}
}

Void mainForm::btnHighlight_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeSelectionBackColor(Color::Gray, richStart);
	SaveBook("r1", richStart);
}
Void mainForm::btnUnderline_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeSelectionFontStyle(FontStyle::Underline, richStart);
	SaveBook("r1", richStart);
}
Void mainForm::btnThick_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeSelectionFontStyle(FontStyle::Bold, richStart);
	SaveBook("r1", richStart);
}
Void mainForm::btnStrikeOut_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeSelectionFontStyle(FontStyle::Strikeout, richStart);
	SaveBook("r1", richStart);
}
Void mainForm::btnItalic_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeSelectionFontStyle(FontStyle::Italic, richStart);
	SaveBook("r1", richStart);
}
Void mainForm::btnClearFilters_Click(System::Object^ sender, System::EventArgs^ e) {
	SetSelectionFontByDefault(richStart);
	SaveBook("r1", richStart);
}
