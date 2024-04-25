#include <iostream>
#include "..\GatherInformation.h"
#include <Windows.h>
#include <string>


/* GatherInformation.h Strings*/
string GetComputerUser = GetComputerUserName();
string GetComputerGraphics = GetComputerGPUName();
string GetComputerCPU = GetCpuName();
string GetComputerRam = GetRamInfo();
string Getmobname = GetMotherboardName();
string GetWinVer = GetWindowsVersion();
/* GatherInformation.h Strings */

void options_sysinfo() {
    cout << hue::light_purple << "[FlowByte]" << " System Information" << hue::reset << endl;
    cout << " " << endl;
    cout << dye::purple("USER: ") << GetComputerUser << endl;
    cout << dye::purple("GPU: ") << GetComputerGraphics << endl;
    cout << dye::purple("CPU: ") << GetComputerCPU << endl;
    cout << dye::purple("RAM: ") << GetComputerRam << endl;
    cout << dye::purple("MOB: ") << Getmobname << endl;
    cout << dye::purple("WIN: ") << GetWinVer << endl;

}
