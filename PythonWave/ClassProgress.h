#pragma once
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include <System.Xml>

using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Xml;

public ref class CourseProgress
{
public:
    int course1Progress;
    int course2Progress;
    int course3Progress;
    bool isCourse1Completed;
    bool isCourse2Completed;
    bool isCourse3Completed;

    CourseProgress() {
        // Инициализация значений по умолчанию
        course1Progress = 0;
        course2Progress = 0;
        course3Progress = 0;
        isCourse1Completed = false;
        isCourse2Completed = false;
        isCourse3Completed = false;
    }

    static CourseProgress^ LoadProgress(String^ configFilePath)
    {
        CourseProgress^ progress = gcnew CourseProgress();
        XmlDocument^ doc = gcnew XmlDocument();
        doc->Load(configFilePath);

        XmlNode^ root = doc->SelectSingleNode("configuration/progress");

        for each (XmlNode ^ node in root->ChildNodes)
        {
            String^ name = node->Attributes["name"]->Value;
            String^ value = node->Attributes["value"]->Value;

            if (name == "course1Progress")
                progress->course1Progress = Int32::Parse(value);
            else if (name == "course2Progress")
                progress->course2Progress = Int32::Parse(value);
            else if (name == "course3Progress")
                progress->course3Progress = Int32::Parse(value);
            else if (name == "isCourse1Completed")
                progress->isCourse1Completed = Boolean::Parse(value);
            else if (name == "isCourse2Completed")
                progress->isCourse2Completed = Boolean::Parse(value);
            else if (name == "isCourse3Completed")
                progress->isCourse3Completed = Boolean::Parse(value);
        }

        return progress;
    }

    void SaveProgress(String^ configFilePath)
    {
        XmlDocument^ doc = gcnew XmlDocument();

        // Создаем декларацию XML
        XmlDeclaration^ xmlDeclaration = doc->CreateXmlDeclaration("1.0", "utf-8", nullptr);
        XmlElement^ root = doc->DocumentElement;
        doc->InsertBefore(xmlDeclaration, root);

        // Создаем корневой элемент
        XmlElement^ configurationElement = doc->CreateElement("configuration");
        doc->AppendChild(configurationElement);

        // Создаем элемент прогресса
        XmlElement^ progressElement = doc->CreateElement("progress");
        configurationElement->AppendChild(progressElement);

        // Создаем элементы для каждого значения прогресса
        AddProgress(doc, progressElement, "course1Progress", course1Progress.ToString());
        AddProgress(doc, progressElement, "course2Progress", course2Progress.ToString());
        AddProgress(doc, progressElement, "course3Progress", course3Progress.ToString());
        AddProgress(doc, progressElement, "isCourse1Completed", isCourse1Completed.ToString());
        AddProgress(doc, progressElement, "isCourse2Completed", isCourse2Completed.ToString());
        AddProgress(doc, progressElement, "isCourse3Completed", isCourse3Completed.ToString());

        // Сохраняем документ в файл
        doc->Save(configFilePath);
    }

private:
    void AddProgress(XmlDocument^ doc, XmlElement^ progressElement, String^ name, String^ value)
    {
        XmlElement^ progressItem = doc->CreateElement("progressItem");
        progressItem->SetAttribute("name", name);
        progressItem->SetAttribute("value", value);
        progressElement->AppendChild(progressItem);
    }
};
