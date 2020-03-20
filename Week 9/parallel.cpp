// ***************************************************************************
// parallelArray.cpp
//
// Summary: Program to use parallel arrays to store information about people
//          (Names and ages)
// Author: Matthew Van Vleet
// Created: 3/5/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void fillArrays(string[], int[]);
void showArrays(string[], int[]);
void getOneName(string&);
void searchName(string[], string&, int&);

const int SIZE = 3;

int main() {

   string names[SIZE];
   int ages[SIZE];
   string oneName;
   int location;

   fillArrays(names, ages);
   getOneName(oneName);
   searchName(names, oneName, location);
   if (location == -1)
      cout << "That name is not in the list.";
   else
      cout << endl << oneName << " is " << ages[location] << endl;
   showArrays(names, ages);

   return 0;
}

void fillArrays(string names[], int ages[]) {
   cout << "Enter information about " << SIZE 
        << " people.\n\n";
   for (int i = 0; i < SIZE; i++) {
      cout << "Name: ";
      getline(cin, names[i]);
      cout << "Age: ";
      cin >> ages[i];
      cin.ignore(80, '\n');
   }
   return;
}

void showArrays(string names[], int ages[]) {
   cout << "\n\nPeople in the list...\n\n";
   cout << left;
    for (int i = 0; i < SIZE; i++) {
       cout << setw(20) << left << names[i] 
            << setw(5) << right << ages[i] << endl;
   }
}

void getOneName(string& name) {
   cout << "Enter a name to search for: ";
   getline(cin, name);
}

void searchName(string names[], string& searchName, int& index) {
   for (int i = 0; i < SIZE; i++) {
      if (names[i] == searchName) {
         index = i;
         return;
      }
   }
   index = -1;
   return;
}