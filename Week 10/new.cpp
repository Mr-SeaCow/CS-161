#include <iostream>
using namespace std;

void intro();
void userGuess(char[], char[]);
void winner(char []);

const int SIZE = 6;

int main()
{
    char word[] = {'a','n','s','w','e','r'};
    char guess[] ={'_','_','_','_','_','_'};

    intro();
    userGuess(word, guess);

    return 0;
}

void intro()
{
    cout << "HANGMAN" << endl << endl;
    cout << "To play this game, you will try to guess the secret word,\n"
         << "one character at a time. If you want to quit, enter a 0." << endl;
}

void userGuess(char word[], char guess[])
{
    int win = 0;
    char a;
    bool test = false;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a letter: ";
        cin  >> a;

        if (a == '0')
            break;

        cout << "\ntesting your guess.." << endl;

        for(int i = 0; i < SIZE; i++)
        {
            if (a == word[i])
            {
                if (guess[i] != word[i])
                {
                    guess[i] = word[i];
                    test = true;
                    win++;
                }

            }
        }
        if(test == true)
            cout << "You got a letter right!";
        else
            cout << "That letter is not in the word";
        test = false;
        cout << endl;
        for (int i = 0; i < SIZE; i++)
            cout << guess[i] << ' ';
        cout << endl << endl << endl;

    }
    if(win == 6)
        cout << "CONGRATULATIONS! You got the word right!!!";
    else
        cout << "There's always next time to succeed.";
    cout << endl;
}
