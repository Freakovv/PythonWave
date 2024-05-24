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

            // �������� ������ ������� ��� ������� Python
            TCHAR command[] = TEXT("python.exe myscript.py");

            // �������� ���������� ������ 
            HANDLE hReadPipe, hWritePipe;
            SECURITY_ATTRIBUTES saAttr;

            saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
            saAttr.bInheritHandle = TRUE;
            saAttr.lpSecurityDescriptor = NULL;

            if (!CreatePipe(&hReadPipe, &hWritePipe, &saAttr, 0)) {
                result = "Failed to create Pipe";
                return result;
            }

            // ��������� ����� ��� ����� ��� �������� Python
            si.hStdOutput = hWritePipe;
            si.hStdError = hWritePipe;
            si.dwFlags |= STARTF_USESTDHANDLES;

            // ������ �������� Python
            if (!CreateProcess(NULL, command, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
                result = "Failed to create process";
                return result;
            }

            // �������� ����������� ������
            CloseHandle(hWritePipe);

            // ������ ������ �������� Python 
            DWORD dwRead;
            const int BUFFER_SIZE = 4096;
            char buffer[BUFFER_SIZE];

            while (ReadFile(hReadPipe, buffer, BUFFER_SIZE, &dwRead, NULL) != 0 && dwRead != 0) {
                result.append(buffer, dwRead);
            }

            // �������� ���������� �������� Python
            WaitForSingleObject(pi.hProcess, INFINITE);

            // �������� ������������ �������� � ������
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);

            // ����� ����������
        }
        catch (const std::exception& e) {
            result = "��������� ������ ������� Python: ";
            result += e.what();
            result += "\n���������� ��������� PythonWave �� ����� ��������������, ��� ����� ������ ��������";
        }
        return result;
    }

};