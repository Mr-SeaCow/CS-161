// ***************************************************************************
// wk5_homework.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created: 2/7/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void displayIntro();
int getNumber();
char getOperation();

int main()
{
    int inputNum1,
        inputNum2,
        total;
    char operation;

    displayIntro();

    operation = getOperation();
    inputNum1 = getNumber();
    inputNum2 = getNumber();

    switch (operation)
    {
        case '+':
            total = inputNum1 + inputNum2;
            break;
        
        case '*':
            total = inputNum1 * inputNum2;
            break;
    }

    cout << inputNum1 << ' ' << operation << ' '
         << inputNum2 << " = " << total;

    return 0;
}

void displayIntro()
{
    cout << "This program will find the sum or product of two numbers based "
         << "on what you enter.\n\n";

    return;
}

int getNumber()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    return num;
}

char getOperation()
{

    char operation;

    do
    {
        cout << "Enter + for the sum or * for the product: ";
        cin >> operation;

        if (operation != '+' && operation != '*')
            cout << "Please try again.\n";

    } while (operation != '+' && operation != '*');
    return operation;
}