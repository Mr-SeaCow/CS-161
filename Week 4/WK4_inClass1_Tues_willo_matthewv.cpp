// ********************************************************************
// WK4_inClass1_Tues_willo_matthewv.cpp
//
// Summary: A program that computes the sum of 4 integers entered by the
// user.
//
// Authors: Will O Matthew V
// Created: Jan 28, 2020
// Summary of Modifications:
// Jan 28, 2020
//
// *******************************************************************

#include <iostream>

int main()
{
    int num1;
    int total;
    total = 0;
    int counter;
    counter = 0;

    std::cout << "Enter 4 integers: ";
    while(counter < 4)
    {
       std::cin >> num1;
       total += num1;
       counter++;

    }
    std::cout << total;

    return 0;
}

