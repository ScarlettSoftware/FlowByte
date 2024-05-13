#include <iostream>
#include "../Dependencies/Colors.hpp"
#include <Windows.h>
#include <string>
#include "../Gatherinformation.hpp"
#include "../HostsBlocker.hpp"

namespace Flowbyte_tabs {


    void Home_tab() {
        string app_version = " v1.0.1.0";
        string app_build = " Beta";
        string last_updated = "11/05/2024 12:00 PM EEST";
        string app_creator = "HeavenlyRestricted1337";

        cout << hue::light_aqua << "[ FlowByte Home ]" << endl;
        cout << " " << endl;
        cout << dye::light_green("[ Info ] Application version: ") << hue::reset << app_version << endl;
        cout << dye::light_green("[ Info ] Application build: ") << hue::reset << app_build << endl;
        cout << dye::light_green("[ Info ] Last updated: ") << hue::reset << last_updated << endl;
        cout << dye::light_green("[ Info ] Application made By: ") << hue::reset << hue::yellow << app_creator << hue::reset << endl;
        cout << " " << endl;
        cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << "Press Backspace to go back to the menu!" << endl;
    }

    void Download_tab() {
        system("CLS");
        cout << hue::light_aqua << "[ FlowByte Download ]" << endl;
        cout << " " << endl;
        cout << hue::light_aqua << "[1]" << hue::reset << " Applications" << endl;
        cout << hue::light_aqua << "[2]" << hue::reset << " Games" << endl;
        cout << hue::light_aqua << "[3]" << hue::reset << " Emulators" << endl;
        cout << " " << endl;      
        cout << hue::grey << "[ Choice ] " << hue::reset << "Enter your choice: ";

    }

    void Tools_tab() {
        system("CLS");
        cout << hue::light_aqua << "[ FlowByte Tools ]" << hue::reset << endl;
        cout << " " << endl;
        cout << hue::light_red << "[1]" << hue::reset << " Spoofer" << endl;
        cout << hue::light_aqua << "[2]" << hue::reset << " PassGen" << endl;
        cout << " " << endl;
        cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << " Enter your choice or press Backspace to go back to the menu!" << endl;
        cout << " " << endl;
        cout << hue::grey << "[ Choice ] " << hue::reset << "Enter your choice: ";
    }

    void Options_tab() {
        system("CLS");
        cout << hue::light_aqua << "[ FlowByte Options ]" << hue::reset << endl;
        cout << " " << endl;
        cout << hue::light_aqua << "[1] " << hue::reset << "System Information" << endl;
        cout << hue::light_aqua << "[2] " << hue::reset << "Hosts Blocker" << endl;
        cout << " " << endl;
        cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << " Enter your choice or press Backspace to go back to the menu!" << endl;
        cout << " " << endl;
        cout << hue::grey << "[ Choice ] " << hue::reset << "Enter your choice: ";
    }

    namespace Download_tab_subtabs {

