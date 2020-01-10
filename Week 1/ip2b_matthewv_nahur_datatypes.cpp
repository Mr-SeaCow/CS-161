// ***************************************************************************
// ip2b_matthewv_nahur_datatypes.cpp
//
// Summary: A program that domstrates the use of different data types.
// Author: Matthew Van Vleet and Nahu
// Created: 1/9/20
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>




using namespace std;

int main()
{
    int inputInteger;
    float inputFloat;
    char inputChar;
    string inputString;

    cout << "Enter an integer: ";
    cin >> inputInteger;
    cout << "Enter a floating point number: ";
    cin >> inputFloat;
    cout << "Enter one character: ";
    cin >> inputChar;
    cout << "Enter one word: ";
    cin >> inputString;

    cout << "You entered..." << endl
         << inputInteger << endl
         << inputFloat << endl
         << inputChar << endl
         << inputString << endl;
    
    return 0;


}