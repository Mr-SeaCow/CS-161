// ***************************************************************************
// superbowl.cpp
//
// Summary: Demo of void..void and dataType..void functions
// Author: Matthew Van Vleet
// Created: 2/6/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>

using namespace std;

void intro();
string getName();
int getPoints();

int main() {

   string teamName;
   int points;

   intro();
   teamName = getName();
   points = getPoints();

   cout << "The " << teamName << " won with " 
        << points << " points." << endl;

   return 0;
}

void intro() {

   cout << "\t SUPER BOWL WINNER!\n\n";

   return;
}

string getName(){
   string teamName;
   cout << "Who won? ";
   getline(cin, teamName);

   return teamName;
}

int getPoints() {
   int points;
   cout << "How many points did they get? ";
   cin >> points;

   return points;
}

