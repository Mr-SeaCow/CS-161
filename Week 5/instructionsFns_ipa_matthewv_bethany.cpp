// ***************************************************************************
// instructionsFns_ipa_matthewv_bethany.cpp
//
// Summary: Gives instructions of how to make scrambled eggs.
// Author: Matthew Van Vleet and Bethany
// Created: 2/6/2020
// Version: C++ 14
// Summary of Modifications:
// ***************************************************************************
#include <iostream>

using namespace std;

void instructions();

int main() {

   cout << "\tHOW TO MAKE SCRAMBLED EGGS\n\n";
   instructions();
   return 0;
}

void instructions() {

   cout << "1. Beat the eggs, milk, salt, and pepper in medium bowl until"
        << " blended.\n"
        << "2. Heat butter in large nonstick skillet over medium heat until"
        << " hot.\n"
        << "3. Pour in egg mixture\n"
        << "4. As eggs begin to set, gently pull the eggs across the pan" 
        << " with a spatula, forming large soft curds,\n"
        << "5. Continue cooking/pulling, lifting and folding eggs until"
        << " thickened and no visible liquid egg remains.\n"
        << "6. Do not stir constantly.\n"
        << "7. Remove from heat.\n"
        << "8. Enjoy the scrambled eggs.";

   return;
}