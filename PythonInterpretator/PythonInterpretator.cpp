#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>

int main() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // �������� ������ ������� ��� ������� Python
    TCHAR command[] = TEXT("python.exe myscript.py");

    // �������� ���������� ������ ��� �������� ������ �� �������� Python � ������������ �������
    HANDLE hReadPipe, hWritePipe;
    SECURITY_ATTRIBUTES saAttr;

    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    if (!CreatePipe(&hReadPipe, &hWritePipe, &saAttr, 0)) {
        std::cerr << "CreatePipe failed" << std::endl;
        return 1;
    }

    // ��������� ���������� ������ ��� ������ ��� �������� Python
    si.hStdOutput = hWritePipe;
    si.hStdError = hWritePipe;
    si.dwFlags |= STARTF_USESTDHANDLES;

    // ������ �������� Python
    if (!CreateProcess(NULL, command, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
        std::cerr << "Failed to create process." << std::endl;
        return 1;
    }

    // �������� ���������� ������ ���������� ������
    CloseHandle(hWritePipe);

    // ������ ������ �������� Python �� ���������� ������ � ���������� ��� � ����������
    DWORD dwRead;
    const int BUFFER_SIZE = 4096;
    char buffer[BUFFER_SIZE];

    std::string result;
    while (ReadFile(hReadPipe, buffer, BUFFER_SIZE, &dwRead, NULL) != 0 && dwRead != 0) {
        result.append(buffer, dwRead);
    }

    // �������� ���������� �������� Python
    WaitForSingleObject(pi.hProcess, INFINITE);

    // �������� ������������ �������� � ������
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    // ����� ����������
    std::cout << "Python output: " << result << std::endl;

    return 0;
}
