// Tyler Tobin
// Simple Password Generator

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Function to return String from length parameter
string create_password(int length) {
    const string character_list = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:,.<>?";

    srand(static_cast<unsigned int>(time(nullptr)));

    string gen_password;
    for (int i = 0; i < length; ++i) {
        int index = rand() % character_list.length();
        gen_password += character_list[index];
    }

    return gen_password;
}

int main() {
    int passwordLength;

    cout << "Enter password length: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Can't be less than 0" << endl;
        return 1;
    }

    string gen_password = create_password(passwordLength);

    cout << "Your password: " << gen_password << endl;

    return 0;
}
