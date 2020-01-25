// ***************************************************************************
// inclass_canvote2.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created:1/23/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

    int age;
    char isCitizen,
         isRegistered;
    
    cout << "How old are you? ";
    cin >> age;

    if (age >= 18 && age < 120) {
        cout << "Are you a citizen? (y/n) ";
        cin >> isCitizen;
        if (isCitizen == 'y' || isCitizen == 'Y') {
            cout << "Are you registered to vote? (y/n) ";
            cin >> isRegistered;
            if (isRegistered == 'y' || isRegistered == 'Y') {
                cout << "Go vote!\n";
            } else {
                cout << "You must be registered to vote.\n";
            }
        } else {
            cout << "You need to be a citizen to vote.\n";
        }
    } else {
        cout << "You can't vote at that age.\n";
    }
    

    return 0;
}

