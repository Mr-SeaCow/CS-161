// ***************************************************************************
// arrayExample.cpp
//
// Summary: Demonstrating arrays
// Author: Matthew Van Vleet
// Created: 2/27/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

const int arraySize = 10;

int main()
{

   int nums[arraySize];
   int sum = 0;
   bool isThere = false;
   int searchNum;

   cout << "Enter " << arraySize << " numbers,\n"
        << "pressing Enter after each...\n";
   for (int i = 0; i < arraySize; i++)
      cin >> nums[i];

   for (int i = 0; i < arraySize; i++)
      sum += nums[i];

   cout << "The total of all the numbers is " << sum << endl;

   cout << "What number would you like to look for? ";
   cin >> searchNum;
   for (int i = 0; i < arraySize; i++) {
      if (searchNum == nums[i]){
         isThere = true;
         break;
      }
   }

   if (isThere)
      cout << "Your number has been found.\n";
   else
      cout << "Your number is not there.\n";
   
   return 0;
}