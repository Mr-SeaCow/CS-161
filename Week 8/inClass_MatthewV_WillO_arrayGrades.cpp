// ***************************************************************************
// inClass_MatthewV_WillO_arrayGrades.cpp
//
// Summary: Allows the user to enter the grades of a set amount of students
//          and returnts the average grade of all the students.
// Author: Matthew Van Vleet and Will O
// Created: 2/27/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

const int SIZE = 5;

int main()
{

   int grades[SIZE];
   int sum;

   cout << "Enter the grades for " << SIZE << " students, each"
        << " on a seperate line.\n"
        << "Grades must be in the"
        << " range 0 - 100\n";

   for (int i = 0; i < SIZE; i++)
   {
      int inputGrade;

      cout << "Student " << i + 1 << ": ";
      cin >> inputGrade;
      if (inputGrade < 0 || inputGrade > 100)
      {
         cout << "Invalid number. Try again.\n";
         i--;
      }
      else
      {
         grades[i] = inputGrade;
      }
   }

   cout << "\nThe grades entered were:\n";

   for (int i = 0; i < SIZE; i++)
   {
      cout << grades[i] << "  ";
   }
   cout << endl << endl;

   for (int i = 0; i < SIZE; i++)
      sum += grades[i];
   
   cout << "The average of the grades is " << static_cast<float>(sum)/SIZE;

   return 0;
}