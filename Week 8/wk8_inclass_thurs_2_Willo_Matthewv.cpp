// ********************************************************************
// wk8_inclass_thurs_2_willo_Matthewv.cpp
//
// Summary: This program displays the contents of the array, the largest
//          value in the array, and the subscript of the location of the
//          largest value.
//
// Authors: Will O, Matthew V
// Created: Feb 27, 2020
// Summary of Modifications:
// Feb 27, 2020
//
//
// *******************************************************************

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int SIZE = 10;
int main()
{
    srand(time(NULL));
    int nums[SIZE];
    int largest;
    largest = 0;
    int largestPosition;
    for (int i = 0; i < SIZE; i++)
        nums[i] = rand() % 1000 + 1;

    for (int i = 0; i < SIZE; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            largestPosition = i;
        }
    }

    for (int i = 0; i < SIZE; i++)
        cout << nums[i] << " ";
    cout << endl
         << endl
         << "Largest value:  "
         << largest << ", found at subscript " << largestPosition << "." << endl
         << endl;
}
