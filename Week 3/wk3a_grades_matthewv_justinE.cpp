// ***************************************************************************
// wk3a_grades_matthewv_justinE.cpp
//
// Summary: Displays the letter grade based on the percentage grade given. 
// Author: Matthew Van Vleet and Justin E
// Created: 1/21/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {
    int inputGrade;

    cout << "Enter the percentage you earned in the class, as a whole "
         << "a whole number (90 for ninety percent, etc.):\n";
    
    cin >> inputGrade;

    if (inputGrade > 100) {
        cout << "That's not possible in this class.";
    } else if (inputGrade >= 90) {
        cout << "The grade you earned is: A";
    } else if (inputGrade >= 80) {
        cout << "The grade you earned is: B";
    } else if (inputGrade >= 70) {
        cout << "The grade you earned is: C";
    } else if (inputGrade >= 60) {
        cout << "The grade you earned is: D";
    } else if (inputGrade >= 0) {
        cout << "The grade you earned is: F";
    } else {
        cout << "That's not possible";
    }

    return 0;

}