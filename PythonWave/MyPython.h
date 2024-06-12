#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::IO;

class MyPython
{
public:

	MyPython() {
	}

	String^ Start(String^ user = "", String^ code = "") {
		String^ path = "myscript.py";
		if (user != "") {
			path = user + "//myscript.py";
		}
		FileStream^ fileStream = gcnew FileStream(path, FileMode::Create, FileAccess::Write);
		StreamWriter^ writer = gcnew StreamWriter(fileStream);

		writer->Write(code);
		writer->Close();
		fileStream->Close();

		return gcnew String(PyRun(path).c_str());
	}
private:
	std::string PyRun(String^ path) {
		std::string result;
		try {
			// ����������� String^ � std::string
			msclr::interop::marshal_context context;
			std::string stdPath = context.marshal_as<std::string>(path);

			STARTUPINFO si;
			PROCESS_INFORMATION pi;
			ZeroMemory(&si, sizeof(si));
			si.cb = sizeof(si);
			ZeroMemory(&pi, sizeof(pi));

			// �������� ������ ������� ��� ������� Python
			std::string commandStr = "python.exe " + stdPath;

			// ����������� std::string � TCHAR[]
			std::vector<TCHAR> command(commandStr.begin(), commandStr.end());
			command.push_back(0);

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
			if (!CreateProcess(NULL, command.data(), NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
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
		}
		catch (const std::exception& e) {
			result = "������ ������� ������: ";
			result += e.what();
			result += "\n�������� � ��� �� ���������� Python, ���� ��� �� ��� ���������� ��������� ��������� �� ����� �������������� ��� ����� ������ ��������";
		}
		return result;
	}
};