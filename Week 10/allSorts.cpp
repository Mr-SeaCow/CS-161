// ***************************************************************************
// allSorts.cpp
//
// Summary: Bubble, Selection, Insertion sorts
// Author: Matthew Van Vleet
// Created: 3/10/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void bubbleSort(int[]);
void selectionSort(int[]);
void insertionSort(int[]);
void displayAra(int[]);

const int SIZE = 5;

int main() {
   int ara[SIZE] = {5, 2, 1, 4, 3};

   //bubbleSort(ara);
   selectionSort(ara);
   //insertionSort(ara);
   //radixSort(ara);
   displayAra(ara);
   return 0;
}

void bubbleSort(int ara[]) {

   int bound = SIZE;
   bool swapped = true;
   int temp;
   for (int i = 0; i < bound - 1 && swapped == true; i++) {
      swapped = false;
      for (int j = 0; j < bound - 1; j++) {
         if (ara[j] > ara[j+1]) {
            swap(ara[j], ara[j+1]);
            swapped = true;
         }
      }
   }
   return;
}


void selectionSort(int ara[]) {

   int bound = SIZE;

   for (int i = 0; i < bound; i++) {
      for (int j = 0; j < bound - 1; j++) {
         if (ara[i] < ara[j]) {
            swap(ara[i], ara[j]);
         }
      }
   }
   return;
}

void displayAra(int ara[]) {
   for (int i = 0; i < SIZE; i++) 
      cout << ara[i] << " ";
   cout << endl;
   return;
}