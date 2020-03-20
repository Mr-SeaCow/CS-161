// ***************************************************************************
// wk6_program2.cpp
//
// Summary: Computes an employees earnings for a pay period.
// Author: Russell and Matthew Van Vleet
// Created: 2/13/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void intro();
string getName();
float getValue();
float computeEarnings(float, float);
void showEarnings(string, string, float);

int main()
{
    float rateOfPay,
          hoursWorked,
          totalEarnings;

    string firstName,
           lastName;

    intro();

    cout << "Enter the rate of pay: ";
    rateOfPay = getValue();

    cout << "Enter the hours worked: ";
    hoursWorked = getValue();

    cin.ignore(254, '\n');

    cout << "Enter your First Name: ";
    firstName = getName();

    cout << "Enter your Last Name: ";
    lastName = getName();

    totalEarnings = computeEarnings(rateOfPay, hoursWorked);

    showEarnings(firstName, lastName, totalEarnings);

    return 0;
}

void intro() 
{            
    cout << "A program to compute an employee's wages.\n\n";
    return;
} 
void showEarnings(string fName, string lName, float earnings)
{
    cout << setprecision(2) << fixed << showpoint;
    cout << fName << " " << lName 
        << " earned " << earnings << " this pay period.";
    return;
}

float computeEarnings(float num1, float num2)
{
    return num1 * num2;
}

float getValue()
{
    float fVal;
    cin >> fVal;
    return fVal;
}

string getName()
{
    string name;
    getline(cin, name);
    return name;
}
