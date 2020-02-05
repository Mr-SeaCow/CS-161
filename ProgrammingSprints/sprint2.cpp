// ***************************************************************************
// sprint2.cpp
//
// Summary: Displays all numbers between 100 to 200 that are evenly divisible
//          by 5 or 6, not both.
// Author: Matthew Van Vleet
// Created: 2/4/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

   const int start = 100;
   const int end = 200;
   int lineCounter = 0;

   for (int i = start; i <= end; i++){
      int mod5 = i % 5;
      int mod6 = i % 6;

      if (mod5 == 0 && mod6 == 0){

      }
      else if (mod5 == 0) {
         cout << i << ' ';
         lineCounter++;
      }
      else if (mod6 == 0) {
         cout << i << ' ';
         lineCounter++;
      }

      if (lineCounter == 10){
         lineCounter = 0;
         cout << endl;
      }
   }


   return 0;
}