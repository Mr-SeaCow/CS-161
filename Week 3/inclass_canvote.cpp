// ***************************************************************************
// inclass_canvote.cpp
//
// Summary: Returns whether or not a user can vote based on their age.
// Author: Matthew Van Vleet
// Created: 1/21/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void voteLogic(int age, bool isCitizen);

int main() {
    int age;
    bool isCitizen;

    cout << "Enter your age. ";
    cin >> age;

    cout << "Are you a citizen? (0 for no, 1 for yes) ";
    cin >> isCitizen;

    voteLogic(age, isCitizen);

    /*
    cout << "    Test Cases    " << endl;
    cout << endl <<  "Age: 120, Citizen: true\n";
    voteLogic(121, true);
    cout << endl << "Age: 121, Citizen: false\n";
    voteLogic(121, false);
    cout << endl << "Age: 18, Citizen: true\n";
    voteLogic(18, true);
    cout <<endl << "Age: 18, Citizen: false\n";
    voteLogic(18, false);
    cout << endl << "Age: 17, Citizen: true\n";
    voteLogic(121, true);
    cout << endl << "Age: 17, Citizen: false\n";
    voteLogic(17, false);
    */
    

    return 0;
}

void voteLogic(int age, bool isCitizen) {
    if (age >= 120) {
        cout << "That's not possible!\n";
    } else if (!isCitizen){
        cout << "You must become a citizen.\n";
    } else if (age >= 18 && isCitizen) {
        cout << "You can vote.\n";
    } else {
        cout << "You are too young to vote.\n";
    }
}