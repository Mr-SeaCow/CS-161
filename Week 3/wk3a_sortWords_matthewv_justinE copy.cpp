// ***************************************************************************
// wk3a_grades_matthewv_justinE.cpp
//
// Summary: Displays the letter grade based on the percentage grade given. 
// Author: Matthew Van Vleet and Justin E
// Created: 1/21/20
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

int main() {

    string word1,
           word2,
           word3;
    
    cin >> word1 >> word2 >> word3;

    if ((word1 < word2) && (word1 < word3) && (word2 < word3))
        cout << word1 << endl << word2 << endl << word3 << endl;
    else if ((word1 < word2) && (word1 < word3) && (word3 < word2))
        cout << word1 << endl << word3 << endl << word2 << endl;
    else if ((word1 < word2) && (word1 < word3) && (word3 < word2))
        cout << word1 << endl << word3 << endl << word2 << endl;

    return 0;

}