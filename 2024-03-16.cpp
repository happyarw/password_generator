#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace System;
using namespace std;

void intialize_random() {
    srand(time(NULL));
}

string password_gen() {
    string password = "";
    char alphabet[90] = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!§$%&/()=?´`+*#'_-.:,;<>^" };

    for (int i = 0; i < 12; i++) {
        password += alphabet[rand() % 90];
    }

    return password;
}


int main()
{
    intialize_random();

    string password1 = password_gen();
    string password2 = password_gen();
    string password3 = password_gen();

    cout << password1 << endl;
    cout << password2 << endl;
    cout << password3 << endl;


    return 0;
}