        void applications_subtab() {
            int choice;
            cout << hue::light_aqua << "[ FlowByte Applications ]" << hue::reset << endl;
            cout << " " << endl;
            cout << "[1] Adobe Photoshop 2024" << endl;
            cout << "[2] Adobe After Effects 2023" << endl;
            cout << "[3] Adobe Illustrator 2024" << endl;
            cout << "[4] Adobe InDesign 2024" << endl;
            cout << "[5] Adobe Lightroom 2024" << endl;
            cout << "[6] Adobe Premiere 2024" << endl;
            cout << "[7] Adobe Animate 2024" << endl;
            cout << "[8] Vegas Pro 18" << endl;
            cout << "[9] Movie Studio 2023" << endl;
            cout << "[10] Microsoft 365" << endl;
            cout << " " << endl;
            cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << " Enter your choice or press Backspace to go back to the menu!" << endl;
            cout << " " << endl;
            cout << hue::grey << "[ Choice ] " << hue::reset << "Enter your choice: ";
            cin >> choice;

            // Handle application choice
            switch (choice) { // List Of Torrent Magnet Applications
            case 1:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re - Directing To Torrent - Adobe Photoshop 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:84B28DCE7AE9F2AA63CF17B2D02592B438115457&dn=Adobe+Photoshop+2024+v25.0+Beta+Pre-Activated+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 2:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe After Effects 2023" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:47CF2B47F8633E416F3033EB6A73FC9B503226BB&dn=Adobe+After+Effects+2024+v24.0.1.2+%28x64%29+Pre-Cracked+%7BCracksHash%7D&tr=udp%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.pirateparty.gr%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.coppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.open-internet.nl%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce ", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 3:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe Illustrator 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:82F3A87CA20FF15729D57F9DD06E5EC532F893B8&dn=Adobe+Illustrator+2024+v28.0.0.88+%28x64%29+Pre-Activated+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 4:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe InDesign 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:B07F6FA3D0686DF62E22CACBE5698D6F093E58ED&dn=Adobe+InDesign+2024+v19.2.0.46+%28x64%29+%2B+Fix+%7BCracksHash%7D&tr=udp%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.pirateparty.gr%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.coppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.open-internet.nl%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 5:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe Lightroom 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:981CDFF4E3B15201547070C46985164E3FA0B097&dn=Adobe+Lightroom+Classic+2024+v13.0.0.15+%28x64%29+Pre-Activated+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 6:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe Premiere 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:42D264A15B440A819627DDE81576E0A4E8243C06&dn=Adobe+Premiere+Pro+2024+v24.0.3.2+%28x64%29+Pre-Activated+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 7:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Adobe Animate 2024" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:4BA3BFABA76C86431076BFAE05A034D60D13753C&dn=Adobe+Animate+2024+v24.0.1.329+%28x64%29+%2B+Patch+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 8:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Vegas Pro 18" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:F2611AFD7FA7108A1B9998B5B80239C04758B7BA&dn=MAGIX+VEGAS+Pro+18.0.0.284+%28x64%29+Multilingual+%2B+Crack+%5BFTUApps%5D&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Fp4p.arenabg.com%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2F9.rarbg.to%3A2710%2Fannounce&tr=udp%3A%2F%2Fexodus.desync.com%3A6969%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.coppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 9:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Movie Studio 2023" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:45705112A636CE44819D953603F26977F985D1DA&dn=MAGIX+Movie+Studio+2024+%28All+Editions%29+v23.0.1.179+%2B+Crack+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            case 10:
                cout << hue::light_purple << "[ FlowByte ] " << hue::reset << hue::light_green << "Re-Directing To Torrent - Microsoft 365" << hue::reset << endl;
                ShellExecute(0, 0, L"magnet:?xt=urn:btih:FDBB8E88D00DD57F567618E443659F8C9C646685&dn=Microsoft+Office+365+ProPlus+-+Online+Installer+v3.2.1+-+%5BhaxNode%5D&tr=udp%3A%2F%2Fopen.stealth.si%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.tiny-vps.com%3A6969%2Fannounce&tr=udp%3A%2F%2Ffasttracker.foreverpirates.co%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=udp%3A%2F%2Fexplodie.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.cyberia.is%3A6969%2Fannounce&tr=udp%3A%2F%2Fipv4.tracker.harry.lu%3A80%2Fannounce&tr=udp%3A%2F%2Ftracker.uw0.xyz%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.birkenwald.de%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.torrent.eu.org%3A451%2Fannounce&tr=udp%3A%2F%2Ftracker.moeking.me%3A6969%2Fannounce&tr=udp%3A%2F%2Fopentor.org%3A2710%2Fannounce&tr=udp%3A%2F%2Ftracker.dler.org%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.opentrackr.org%3A1337%2Fannounce&tr=http%3A%2F%2Ftracker.openbittorrent.com%3A80%2Fannounce&tr=udp%3A%2F%2Fopentracker.i2p.rocks%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.internetwarriors.net%3A1337%2Fannounce&tr=udp%3A%2F%2Ftracker.leechers-paradise.org%3A6969%2Fannounce&tr=udp%3A%2F%2Fcoppersurfer.tk%3A6969%2Fannounce&tr=udp%3A%2F%2Ftracker.zer0day.to%3A1337%2Fannounce", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[ FlowByte ] " << "Application is closing in 3 seconds " << endl;
                break;
            default:
                cout << "[ Info ]" << hue::red << " Invalid" << hue::reset << " choice" << endl;
                cout << "[ Info ]" << hue::light_blue << " Please enter a number between 1 and 10." << hue::reset << endl;
            }
        }

        void games_subtab() {
            cout << hue::light_aqua << "[ FlowByte Games ]" << hue::reset << endl;
            cout << " " << endl;
            cout << hue::light_red << "[ FlowByte ] " << hue::reset << "Currently games tab is unavailable, sorry for inconvenience" << endl;
        }

        void emulators_subtab() {
            system("CLS");
            cout << hue::light_aqua << "[ FlowByte Emulators ]" << hue::reset << endl;
            cout << " " << endl;
            int choice;

            cout << "[1] Yuzu Emulator EA (Latest Build)" << endl;
            cout << "[2] Citra Emulator (Latest Build)" << endl;
            cout << " " << endl;
            cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << "Enter your choice or press Backspace to go back to the menu!" << endl;
            cout << " " << endl;
            cout << hue::grey << "[ Choice ] " << hue::reset << "Enter your choice: ";
            cin >> choice;
            // Handle application choice
            switch (choice) { // List Of Torrent Magnet/Google Drive Applications
            case 1:
                cout << hue::light_purple << "[FlowByte] " << hue::reset << hue::light_green << "Re - Directing To Google Drive - Yuzu Emulator EA" << hue::reset;
                ShellExecute(0, 0, L"https://drive.google.com/file/d/1q0u_uPlJ33NdZYCpcV0W670koKSKY5MU/view?usp=sharing", 0, 0, SW_SHOW);
            case 2:
                cout << hue::light_purple << "[FlowByte] " << hue::reset << hue::light_green << "Re-Directing To Google Drive -  " << hue::reset;
                ShellExecute(0, 0, L"https://drive.google.com/file/d/1V8g7Z-IWpkHP5Nkf-5Y18fV5S2j1C_QM/view?usp=sharing", 0, 0, SW_SHOW);
                Sleep(3000);
                cout << hue::light_purple << "[FlowByte] " << "Application is closing in 3 seconds " << endl;
                break;
            default:
                cout << "[ Info ] " << hue::red << "Invalid" << hue::reset << " choice" << endl;
                cout << "[ Info ] " << hue::light_blue << "Please enter a number between 1 and 2." << hue::reset << endl;
            }
        }
    }

