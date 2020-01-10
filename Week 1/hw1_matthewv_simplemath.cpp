// ***************************************************************************
// hw1_mattewv_simplemath.cpp
//
// Summary: A program that performs simple math based on input by the user.
// Author: Matthew Van Vleet
// Created: 1/10/2020
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int addTwoNumbers(int value1, int value2);
int subtractTwoNumbers(int value1, int value2);
int multiplyTwoNumbers(int value1, int value2);

int main() {

    int inputValue1,
        inputValue2,
        outputSum,
        outputDifference,
        outputProduct;

    cout << "Enter two integers speratred by a space." << endl
         << "Press Enter after typing in the second integer.";

    cin >> inputValue1;
    cin >> inputValue2;

    outputSum = addTwoNumbers(inputValue1, inputValue2);
    outputDifference = subtractTwoNumbers(inputValue1, inputValue2);
    outputProduct = multiplyTwoNumbers(inputValue1, inputValue2);

    cout << inputValue1 << " + " 
         << inputValue2 << " = " 
         << outputSum << endl;
    
    cout << inputValue1 << " - " 
         << inputValue2 << " = " 
         << outputDifference << endl;

    cout << inputValue1 << " * " 
         << inputValue2 << " = " 
         << outputProduct << endl;

    return 0;
}

int addTwoNumbers (int value1, int value2){
    return value1 + value2;
}

int subtractTwoNumbers (int value1, int value2){
    return value1 - value2;
}

int multiplyTwoNumbers (int value1, int value2){
    return value1 * value2;
}