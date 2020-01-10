// ***************************************************************************
// ip2b_matthewv_nahur_income.cpp
//
// Summary: A program that computes the total amount of money earned by an
//          employee.
// Author: Matthew Van Vleet and Nahu
// Created: 1/9/20
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main()
{
    float inputHoursWorked,
          inputPayRate,
          totalPayedOut;
    
    cout << "How many hours did you work? ";
    cin >> inputHoursWorked;
    cout << "What is your hourly pay rate? ";
    cin >> inputPayRate;

    totalPayedOut = inputHoursWorked * inputPayRate;

    cout << "You earned a total of $" << totalPayedOut;
    cout << endl;

    return 0;
}

