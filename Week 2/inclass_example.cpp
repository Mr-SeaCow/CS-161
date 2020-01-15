// ***************************************************************************
// inclass_example.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created: 1/14/2020
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <cmath> // sqrt() pow()

using namespace std;

int main()
{
    int iNum1,
        iNum2;
    float fNum;
    int iAnswer;
    float fAnswer;

    iNum1 = 5;
    iNum2 = 3; 
    fNum = 1.234; 
    iAnswer = iNum1 / iNum2;

    cout << iNum1 << " / " << iNum2
         << " = " << iAnswer << endl;
    
    iAnswer = iNum1 % iNum2;
    cout << iNum1 << " % " << iNum2
         << " = " << iAnswer << endl;

    fAnswer = static_cast<float>(iNum1) / iNum2;

    cout << iNum1 << " / " << iNum2
         << " = " << fAnswer << endl;

    cout << iNum1 << "^2 = "
         << pow(iNum1, 2) << endl;
    
    cout << "The square root of " << iNum1
         << " is " << sqrt(iNum1) << endl;

    return 0;
}  