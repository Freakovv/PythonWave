#pragma once
#include <Windows.h>
#include <msclr\marshal_cppstd.h> // Для конвертации System::String в std::string

using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Xml;

public ref class Config
{
public:
    bool dragTransparent;
    bool hasFormShadow;
    bool greeting;
    int borderForm;
    int borderBtn;
    int volume;

    Config() {
        // Инициализация значений по умолчанию
        dragTransparent = false;
        hasFormShadow = false;
        greeting = false;
        borderForm = 0;
        borderBtn = 0;
        volume = 0;
    }

    static Config^ LoadConfig(String^ configFilePath)
    {
        Config^ config = gcnew Config();
        XmlDocument^ doc = gcnew XmlDocument();
        doc->Load(configFilePath);

        XmlNode^ root = doc->SelectSingleNode("configuration/settings");

        for each (XmlNode ^ node in root->ChildNodes)
        {
            String^ name = node->Attributes["name"]->Value;
            String^ value = node->Attributes["value"]->Value;

            if (name == "dragTransparent")
                config->dragTransparent = Boolean::Parse(value);
            else if (name == "hasFormShadow")
                config->hasFormShadow = Boolean::Parse(value);
            else if (name == "greeting")
                config->greeting = Boolean::Parse(value);
            else if (name == "borderForm")
                config->borderForm = Int32::Parse(value);
            else if (name == "borderBtn")
                config->borderBtn = Int32::Parse(value);
            else if (name == "volume")
                config->volume = Int32::Parse(value);
        }

        return config;
    }

    void SaveConfig(String^ configFilePath)
    {
        XmlDocument^ doc = gcnew XmlDocument();

        // Создаем декларацию XML
        XmlDeclaration^ xmlDeclaration = doc->CreateXmlDeclaration("1.0", "utf-8", nullptr);
        XmlElement^ root = doc->DocumentElement;
        doc->InsertBefore(xmlDeclaration, root);

        // Создаем корневой элемент
        XmlElement^ configurationElement = doc->CreateElement("configuration");
        doc->AppendChild(configurationElement);

        // Создаем элемент настроек
        XmlElement^ settingsElement = doc->CreateElement("settings");
        configurationElement->AppendChild(settingsElement);

        // Создаем элементы для каждой настройки
        AddSetting(doc, settingsElement, "dragTransparent", dragTransparent.ToString());
        AddSetting(doc, settingsElement, "hasFormShadow", hasFormShadow.ToString());
        AddSetting(doc, settingsElement, "greeting", greeting.ToString());
        AddSetting(doc, settingsElement, "borderForm", borderForm.ToString());
        AddSetting(doc, settingsElement, "borderBtn", borderBtn.ToString());
        AddSetting(doc, settingsElement, "volume", volume.ToString());

        // Сохраняем документ в файл
        doc->Save(configFilePath);
    }

private:
    void AddSetting(XmlDocument^ doc, XmlElement^ settingsElement, String^ name, String^ value)
    {
        XmlElement^ settingElement = doc->CreateElement("setting");
        settingElement->SetAttribute("name", name);
        settingElement->SetAttribute("value", value);
        settingsElement->AppendChild(settingElement);
    }
};
