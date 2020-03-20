// ***************************************************************************
// inclass_formSquare_matthewv_russell.cpp
//
// Summary: Shows whether or not the sides form a square.
// Author: Matthew Van Vleet and Russell
// Created: 2/13/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void intro();
int getSide();
bool isSquare(int, int);
void showAnswer(bool, int, int);

int main() {
   int side1,
       side2;
   bool square;

   intro();
   side1 = getSide();
   side2 = getSide();
   square = isSquare(side1, side2);
   showAnswer(square, side1, side2);
      
   return 0;
}

void intro(){
   cout << "IS SQUARE\n"
        << "This program will display whether or not the two sides will form" 
        << " a square.\n\n";
   return;
}

int getSide(){
   int side;
   cout << "Enter the length of a side: ";
   cin >> side;

   return side;
}

bool isSquare(int s1, int s2) {

   return s1 == s2;
}

void showAnswer(bool square, int s1, int s2) {
   cout << "The sides " << s1 << " and " << s2;
   if (square)
    cout << " form a square.\n";
   else
    cout << " do not form a square.\n";
   return;
}