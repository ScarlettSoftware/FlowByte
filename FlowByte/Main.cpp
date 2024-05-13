// Windows Includes
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>

// Project Includes
#include "Tabs.hpp"
#include "../Main.hpp"


// Dependencies
#include "..\Dependencies\Colors.hpp"

// Namespaces
using namespace std;

string GetComputerUser = GetComputerUserName();

int main()
{

	int choice;
	Flowbyte_menu::watermark();
    start:
	cout << hue::light_purple << "[ FlowByte ] " << hue::reset << "Welcome Back, " << hue::light_yellow << GetComputerUser << hue::reset << endl;
	cout << " " << endl;
	Flowbyte_menu::dashboard();
	cout << " " << endl;
	cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << "Enter your choice: ";
	cin >> choice;
    switch (choice) {

    case 1: // Flowbyte Menu -> Home Tab
        system("CLS");
        Flowbyte_tabs::Home_tab();
        while (_getch() != VK_BACK);
        system("CLS");
        goto start;
        break;

    case 2: // Flowbyte Menu -> Download Tab
        system("CLS");
        downloads:
        Flowbyte_tabs::Download_tab();
        cin >> choice;
        switch (choice) {
        case 1: // Download -> Applications Subtab
            system("CLS");
            Flowbyte_tabs::Download_tab_subtabs::applications_subtab();

            break;

        case 2: // Download -> Games Subtab
            system("CLS");
            Flowbyte_tabs::Download_tab_subtabs::games_subtab();
            Sleep(2000);
            system("CLS");
            goto downloads;

        case 3: // Download -> Emulators Subtab
            system("CLS");           
            Flowbyte_tabs::Download_tab_subtabs::emulators_subtab();
            break;

        default:
            cout << "[ Info ] " << hue::red << "Invalid" << hue::reset << " choice" << endl;
            cout << "[ Info ] " << hue::light_blue << "Please enter a number between 1 and 3." << hue::reset << endl;
        }
        break;

    case 3: // Flowbyte Menu -> Tools Tab
        Flowbyte_tabs::Tools_tab();
        break;

    case 4: // Flowbyte Menu -> Options Tab
        Flowbyte_tabs::Options_tab();
        cin >> choice;

        switch (choice) {
        case 1: // Options -> System Information
            system("CLS");
            Flowbyte_tabs::Options_tab_subtabs::system_info();
            cout << " " << endl;
            while (_getch() != VK_BACK);
            system("CLS");
            goto start;
            
            break;
        case 2: // Options -> Hosts_blocker
            system("CLS");
            Flowbyte_tabs::Options_tab_subtabs::hosts_blocker();
            Sleep(3000);
            system("CLS");
            goto start;

            break;
        default:
            cout << "[ Info ] " << hue::red << "Invalid" << hue::reset << " choice" << endl;
            cout << "[ Info ] " << hue::light_blue << "Please enter a number between 1 and 3." << hue::reset << endl;
        }

    default:
        cout << "[ Flowbyte ]" << hue::red << "Invalid" << hue::reset << "choice" << endl;
    }

}
