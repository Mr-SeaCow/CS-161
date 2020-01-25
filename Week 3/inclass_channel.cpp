// ***************************************************************************
// inclass_channel.cpp
//
// Summary:
// Author: Matthew Van Vleet
// Created:
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main()
{

    int channel;

    cout << "What channel do you like to watch? ";
    cin >> channel;
    
    switch (channel) {

        case 790: 
            cout << "News\n";
            break;
        case 747: 
            cout << "TNT\n";
            break;
        case 735:
            cout << "Sports\n";
            break;
        case 602:
        case 603:
        case 604:
        case 605:
            cout << "Spanish\n";
            break;
        default:
            cout << "I do not know that channel.";
    }

    char year;

    cout << "What year are you in school? (f/s/j/r) ";
    cin >> year;

    switch (year)
    {
        case 'f':
        case 'F':
            cout << "Be brave!\n";
            break;
        case 's':
        case 'S':
            cout << "Keep up the good work!\n";
            break;
        case 'j':
        case 'J':
            cout << "Don\'t give up!\n";
            break;
        case 'r':
        case 'R':
            cout << "You did it!!!!!!\n";
            break;
        default:
            cout << "YOu need to go back to school.\n";
    }
    
    return 0;
}