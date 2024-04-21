#include <iostream>
#include <string>
#include "Dependencies/Colours/Colours.h"
#include <Windows.h>
#include "Tabs/Applications.h"
#include "Tabs/Games.h"
#include "Tabs/Emulators.h"
#include "Tabs/Tools.h"
using namespace std;
//Tabs

string app_version = " v1.0.0.3";
string last_updated = "21/04/2024 11:00 PM EEST";
string current_user = "HeavenlyRestricted";
string app_creator = "HeavenlyRestricted1337";
string app_build = "Stable";

int main()
{
    cout << dye::light_purple("    FlowByte v1.0.0.3 Beta") << endl;
    cout << ("----------------------------------------") << endl;
    cout << dye::purple(" by HeavenlyRestricted // Team Scarlett ") << endl;
    cout << ("----------------------------------------") << endl;
    Sleep(3000);
    system("CLS");

    // Display menu options
    cout << hue::light_purple << "[FlowByte]" << hue::reset << " Welcome Back, " << hue::light_yellow << current_user << hue::reset << endl;
    cout << " " << endl;
    cout << hue::light_purple << "[FlowByte]" << hue::reset << " Choose Tab : " << endl;
    cout << " " << endl;

    int choice;
    cout << hue::light_aqua << "[Menu]" << hue::reset << " [1] Home" << endl; 
    cout << hue::light_aqua << "[Menu]" << hue::reset << " [2] Download" << endl; 
    cout << hue::light_aqua << "[Menu]" << hue::reset << " [3] Tools" << endl; 
    cout << " " << endl;
    cout << "[Info] Enter your choice (1-3): ";
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
        cout << hue::light_aqua << "[Menu]" << hue::reset << " [1] Applications" << endl;
        cout << hue::light_aqua << "[Menu]" << hue::reset << " [2] Games" << endl;
        cout << hue::light_aqua << "[Menu]" << hue::reset << " [3] Emulators" << endl;
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
        cout << hue::light_red << "[Menu]" << hue::reset << " [1] Spoofer" << endl;
        cout << hue::light_aqua << "[Menu]" << hue::reset << " [2] PassGen" << endl;
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
    default:
        cout << "[Info]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
        cout << "[Info]" << hue::light_blue << " Please enter a number between 1 and 3." << hue::reset << endl;
    }

    return 0;
}
