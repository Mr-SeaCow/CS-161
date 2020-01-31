/*
    File:           wk4_inclass_b_MathhewV_FelipeMF.cpp
    Description:    Given how many random numbers wanted, and the limit of those numbers,
                    output the sum of those random numbers.
    Author:         Felipe MF as driver, Matthew V. as Navigator
    Date:           Jan 30th 2020

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int randNum,
        userInAmnt,
        userInLim,
        sum;
    sum = 0;

    srand(time(NULL));

    do
    {
        cout << "How many random numbers shall I create? ";
        cin  >> userInAmnt;
        if (userInAmnt < 0)
            cout << "That's a bad input. Please try again." << endl;
    } while (userInAmnt < 0);

    do
    {
        cout << "What is the limit of the numbers I shall generate? ";
        cin  >> userInLim;
        if (userInLim <= 0)
            cout << "That's a bad input. Please try again." << endl;
    } while (userInLim <= 0);
    for(; userInAmnt > 0; userInAmnt-- )
    {
        randNum = rand() % userInLim;
        cout << randNum << endl;
        sum += randNum;
    }
    cout << "Sum of those values = " << sum << endl;

    return 0;
}
