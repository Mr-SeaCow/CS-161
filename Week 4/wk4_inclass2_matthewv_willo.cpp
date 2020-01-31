// ***************************************************************************
// wk4_inclass2_matthewv_willo.cpp
//
// Summary: Allows the user to deposit and withdraw money from a bank account.
// Author: Matthew Van Vleet and Will O
// Created:
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    float inputAmount,
          bankTotal;

    cout << "How much is in your bank account? ";
    cin >> bankTotal;

    cout << setprecision(2) << fixed << showpoint;

    do {
        cout << "\nEnter a positive amount to deposit to your account.\n"
             << "Enter a negative amount to withdraw to your account.\n"
             << "Enter 0 to exit.\n";
        
        cin >> inputAmount;
        bankTotal = bankTotal + inputAmount;
        if (inputAmount > 0)
            cout << "You deposited $" << inputAmount << " into your account.\n";
        else if (inputAmount < 0)
            cout << "You withdrew $" << abs(inputAmount) << " from your account.\n";
        
        cout << "Your bank account now has $" << bankTotal;
        
    } while (inputAmount != 0);

    return 0;
}