#include <iostream>

void passgen() {
    const string charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    const int length = 18;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int j = 0; j < 10; ++j) {
        string password;

        for (int i = 0; i < length; ++i) {
            password += charset[rand() % charset.length()];
        }

        cout << "Generated Password " << j + 1 << ": " << password << endl;
    }
}

void spoofer() {
    cout << hue::light_red << "[FlowByte]" << hue::reset << " currently spoofer unavailable" << endl;
}