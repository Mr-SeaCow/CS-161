// ***************************************************************************
// sprint4.cpp
//
// Summary: Counts how many positive/negative numbers a user enters.
// Author: Matthew Van Vleet
// Created: 2/4/202
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

   float userInput;
   int negativeCounter = 0;
   int positiveCounter = 0;

   cout << "Enter as many numbers as you want: (Press 0 to end)\n";

   do {
      cin >> userInput;

      if (userInput > 0) {
         positiveCounter++;
      } else if (userInput < 0) {
         negativeCounter++;
      }
   } while (userInput != 0);

   cout << "Positive Numbers: " << positiveCounter << endl;
   cout << "Negative Numbers: " << negativeCounter << endl;
      

   return 0;
}