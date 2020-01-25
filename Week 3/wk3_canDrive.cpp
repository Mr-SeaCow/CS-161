// ***************************************************************************
// wk3_canDrive.cpp
//
// Summary: Determines whether or not a person can legally drive based on
//          inputs from the user.
// Author: Matthew Van Vleet
// Created: 1/21/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

    char hasLiscense, // y or n
         hasInsurance; // y or n

    cout << "CAN YOU DRIVE?" << endl << endl;

    cout << "Do you have a driver's license? (y or n) ";
    cin >> hasLiscense;

    cout << "Do you have insurance? (y or n) ";
    cin >> hasInsurance;

    if (hasLiscense == 'y' || hasLiscense == 'Y') {

        if (hasInsurance == 'y' || hasInsurance == 'Y') {
            
            cout << "Yay! You may drive!" << endl;
            return 0;

        } else if (hasInsurance == 'n' || hasInsurance == 'N') {

            cout << "You cannot drive. You must have insurance." << endl;
            return 0;

        }

    } else if (hasLiscense == 'n' || hasLiscense == 'N') {

        cout << "You cannot drive. You must have a license." << endl;
        return 0;

    }

    return 0;
}