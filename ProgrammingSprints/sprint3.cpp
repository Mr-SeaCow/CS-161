// ***************************************************************************
// sprint3.cpp
//
// Summary: Find's the largest integer n where n^3 is less than 12,000.
// Author: Matthew Van Vleet
// Created: 2/4/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int nCount = 0;
   int largestNumber;

   while (pow(nCount, 3) < 12000) {

      largestNumber = nCount;
      nCount++; 
   }
   cout << largestNumber;

   return 0;
}