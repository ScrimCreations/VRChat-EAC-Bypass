#include <iostream>
#include <windows.h>
#include <shellapi.h>

int main()
{
    //This is obviously a joke / rickroll it doesn't bypass EAC
    SetConsoleTitleA("Real VRChat EAC Bypass By Scrim");
    std::cout << "Loading...\n";
    Sleep(1500);
    std::cout << "Getting EAC and shitting on it...\n";
    Sleep(1500);
    std::cout << "Bypassing...\n";
    Sleep(900);
    std::cout << "Dn lol\n";
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=O91DT1pR1ew", 0, 0, SW_SHOW);
}
