/*********************************************************
* File: badFormat.cpp
* Author: Pam Wiese and Matthew Van Vleet
* Summary:  Program that has bad formatting of code.
*                    You should correct the formatting so it adheres to
*                    the CS160 C++ Style Guide.
* Created: 2/6/2020
* Summary of Modifications:
*   2/7/20 - Fixed Formatting - Matthew
*********************************************************/

#include <iostream>
#include <cmath>

using namespace std;

void intro();
int getValue();
int computePower(int, int);
void showAnswer(int, int, int);

int main()
{
    int number,
        power,
        answer;
    char again;

    intro();

    do
    {
        number = getValue();
        power = getValue();
        answer = computePower(number, power);

        showAnswer(number, power, answer);

        cout << "Do you want to do this again? (y or n)\n";
        cin.ignore(80, '\n');
        cin.get(again);
    } while (again == 'y' || again == 'Y');

    return 0;
}

void intro()
{
    cout << "PROGRAM TO COMPUTE A POWER\n\n"
         << "You will be asked to enter a number and what power to"
         << " raise the number to.\n"
         << "Only integer values should be entered.\n\n";
    return;
}

int getValue()
{
    int num;

    cout << "What number do you want to work with? ";
    cin >> num;
    return num;
}
int computePower(int val, int power)
{
    int ans;
    
    ans = pow(val, power);
    return ans;
}

void showAnswer(int val, int power, int ans)
{
    cout << endl << val << " raised to the power of " 
         << power << " = " << ans << endl;
}