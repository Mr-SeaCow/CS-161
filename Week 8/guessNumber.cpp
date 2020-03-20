/**********************************************************
/ File:     guessNumber.cpp
/ Author:   Matthew Van Vleet and Brenna G
/ Created:  2/25/20
/ Version:  C++ 14
/ Summary:  Program to let the user guess a secret number.
/           The programmer will set up a hidden number.
/           The user will guess the number. If the number
/           guessed is too large, a message to that effect
/           will appear. If it is too small, a different
/           message will be displayed. When the user
/           guesses the right number, a winning message
/           will appear, as will the number of guesses it
/           took to find the secret number.
/**********************************************************/

#include <iostream>
#include <cstdlib>  // rand
#include <ctime>    // time
using namespace std;

void instructions();
// displays instructions to the user about how to play
void setSecretNumber(int&);
// assigns a value to the secret number as a random number
// in the range 1 - 100
void playGame(int, int&);
// the secret number & counter are passed into the function
// This function will have a loop that allows the user to
// guess a number (the program calls a getUserGuess( ) function).
// If the user's guess is correct, a function to display
// the winning message and the number of guesses. If the user's
// guess is not correct, different messages will appear.
void getUserGuess(int&);
// returns a value entered by the user
void winGame(int);
// the number of guesses is passed into the function

int main()
{
    srand(time(0));

    int secret;
    int userGuess;
    int counter = 1;

    instructions();
    setSecretNumber(secret);
    playGame(secret, counter);
    winGame(counter);

    return 0;
}

void instructions()
{
    cout << "You will be attempting to guess a "
         << "random number between 1 and 100 "
         << "in the fewest possible attempts.\n\n";
    cout << "When you are ready, please enter a number "
         << "between 1 and 100.\n";
    return;         
}

void setSecretNumber(int& secret)
{
    secret = rand() % 100 + 1;
}

void playGame(int secret, int& counter)
{
    int userInput;
    do {
        getUserGuess(userInput);
        if (userInput < 1 || userInput > 100)
            cout << "The number needs to be between 1 and 100.\n";
        if (secret != userInput){
            counter++;
            if (secret < userInput)
                cout << "You guessed too high.\n";
            else
                cout << "You guessed too low.\n";
            cout << "Please try again.\n";
        }
    } while (secret != userInput);
}

void getUserGuess(int& guess)
{
    cin >> guess;
    return;
}

void winGame(int guesses)
{
    cout << "It took you " 
         << guesses 
         << " guesses to guess the right number.\n";
    return;
}