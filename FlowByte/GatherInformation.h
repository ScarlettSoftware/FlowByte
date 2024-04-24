#include <Windows.h>
#include <cctype>
#include <string>
#include <lmcons.h>
#include <cstdlib>
#pragma comment(lib,"user32.lib")
#include <intrin.h>
#include <array>
#include <cstdlib>
#include <cstdio>
#include <fstream>

string GetComputerUserName() {
    char username[UNLEN + 1];
    DWORD username_len = UNLEN + 1;

    if (GetUserNameA(username, &username_len)) {
        // Convert the username to string
        std::string usernameStr = string(username);

        // Capitalize the first letter
        if (!usernameStr.empty()) {
            usernameStr[0] = toupper(usernameStr[0]);
        }

        return usernameStr;
    }
    else {
        return "Error getting user name.";
    }
}

string GetComputerGPUName() {
    // Get handle to the first display device
    DISPLAY_DEVICE displayDevice;
    displayDevice.cb = sizeof(DISPLAY_DEVICE);
    EnumDisplayDevices(NULL, 0, &displayDevice, 0);

    // Get GPU name from the display device
    return displayDevice.DeviceString;
}

string GetCpuName()
{
    // 4 is essentially hardcoded due to the __cpuid function requirements.
    // NOTE: Results are limited to whatever the sizeof(int) * 4 is...
    std::array<int, 4> integerBuffer = {};
    constexpr size_t sizeofIntegerBuffer = sizeof(int) * integerBuffer.size();

    std::array<char, 64> charBuffer = {};

 
    constexpr std::array<int, 3> functionIds = {
        0x8000'0002,
        0x8000'0003,
        0x8000'0004
    };

    std::string cpu;

    for (int id : functionIds)
    {
        // Get the data for the current ID.
        __cpuid(integerBuffer.data(), id);

        // Copy the raw data from the integer buffer into the character buffer
        std::memcpy(charBuffer.data(), integerBuffer.data(), sizeofIntegerBuffer);

        // Copy that data into a std::string
        cpu += std::string(charBuffer.data());
    }

    return cpu;
}

string GetRamInfo() {
    typedef BOOL(WINAPI* PGMSE)(LPMEMORYSTATUSEX);
    PGMSE pGMSE = (PGMSE)GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), TEXT("GlobalMemoryStatusEx"));
    if (pGMSE != nullptr) {
        MEMORYSTATUSEX mi;
        memset(&mi, 0, sizeof(MEMORYSTATUSEX));
        mi.dwLength = sizeof(MEMORYSTATUSEX);
        if (pGMSE(&mi) == TRUE)
            return "" + std::to_string(static_cast<int>(std::ceil(static_cast<double>(mi.ullTotalPhys) / (1024.0 * 1024.0 * 1024.0)))) + "GB";
        else
            pGMSE = nullptr;
    }
    if (pGMSE == nullptr) {
        MEMORYSTATUS mi;
        memset(&mi, 0, sizeof(MEMORYSTATUS));
        mi.dwLength = sizeof(MEMORYSTATUS);
        GlobalMemoryStatus(&mi);
        return "" + std::to_string(static_cast<int>(std::ceil(static_cast<double>(mi.dwTotalPhys) / (1024.0 * 1024.0 * 1024.0)))) + "GB";
    }
    return "Error: Failed to retrieve RAM information.";
}

string GetMotherboardName() {
    HKEY hKey;
    string motherboardName;

    // Open the registry key
    if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, "HARDWARE\\DESCRIPTION\\System\\BIOS", 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS) {
        // Buffer to store the motherboard name
        char buffer[256];
        DWORD bufferSize = sizeof(buffer);

        // Query the registry value
        if (RegQueryValueEx(hKey, "BaseBoardProduct", nullptr, nullptr, reinterpret_cast<LPBYTE>(buffer), &bufferSize) == ERROR_SUCCESS) {
            motherboardName = buffer;
        }

        // Close the registry key
        RegCloseKey(hKey);
    }

    return motherboardName;
}

string GetWindowsVersion() {
    DWORD dwVersion = 0;

    // Retrieve version information using GetProductInfo
    if (GetProductInfo(10, 0, 0, 0, &dwVersion) == ERROR_SUCCESS) {
        if (dwVersion >= 0x0B00) { // 0x0B00 represents Windows 11
            return "Windows 11 or later";
        }
        else if (dwVersion >= 0x0A00) { // 0x0A00 represents Windows 10
            return "Windows 10";
        }
    }

    // If GetProductInfo failed or the version is not 10 or 11, return "Unknown Windows Version"
    return "Unknown Windows Version";
}
