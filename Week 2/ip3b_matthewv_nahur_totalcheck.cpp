// ***************************************************************************
// ip3b_matthewv_nahur_totalcheck.cpp
//
// Summary: Find the total amount payed on a meal after adding the tip
//          percentage.
// Author: Matthew Van Vleet and Nahu
// Created: 1/14/2020
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float inputBillAmount,
          inputTipPercent;
    
    float outputMealAmount,
          outputTipAmount,
          outputCheckTotal;

    cout << "How much was the bill?\n";
    cin >> inputBillAmount;

    outputMealAmount = inputBillAmount;

    cout << "How much tip do you want to leave?\n"
         << "(Enter as a floating point number - .2 = 20%)\n";
    cin >> inputTipPercent;

    outputTipAmount = inputBillAmount * inputTipPercent;

    cout << "Meal:\t$ " << outputMealAmount << endl;
    cout << "Tip:\t$ " << outputTipAmount << endl;

    outputCheckTotal = ceil((outputMealAmount + outputTipAmount) * 100)/100;    

    cout << "Total (rounded up):\t $" << outputCheckTotal;

    return 0;
}