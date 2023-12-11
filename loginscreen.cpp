#include "loginscreen.h"
#include <string>
#include <iostream>

using namespace std;

char LoginScreen::dispLogSc()
{
    unsigned __int16 password;
    cout << "Hello. Enter the password (*****)" << endl;
    cin >> password;
    switch (password)
    {
    case 20202:           //код хозяина мастерской
        system("cls");
        return 2;
        break;
    case 10101:           //код работника мастерской
        system("cls");
        return 1;
        break;
    default:
        cout << "Parol neveren" << endl;
        return 0;
        break;
    }

}
