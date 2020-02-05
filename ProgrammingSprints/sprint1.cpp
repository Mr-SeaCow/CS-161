// ***************************************************************************
// sprint1.cpp
//
// Summary: Gives the cost of a university who's cost per year increases by
//          5%, if the student were to start attending after 10 years for 4
//          years.
//         
// Author: Matthew Van Vleet
// Created: 2/4/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   const float increasePercentage = .05;
   float runningTuition = 10000;
   float endTotal = 0;

   for (int year=0; year < 14; year++) {

      runningTuition += (increasePercentage * runningTuition);
   
      if (year >= 10) {
         endTotal += runningTuition;
      }

   }

   cout << fixed << setprecision(2) << showpoint;
   cout << "The student will be paying a total of $" << endTotal
        << " for four years." << endl;

   return 0;
}