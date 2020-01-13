// ***************************************************************************
// hw1_matthewv_simplemath.cpp
//
// Summary: A program that performs simple math based on input by the user.
// Author: Matthew Van Vleet
// Created: 1/10/2020
// Summary of Modifications:
// 1/13/2020 - Modified Function Names + File Name
// ***************************************************************************
#include <iostream>

using namespace std;

int addTwoIntegers(int value1, int value2);
int subtractTwoIntegers(int value1, int value2);
int multiplyTwoIntegers(int value1, int value2);

int main() {

    int inputValue1,
        inputValue2,
        outputSum,
        outputDifference,
        outputProduct;

    cout << "Enter two integers separated by a space." << endl
         << "Press Enter after typing in the second integer.";

    cin >> inputValue1;
    cin >> inputValue2;

    outputSum = addTwoIntegers(inputValue1, inputValue2);
    outputDifference = subtractTwoIntegers(inputValue1, inputValue2);
    outputProduct = multiplyTwoIntegers(inputValue1, inputValue2);

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

int addTwoIntegers (int value1, int value2){
    return value1 + value2;
}

int subtractTwoIntegers (int value1, int value2){
    return value1 - value2;
}

int multiplyTwoIntegers (int value1, int value2){
    return value1 * value2;
}