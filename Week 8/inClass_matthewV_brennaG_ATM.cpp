// ***************************************************************************
// inClass_matthewV_brennaG_ATM.cpp
//
// Summary: Program that acts as an ATM.
// Author: Matthew Van Vleet and Brenna G
// Created: 2/25/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************

#include <iostream>
using namespace std;

void intro();                // title of the program & basic instructions
void getBalance(float &bal); // prompts user for original balance & returns balance
void getOption(char &opt);
void deposit(float, float &);
void withdraw(float, float &);
void showBalance(float); // displays the balance

int main()
{
    float balance;
    char option;
    intro();

    do
    {
        getOption(option);
        switch (option)
        {
        case 'b':
        case 'B':
            getBalance(balance);
            break;
        case 'd':
        case 'D':
            float depositValue;
            cout << "How much would you like to deposit? ";
            cin >> depositValue;
            deposit(depositValue, balance);
            break;
        case 'w':
        case 'W':
            float withdrawValue;
            cout << "How much would you like to withdraw? ";
            cin >> withdrawValue;
            withdraw(withdrawValue, balance);
            break;
        }
    } while (option != 'e' && option != 'E');
    return 0;
}

void intro()
{
    cout << "ATM MACHINE\n\n";
    return;
}

void getBalance(float &bal) {
    cout << "Your current balance is $" << bal << endl;
    return;
}; 
void getOption(char &opt) {
    cout << "B for see balance, D for deposit, W for withdraw, E for exit\n";
    cin >> opt;
    return;
};
void deposit(float amount, float & bal) {
    bal += amount;
    return;
};
void withdraw(float amount, float & bal) {
    if (amount > bal) {
        cout << "You are attempting to withdraw too much from your account.\n";
        return;
    }
    bal -= amount;
    return;
}
void showBalance(float bal) {
    cout << "Your current balance is $" << bal << endl;
};