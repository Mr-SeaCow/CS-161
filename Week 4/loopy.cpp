// ***************************************************************************
// loopy.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created:
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>

using namespace std;

int main() {   

    // counter-controlled loop
    string secretMessage;
    int counter;

    secretMessage = "Aardvarks rock!\n";

    cout << "How many times would you like a message to appear? ";
    cin >> counter;

    while (counter > 0) {
        cout << secretMessage;
        counter--;
    }

    cout << "The while loop is done.\n\n";

    // the do...while loop to tell if a nubmer is positive or negative
    int userNum;

    do {

        cout << "Enter any integer. Type 0 to quit. ";
        cin >> userNum;

        if (userNum > 0)
            cout << "Positive\n";
        else if (userNum < 0)
            cout << "Negative\n";
        else
            cout << "Goodbye!\n";

    } while(userNum != 0);

    int total,
        num1;
    int counter = 0;

        cout << "Enter a positive number: ";
        cin >> num1;

        while (num1 > 0) {
            total += num1;
            cin >> num1;
        }
        cout << total << endl;

    cout << "End of the do...while loop\n";

    return 0;
}