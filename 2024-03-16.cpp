#include "pch.h"
#include <iostream>
#include <ctime> //including ctime header for the time function
#include <string>
using namespace System;
using namespace std;

//generate 12 random characters or numbers
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
    //seed the random number generator using the current time
    //so its different random sequences each time the programm runs
    //this sould be called only once at the beginning of the programm!
    srand(time(NULL));

    //stores the passwords in strings
    string password1 = password_gen();
    string password2 = password_gen();
    string password3 = password_gen();

    //console output
    cout << password1 << endl;
    cout << password2 << endl;
    cout << password3 << endl;


    return 0;
}
