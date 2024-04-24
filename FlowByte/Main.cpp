#include <iostream>
#include <string>
#include "Dependencies/Colours/Colours.h"
#include <Windows.h>
#include "Tabs/Applications.h"
#include "Tabs/Games.h"
#include "Tabs/Emulators.h"
#include "Tabs/Tools.h"
using namespace std;

string app_version = " v1.0.0.5";
string app_build = "Beta";
string last_updated = "24/04/2024 9:50 PM EEST";
string current_user = "HeavenlyRestricted";
string app_creator = "HeavenlyRestricted1337";

/* GatherInformation.h Strings*/
string GetComputerUser = GetComputerUserName();
string GetComputerGraphics = GetComputerGPUName();
string GetComputerCPU = GetCpuName();
string GetComputerRam = GetRamInfo();
string Getmobname = GetMotherboardName();
string GetWinVer = GetWindowsVersion();
/* GatherInformation.h Strings */

int main()
{
    cout << dye::light_purple("    FlowByte ") << app_version << app_build << endl;
    cout << ("----------------Credits-----------------") << endl;
    cout << dye::purple(" by HeavenlyRestricted // Team Scarlett ") << endl;
    cout << ("----------------------------------------") << endl;
    Sleep(3000);
    system("CLS");

    // Display menu options
     cout << hue::light_purple << "[FlowByte]" << hue::reset << " Welcome Back, " << hue::light_yellow << GetComputerUser << hue::reset << endl;
    cout << " " << endl;

    int choice;
    cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << " Dashboard" << endl;
    cout << " " << endl;
    cout << hue::light_aqua << "[1]" << hue::reset << " Home" << endl; 
    cout << hue::light_aqua << "[2]" << hue::reset << " Download" << endl; 
    cout << hue::light_aqua << "[3]" << hue::reset << " Tools" << endl; 
    cout << hue::light_aqua << "[4]" << hue::reset << " Options" << endl;
    cout << " " << endl;
    cout << "[Info] Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        // Home tab Functionality
        system("CLS");
        cout << dye::light_green("[Info] Application version: ") << hue::reset << app_version << endl;
        cout << dye::light_green("[Info] Application build: ") << hue::reset << app_build  << endl;
        cout << dye::light_green("[Info] Last updated: ") << hue::reset << last_updated << endl;
        cout << dye::light_green("[Info] Application made By: ") << hue::reset << hue::yellow << app_creator << hue::reset << endl;
        cout << " " << endl;
        break;
    case 2:
        // Download tab Functionality
        system("CLS");
        cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << " Download" << endl;
        cout << " " << endl;
        cout << hue::light_aqua << "[1]" << hue::reset << " Applications" << endl;
        cout << hue::light_aqua << "[2]" << hue::reset << " Games" << endl;
        cout << hue::light_aqua << "[3]" << hue::reset << " Emulators" << endl;
        cout << " " << endl;
        cout << "[Info] Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
        case 1:
            applications(); // Call function from "Tabs/Applications.h"
            break;
        case 2:
            gameroms(); // Call function from "Tabs/Games.h"
            break;
        case 3:
            emulators(); // Call function from "Tabs/Emulators.h"
            break;
        default:
            cout << "[Info]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
            cout << "[Info]" << hue::light_blue << " Please enter a number between 1 and 3." << hue::reset << endl;
        }
        break;
    case 3:
        // Tools tab functionality
        system("CLS");
        cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << " Tools" << endl;
        cout << " " << endl;
        cout << hue::light_red << "[1]" << hue::reset << " Spoofer" << endl;
        cout << hue::light_aqua << "[2]" << hue::reset << " PassGen" << endl;
        cout << " " << endl;
        cout << "[Info] Enter your choice (1-2): ";
        cin >> choice;

        switch (choice) {
        case 1:
            system("CLS");
            spoofer(); // Call function from "Tabs/Tools.h"
            break;
        case 2:
            system("CLS");
            passgen(); // Call function from "Tabs/Tools.h"
            break;
        default:
            cout << "[Info]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
            cout << "[Info]" << hue::red << " Please enter a number between 1 and 2." << hue::reset << endl;
        }
        break;
            case 4:
        // Tools tab functionality
        system("CLS");
          cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << " Options" << endl;
        cout << " " << endl;
        cout << hue::light_red << "[1]" << hue::reset << " System Specifications" << endl;
        cout << hue::light_aqua << "[2]" << hue::reset << " Other" << endl;
        cout << " " << endl;
        cout << "[Info] Enter your choice (1-2): ";
        cin >> choice;

        switch (choice) {
        case 1:
            system("CLS");
            cout << hue::light_purple << "[FlowByte]" << " Options" << hue::reset << endl;
            cout << " " << endl;
            cout << dye::purple("USER: ") << GetComputerUser << endl;
            cout << dye::purple("GPU: ") << GetComputerGraphics << endl;
            cout << dye::purple("CPU: ") << GetComputerCPU << endl;
            cout << dye::purple("RAM: ") << GetComputerRam << endl;
            cout << dye::purple("MOB: ") << Getmobname << endl;
            cout << dye::purple("WIN: ") << GetWinVer << endl;
            break;
        case 2:
            system("CLS");
            cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << endl;
            cout << " " << endl;
            cout << hue::light_red << "[FlowByte]" << hue::reset << " currently other tab is not available, sorry for inconvenience" << endl;
            break;
    default:
        cout << "[Info]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
        cout << "[Info]" << hue::light_blue << " Please enter a number between 1 and 3." << hue::reset << endl;
    }

    return 0;
}
