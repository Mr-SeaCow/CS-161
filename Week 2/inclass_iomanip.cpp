// ***************************************************************************
// inclass_iomanip.cpp
//
// Summary: Demo of setprecision(), fixed, showpoint, left, and right.
// Author: Matthew Van Vleet
// Created: 1/16/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 
int main()
{
     float hours,
           payRate, 
           earnings;

     hours = 17.3;
     payRate = 18.57;
 
     earnings = hours * payRate;


     cout << fixed << showpoint << setprecision(2);
     cout << setw(11) << right << "Hours: " << right << hours << endl
          << setw(11) << right << "Rate: " << right << payRate << endl
          << setw(11) << right  << "Earnings: "<< right << earnings << endl;


     return 0;
}