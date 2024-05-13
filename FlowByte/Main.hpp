#include <iostream>
#include "Dependencies/Colors.hpp"



namespace Flowbyte_menu {

    void watermark() {
        
        string app_version = " v1.0.1.5";
        string app_build = " Beta";
        string last_updated = "12/05/2024 11:56 AM EEST";
        string app_creator = "HeavenlyRestricted1337";

        cout << dye::light_purple("    FlowByte ") << app_version << app_build << endl;
        cout << " " << endl;
        cout << ("----------------Credits-----------------") << endl;
        cout << dye::purple("HeavenlyRestricted - Team Scarlett ") << endl;
        cout << ("----------------------------------------") << endl;
        Sleep(3000);
        system("CLS");
    }

    void dashboard() {
        cout << hue::light_aqua << "[ FlowByte Dashboard ]" << endl;
        cout << " " << endl;
        cout << hue::light_aqua << "[1] " << hue::reset << "Home" << endl;
        cout << hue::light_aqua << "[2] " << hue::reset << "Download" << endl;
        cout << hue::light_aqua << "[3] " << hue::reset << "Tools" << endl;
        cout << hue::light_aqua << "[4] " << hue::reset << "Options" << endl;

    }
   
}
