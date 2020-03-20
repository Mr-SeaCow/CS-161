// ***************************************************************************
// computeSum.cpp
//
// Summary: This program will compute the sum of two integers, 
//          and return the total.
// Author: Matthew Van Vleet
// Created: 2/13/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void intro();
   // Displays info about the program
int getNum();
   // Gets a number form the user
int computeSum(int, int);
   // Computes the sum of values passed in
void showSum(int, int, int);
   // Displays a mathematical expression


int main() {

   int num1,
       num2,
       total;

   intro();

   num1 = getNum();
   num2 = getNum();
   total = computeSum(num1, num2);
   
   showSum(num1, num2, total);


   return 0;
}

void intro() {

   cout << "COMPUTE THE SUM\n" 
        << "You will enter 2 numbers, I will show the sum.\n\n";
        
   return;
}

int getNum() {
   int n1;
   cout << "Enter an integer: ";
   cin >> n1;
   return n1;
}

int computeSum(int n1, int n2) {
   return n1 + n2;
}

void showSum(int n1, int n2, int sum) {
   cout << n1 << " + " 
        << n2 << " = "
        << sum << endl;
   return;
}