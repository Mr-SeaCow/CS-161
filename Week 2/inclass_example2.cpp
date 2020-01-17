// ***************************************************************************
// inclass_example2.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created: 1/16/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 
int main()
{
     int age;
     string name;
     float savings; 
     char year; //f = freshman ...

     cout << "How old are you? ";
     cin >> age;
     
     cin.ignore(264, '\n');
     cout << "What is your name? ";
     getline(cin, name);
     
     cout << "How much money have you saved? ";
     cin >> savings;

     cout << "What year are you in school? (f/s/j/r) ";
     cin >> year; 

     cout << age << endl
          << name << endl
          << "$" << savings << endl
          << year << endl;

     /* Self Learning Below!
     char inputChar, inputName[256];

     // get(), getline(), ignore()

     std::cout << "Please, enter a character: ";

     inputChar = std::cin.get();
     std::cin.ignore(256, '\n');

     std::cout << "Please, enter your favourite movie: ";
     std::cin.getline(inputName, 256);

     std::cout << "Your char is: " << inputChar << endl
               << "Your name is: " << inputName << endl;

     // iomanip
     // IMPORTANT setprecision, showpoint, fixed, setw
     std::cout << std::setw(30)
               << "SetW forces size"
               << endl;

     std::cout << "Showpoint forces a decimal point to be placed.\n";
     std::cout << std::showpoint << 1 << '\t' << 1.5 << endl;

     float num1 = 1.423;
     std::cout << "SetPrecision cuts off the float.\n";
     std::cout << std::setprecision(2) << num1 << endl;


     std::cout << "Fixed forces a floats precision\n";
     std::cout << std::fixed;
     std::cout << std::setprecision(7) << num1 << endl;

     std::cout << "SetFill fills in any missing space.\n";
     std::cout << std::setfill('m') << std::setw(30);
     std::cout << "test" << endl;


     */
     return 0;
}