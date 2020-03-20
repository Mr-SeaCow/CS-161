// ***************************************************************************
// wk9_random_odd_even.cpp
//
// Summary: Displays a random set of 5-15 numbers between 0-50, and counts
//          the number of even and odds.
// Author: Matthew Van Vleet and Gianna
// Created: 3/5/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int[], int);
void countEvenAndOdd(int[], int, int&, int&);
void displayArray(int[], int);
void displayEvensAndOdds(int, int);

const int SIZE = 20;

int main() {
   srand(time(NULL));

   int randomNumArr[SIZE];
   int randomSize = (rand() % 16) + 5;
   int even = 0;
   int odd = 0;

   fillArray(randomNumArr,  randomSize);

   countEvenAndOdd(randomNumArr, randomSize, even, odd);

   displayArray(randomNumArr, randomSize);

   displayEvensAndOdds(odd, even);

   return 0;
}

void fillArray(int ara[], int rndSize) {

   cout << "Filling the array...\n\n";
   for (int i = 0; i < rndSize; i++)
      ara[i] = rand() % 51;
   
   return;
}

void displayArray(int ara[], int rndSize) {

   cout << "Values in the array...\n";

   for (int i = 0; i < rndSize; i++) {
      if (i % 8 == 0)
         cout << endl;
      
      cout << left << setw(3) << ara[i] << " ";
   }
   cout << endl << endl;

   return;

}

void countEvenAndOdd(int ara[], int rndSize, int& odd, int& even) {

   cout << "Counting odds & evens...\n\n";

   for (int i = 0; i < rndSize; i++) {
      if (ara[i] % 2 != 0)
         even++;
      else
         odd++;       
   }

}  

void displayEvensAndOdds(int odd, int even){

   cout << "Odd/even count..\n";
   cout << "Odds:\t" << odd << endl
        << "Evens:\t" << even << endl << endl;

   return;
}