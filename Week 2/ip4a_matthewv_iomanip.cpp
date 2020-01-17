// ***************************************************************************
// ip4a_matthewv_iomanip.cpp
//
// Summary: Gives the amount (in yards) of carpet to get based on input of the 
//          width and length in feet.
// Author: Matthew Van Vleet
// Created: 1/16/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    float inputSide1,
          inputSide2;

    float outputArea;


    cout << "Enter the width of the room: (in feet) ";
    cin >> inputSide1;

    cout << "Enter the length of the room: (in feet) ";
    cin >> inputSide2;

    outputArea = (inputSide1/3) * (inputSide2/3); //Converts feet to yards

    cout << setprecision(3);
    cout << fixed << showpoint
         << "The total amount of carpet needed is "
         << outputArea << " square yards.";
    

    return 0;
}