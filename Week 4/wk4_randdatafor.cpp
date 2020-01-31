// ***************************************************************************
// wk4_randdatafor.cpp
//
// Summary: Demo of gernating a random number, validating user input, and a
//          for loop.
// Author: Matthew Van Vleet
// Created: 1/30/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    /*
    srand(time(NULL));

    int randNumb;

    randNumb = rand();
    
    cout << "rand()  " << randNumb << endl;

    randNumb = rand() % 100;

    cout << "rand() % 100  " << randNumb << endl;

    int userNum;

    do
    {   
        cout << "Enter a value from 5 to 10, inclusive: ";
        cin >> userNum;

        if (userNum < 5 || userNum > 10)
            cout << "Bad Input.\n";
        
    } while (userNum < 5 || userNum > 10);

    cout << "You did it";
    */
    int i;
    for ( i = 0; i < 10; i++) {
        cout << i << endl;
    }
    cout << "The counter ended at" << i<< endl;
    return 0;
}