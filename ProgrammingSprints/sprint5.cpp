// ***************************************************************************
// sprint5.cpp
//
// Summary: A subtraction game where the user inputs how many questions they'd
//          like, and gives them subtraction problems which keeps track of how
//          many problems they get right.
// Author: Matthew Van Vleet
// Created: 2/4/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
   srand(time(NULL));
   int correctAnswers = 0;
   int inputTimesToPlay;

   cout << "How many times would you like to play the subtraction game? ";
   cin >> inputTimesToPlay;

   for (int i = 0; i < inputTimesToPlay; i++) {

      int probInt1,
          probInt2,
          probAnswer,
          userInput;

      probInt1 = rand();
      probInt2 = rand();
      probAnswer = probInt1 - probInt2;

      cout << probInt1 << " - " << probInt2 << " = ";
      cin >> userInput;
      if (userInput == probAnswer) 
         correctAnswers++;

   }

   cout << "You got " << correctAnswers << " correct." << endl;

   return 0;
}