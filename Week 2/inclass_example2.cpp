// ***************************************************************************
// inclass_example2.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created: 1/14/2020
// Summary of Modifications:
// ***************************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
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



     return 0;
}