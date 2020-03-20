// ***************************************************************************
// partialArray.cpp
//
// Summary: Program to let user enter up to 20 numbers. Which will be stored
//          in the array.
// Author: Matthew Van Vleet
// Created: 3/5/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

const int SIZE = 3;

void fillArray(int[], int&);
void showArray(int[], int);

int main() {

   int numbers[SIZE];
   int used = 0;

   fillArray(numbers, used);
   showArray(numbers, used);
   return 0;
}

void fillArray(int arr[], int& used) {
   cout << "Enter up to " << SIZE << " positve integers.\n"
        << "Enter -1 to quit.\n\n";
   for (int i = 0; i < SIZE; i ++) {
      cin >> arr[i];
      if (arr[i] == -1)
         break;
      used++;
   }
   return;
}

void showArray(int arr[], int used) {

   for (int i = 0; i < used; i++) 
      cout << arr[i] << ' ';
   cout << endl;
   
   return;
}