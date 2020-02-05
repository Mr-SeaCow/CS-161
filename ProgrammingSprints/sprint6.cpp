// ***************************************************************************
// sprint6.cpp
//
// Summary: Countdown from a number till it hits zero with one second
//          intervals
// Author: Matthew Van Vleet
// Created: 2/4/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <windows.h>


using namespace std;

int main() {

   int userInput;

   cout << "From what number would you like to countdown from? ";
   cin >> userInput;

   while (userInput >= 0) {
      cout << userInput << endl;
      Sleep(1000);
      userInput--;
  }

   return 0;
}