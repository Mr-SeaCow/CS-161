//File: "wk5_getValue.cpp"
//Description:Write a program that uses a separate function
//            to get a value from the user.
//Specification:These are the prototypes for the user-defined
//               functions to be included in this assignment:
//void instructions(); and int getValue();

void instructions( );

int getValue( );
//Authors: Bethany and Matt
//Date: 02/06/2020
//Version: C++ 14

//preprocessor directives
#include <iostream>
#include <cmath>

using namespace std;

void instructions();
int getValue();



int main()
{

    int sNum;
    instructions();
    sNum = getValue();
    cout<< "The absolute value of "<< sNum;
    cout<< " is "<<abs(sNum);



    return 0;
}

void instructions()
{
    cout<< "\t ABSOLUTE VALUE \n \n";
    return ;
}

int getValue()
{
    int num;
    cout<< "Enter an integer, positive or negative: ";
    cin>> num;
    cout<< endl;
    return num;
}
