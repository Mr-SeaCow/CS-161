// ***************************************************************************
// wk9_courseSearch.cpp
//
// Summary: This program uses parallel arrays to keep track of 5 courses, and
//          asks the user to search for a course, which returns either the
//          course that was requested or an not found error. The program also
//          displays all the courses that were entered.
// Author: Matthew Van Vleet
// Created: 3/5/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void intro();
void fillCourses(string[], int[], string[]);
int courseSearch(string[], string); //arr + course title input
void showCourses(string[], int[], string[]);
void showOneCourse(string[], int[], string[], int);

const int SIZE = 2;

int main() {
   string courseDiscipline[SIZE];
   int courseNumber[SIZE];
   string courseTitle[SIZE];
   string srchTitle;
   int courseSearchIndex;

   intro();
   fillCourses(courseDiscipline, courseNumber, courseTitle);
   cout << "\nWhich course title shall I search for? ";
   getline(cin, srchTitle);
   courseSearchIndex = courseSearch(courseTitle, srchTitle);
   if (courseSearchIndex == -1) 
      cout << "The course title you are"
           << " searching for doesn't seem to exist.\n\n";
   else
      showOneCourse(courseDiscipline, courseNumber, courseTitle, courseSearchIndex);
   showCourses(courseDiscipline, courseNumber, courseTitle);


   return 0;
}

void intro() {
   cout << "COURSE LISTING AND SEARCH\n\n";
}

void fillCourses( string courseDiscipline[], int courseNumber[], string courseTitle[] ) {

   for (int i = 0; i < SIZE; i++) {

      cout << "Discipline: ";
      cin >> courseDiscipline[i];
   
      cout << "Course Number: ";
      cin >> courseNumber[i];

      cout << "Course Title: ";
      cin.ignore(256, '\n');
      getline(cin, courseTitle[i]);
   }


   return;
}

int courseSearch(string courseTitle[], string srchName) {
   for (int i = 0; i < SIZE; i++) {
      if (srchName == courseTitle[i])
         return i;
   }
   return -1;
}

void showOneCourse(string courseDiscipline[], int courseNumber[], string courseTitle[], int srchIndex) {
   cout << "\n\nThat course is " << courseDiscipline[srchIndex]
        << ' ' << courseNumber[srchIndex] << "\n\n";
   return;
}

void showCourses(string courseDiscipline[], int courseNumber[], string courseTitle[]) {

   cout << "All courses:\n";
   cout << left;
   for (int i = 0; i < SIZE; i++) {

      cout << setw(6) << courseDiscipline[i]
           << setw(6) << courseNumber[i]
           << setw(50) << courseTitle[i] << endl;

   }


}