// ***************************************************************************
// example.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created:
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>
using namespace std;

void intro();
void userInput(char&);
void findLetter(char, int[], int&); //letter, ara, count
void replaceLetter(char, int[], char[]); //int, index
void displayWord(char[]);

const int SIZE = 5;
const char WORD[5] = {'m', 'e', 'e', 'o', 'n'};


int main() {
   
   int guesses = 0;
   int tAra[SIZE+1];
   char guess;
   char ara[SIZE] = {'_', '_', '_' , '_', '_'};

   int count = 0;

   intro();
   do {
      userInput(guess);
      findLetter(guess, tAra);
      replaceLetter(guess, tAra, ara);
      
      displayWord(ara);
      count++;
   } while(count < 6);


   return 0;
}

void intro() {

   cout << "HANGMAN\n\n";
   cout << "To play this game you will try to guess the secret word,\n"
        << "one character at a time. If you want to quit, enter a number\n\n";
   return;
}