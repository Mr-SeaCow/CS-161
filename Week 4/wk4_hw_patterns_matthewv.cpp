// ***************************************************************************
// wk4_hw_patterns_matthewv.cpp
//
// Summary: Uses for loops to display special patterns on screen.
// Author: Matthew Van Vleet
// Created: 1/30/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {
    
    const int counterLimit = 7;

    for (int counter = 0; counter < counterLimit; counter++) 
        cout << "* ";

    cout << endl;

    for (int counter = 0; counter < counterLimit; counter++) {
        if (counter % 2 == 0)
            cout << "E ";
        else
            cout << "O ";
    }

    cout << endl;

    for (int counter = 0; counter < counterLimit; counter++) {
        switch(counter) {
            case 0:
            case 1: cout << "& ";
                    break; 
            case 2:
            case 3:
            case 4: cout << "@ ";
                    break;
            case 5: cout << "^ ";
                    break;
            case 6: cout << "! ";
                    break;
        }
    }

    cout << endl;

    return 0;
}