    namespace Tools_tab_subtabs {

        void passgen() {
            const string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
            const int length = 18;

            // Seed the random number generator
            srand(static_cast<unsigned int>(time(nullptr)));

            for (int j = 0; j < 10; ++j) {
                string password;

                for (int i = 0; i < length; ++i) {
                    password += charset[rand() % charset.length()];
                }

                cout << hue::light_purple << "[FlowByte] " << hue::reset << "Generated Password " << ": " << password << endl;
            }
        }

        void spoofer() {
            cout << hue::light_red << "[FlowByte] " << hue::reset << "Currently spoofer unavailable" << endl;
        }

    }

    namespace Options_tab_subtabs {
   
       void system_info() {

           string GetComputerUser = GetComputerUserName();
           string GetComputerGraphics = GetComputerGPUName();
           string GetComputerProcessor = GetComputerCpuName();
           string GetComputerMemory = GetComputerRamInfo();
           string GetComputerMOB = GetComputerMotherboardName();
           string GetComputerWinVer = GetComputerWindowsVersion();

            cout << hue::light_purple << "[ FlowByte System Information]" << hue::reset << endl;
            cout << " " << endl;
            cout << dye::purple("Current User: ") << GetComputerUser << endl;
            cout << dye::purple("Graphics processing unit: ") << GetComputerGraphics << endl;
            cout << dye::purple("Central processing unit: ") << GetComputerProcessor << endl;
            cout << dye::purple("Random Access Memory: ") << GetComputerMemory << endl;
            cout << dye::purple("Motherboard: ") << GetComputerMOB << endl;
            cout << dye::purple("OS: ") << GetComputerWinVer << endl;
            cout << " " << endl;
            cout << hue::grey << "[ FlowByte Menu ] " << hue::reset << "Press Backspace to go back to the menu!" << endl;

        }

       void hosts_blocker() {
           cout << hue::light_aqua << "[ FlowByte Hosts Blocker ]" << hue::reset << endl;
           cout << " " << endl;
           hosts_blocker::adobe_blocker();
           cout << " " << endl;
       }

    }
  
}
