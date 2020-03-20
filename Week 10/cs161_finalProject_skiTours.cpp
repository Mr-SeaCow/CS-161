// ***************************************************************************
// cs161_finalProject_skiTours.cpp
//
// Summary: Let's users create lists of Ski Tours, book lists of Ski Tours,
//          finally displays the bill per group attending.
// Author: Matthew Van Vleet
// Created: 3/12/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

//DISPLAYS - MT. HOOD SKI TOURS
void intro();

//Fetches tours from the user
void setupTours(string[], float[]);
//Displays the tours as options in a menu
void displayMenu(string[]);
//Handles the logic of the menu
void handleMenuLogic(int[], string[], int[], int&);

//Gets choices from the user
void getAttendeeChoice(int&);
void getAttendeeName(string&);
void getAttendeeCount(int&);

//Displays all the bills
void displayBills(string[], float[], int[], string[], int[], int);

//Clears the screen
void clearScreen();

const int TOUR_SIZE = 5;
const int ATTENDEE_SIZE = 10;

int main() {

   string tourNamesAra[TOUR_SIZE];
   float tourPriceAra[TOUR_SIZE];

   string attendeeNameAra[ATTENDEE_SIZE];
   int attendeePartySizeAra[ATTENDEE_SIZE];
   int attendeeTourChoiceAra[ATTENDEE_SIZE];
   int attendeeAraCount = 0;

   intro();

   setupTours(tourNamesAra, tourPriceAra);

   clearScreen();
   intro();

   displayMenu(tourNamesAra);

   handleMenuLogic(attendeeTourChoiceAra, attendeeNameAra,
                   attendeePartySizeAra, attendeeAraCount );
   
   displayBills(tourNamesAra, tourPriceAra, attendeeTourChoiceAra,
                attendeeNameAra, attendeePartySizeAra, attendeeAraCount );

   return 0;
}

void setupTours(string tourNames[], float tourPrice[]) {
   
   for (int i = 0; i < TOUR_SIZE; i++) {
      string tempTourName;
      float tempTourPrice;
      cout << "Enter the name of the tour: ";
      getline(cin, tempTourName);
      do {
         cout << "Enter the price for " << tempTourName << ": ";
         cin >> tempTourPrice;
         if(tempTourPrice < 0)
            cout << "Please enter valid price for the tour.\n";
      } while(tempTourPrice < 0);
      cin.ignore(256, '\n');
      tourNames[i] = tempTourName;
      tourPrice[i] = tempTourPrice;
   }

   return;
}

void displayMenu(string tourNames[]) {
   
   for (int i = 0; i < TOUR_SIZE; i ++) {
      cout << i + 1 << " - " << tourNames[i] << endl;
   }
   cout << "0 - finished entering orders\n\n";

   return;
}

void handleMenuLogic(int orderNum[], string orderName[],
                     int orderCount[], int& usedAraCount) {

   for (int i = 0; i < ATTENDEE_SIZE; i++) {
      int tempOrderNum,
          tempOrderCount;
      string tempOrderName;
      
      getAttendeeChoice(tempOrderNum);

      if (tempOrderNum == 0) 
         break;
      
      getAttendeeName(tempOrderName);
      getAttendeeCount(tempOrderCount);
      orderNum[i] = tempOrderNum - 1;
      orderName[i] = tempOrderName;
      orderCount[i] = tempOrderCount;
      usedAraCount++;
   }

   return;
}

void getAttendeeChoice(int& userChoice) {
   do {
      cout << "Enter the number of the tour you would like: ";
      cin >> userChoice;
   } while(userChoice < 0 || userChoice > TOUR_SIZE);
   cin.ignore(256, '\n');

   return;
}

void getAttendeeName(string& userName) {
   do {
      cout << "What is your name? ";
      cin >> userName;
   } while(userName == "\n");

   return;
}

void getAttendeeCount(int& userCount) {
   do {
      cout << "How many people will come? (1-10) ";
      cin >> userCount;
   } while(userCount <= 0 ||userCount > 10);
   cin.ignore(256, '\n');

   return;
}

void displayBills(string tourNames[], float tourPrice[], int attendeeChoice[],
                  string attendeeName[], int attendeeCount[], int usedAraC) {
   
   for (int i = 0; i < usedAraC; i++) {

      clearScreen();
      intro();

      int choice = attendeeChoice[i];
      float total;
      cout << left;

      cout << setw(17) << "Customer: ";
      cout << setw(60) << attendeeName[i] << endl;
      cout << setw(17) << "Your tour: ";
      cout << setw(60) << tourNames[choice] << endl;
      cout << setw(17) << "# Guests: ";
      cout << setw(60) << attendeeCount[i] << endl;
      cout << setw(17) << "Price each: ";
      cout << setw(60) << showpoint << setprecision(2) << fixed
           << tourPrice[choice] << endl;

      total = tourPrice[choice] * attendeeCount[i];

      cout << endl;
      cout << setw(17) << "Price each: ";
      cout << setw(60) << showpoint << setprecision(2) << fixed
           << total << endl;
      cout << "Press Enter to see the next bill.";
      cin.ignore();
   }

   return;
}

void intro() {
   cout << "MT. HOOD SKI TOURS\n\n";

   return;
}

void clearScreen() {
   system("cls");

   return;
}