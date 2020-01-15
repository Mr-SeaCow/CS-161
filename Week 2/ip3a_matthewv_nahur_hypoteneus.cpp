// ***************************************************************************
// ip3a_matthewv_nahur_hypoteneus.cpp
//
// Summary: Finds the hypoteneus of a triangle based on input of the adjacent
//          and opposite side of the triangle.
// Author: Matthew Van Vleet and Nahu
// Created: 1/14/2020
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float inputSide1,
          inputSide2,
          outputHypoteneus;
    cout << "Enter the length of one of the" 
         << "perpendicular sides of a right triangle:\n";
    cin >> inputSide1;
    
    cout << "Now, enter the other side:\n";
    cin >> inputSide2;

    outputHypoteneus = sqrt(pow(inputSide1, 2) + pow(inputSide2, 2));
    cout << "The hypoteneus is " << outputHypoteneus
         << endl;

    return 0;
}