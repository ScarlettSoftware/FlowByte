#include <iostream>

void emulators() {
    system("CLS");
    cout << hue::light_aqua << "[FlowByte Menu]" << hue::reset << " Emulators" << endl;
    cout << " " << endl;
    cout << hue::light_red << "[FlowByte]" << hue::reset << hue::aqua << " Fuck Nintendo" << hue::reset << endl;
    cout << " " << endl;
    int choice;

    cout << "[1]  Yuzu Emulator EA (Latest Build)" << endl;
    cout << "[2]  Citra Emulator (Latest Build)" << endl;
    cout << " " << endl;
    cout << "[Choice] Enter your choice (1-10): ";
    cin >> choice;
    // Handle application choice
    switch (choice) { // List Of Torrent Magnet/Google Drive Applications
    case 1:
        cout << hue::light_purple << "[FlowByte]" << hue::reset << hue::light_green << " Re - Directing To Google Drive - Yuzu Emulator EA" << hue::reset;
        ShellExecute(0, 0, "https://drive.google.com/file/d/1q0u_uPlJ33NdZYCpcV0W670koKSKY5MU/view?usp=sharing", 0, 0, SW_SHOW);
        break;
    case 2:
        cout << hue::light_purple << "[FlowByte]" << hue::reset << hue::light_green << " Re-Directing To Google Drive -  " << hue::reset;
        ShellExecute(0, 0, "https://drive.google.com/file/d/1V8g7Z-IWpkHP5Nkf-5Y18fV5S2j1C_QM/view?usp=sharing", 0, 0, SW_SHOW);
        Sleep(3000);
        cout << hue::light_purple << "[FlowByte]" << " Application is closing in 3 seconds " << endl;
        break;
    default:
        cout << "[Info]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
        cout << "[Info]" << hue::light_blue << " Please enter a number between 1 and 2." << hue::reset << endl;
    }
}
