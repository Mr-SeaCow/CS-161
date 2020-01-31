// ***************************************************************************
// wk4_inclass_a_matthewv_felipemf.cpp
//
// Summary: A program that computes the average of 8 numbers entred by a user.
// Author: Matthew Van Vleet and Felipe MF
// Created: 1/30/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

    const int AVG = 8;
    int userNum;
    float totalAverage;

    totalAverage = 0;

    cout << "Enter 8 integers, pressing Enter after each:\n";
    for (int counter = AVG; counter > 0; counter--) {
        cin >> userNum;
        totalAverage += userNum;
    }
    totalAverage /= AVG;
    cout << "The average of those numbers is " << totalAverage << endl;

    return 0 ;
}