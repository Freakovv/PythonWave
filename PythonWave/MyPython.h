#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace System;
using namespace System::IO;

class MyPython
{
public:
    Void Start(String^ path, String^ code, String^ user = "") {
        
        if (path == "") {
			path = user + "//myscript.py";
        }
    }

private:
    std::string PyRun() {
        std::string result = "Unkown";
        try {
            STARTUPINFO si;
            PROCESS_INFORMATION pi;

            ZeroMemory(&si, sizeof(si));
            si.cb = sizeof(si);
            ZeroMemory(&pi, sizeof(pi));

            // Создание строки команды для запуска Python
            TCHAR command[] = TEXT("python.exe myscript.py");

            // Создание анонимного канала 
            HANDLE hReadPipe, hWritePipe;
            SECURITY_ATTRIBUTES saAttr;

            saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
            saAttr.bInheritHandle = TRUE;
            saAttr.lpSecurityDescriptor = NULL;

            if (!CreatePipe(&hReadPipe, &hWritePipe, &saAttr, 0)) {
                result = "Failed to create Pipe";
                return result;
            }

            // Анонимный канал как вывод для процесса Python
            si.hStdOutput = hWritePipe;
            si.hStdError = hWritePipe;
            si.dwFlags |= STARTF_USESTDHANDLES;

            // Запуск процесса Python
            if (!CreateProcess(NULL, command, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
                result = "Failed to create process";
                return result;
            }

            // Закрытие дескриптора записи
            CloseHandle(hWritePipe);

            // Чтение вывода процесса Python 
            DWORD dwRead;
            const int BUFFER_SIZE = 4096;
            char buffer[BUFFER_SIZE];

            while (ReadFile(hReadPipe, buffer, BUFFER_SIZE, &dwRead, NULL) != 0 && dwRead != 0) {
                result.append(buffer, dwRead);
            }

            // Ожидание завершения процесса Python
            WaitForSingleObject(pi.hProcess, INFINITE);

            // Закрытие дескрипторов процесса и потока
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);

            // Вывод результата
        }
        catch (const std::exception& e) {
            result = "Произошла ошибка запуска Python: ";
            result += e.what();
            result += "\nПопробуйте запустить PythonWave от имени администратора, это может решить проблему";
        }
        return result;
    }

};