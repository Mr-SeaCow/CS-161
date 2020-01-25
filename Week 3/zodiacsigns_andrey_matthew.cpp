//Filename: Zodiac Signs
//date: 1/23/20
//authors: Andrey Matthew

#include <iostream>
using namespace std;

int main()
{
    int month,
        day;


    cout << "ZODIAC SIGNS\n\n";
    cout << "You need to input a number for the month and day.";
    cout <<"What is the month (1 = jan, .. 12 = dec)?";
        cin >> month;
    cout << "What is the day (1 - 31, depending on the month)?";
    cin >> day;

    if (month >= 1 && month <= 12)
    {
       if (day >=1 && day<=31 )
       {
        if ((month == 1 && day >=20) || (month == 2 && day <=18 ))
            cout<< "That is Aquarius";
        else if ((month == 2 && day >=19) || (month == 3 && day >= 30 ))
            cout<< "That is  Pisces";
        else if ((month == 3 && day >=21) || (month == 4 && day <=19 ))
            cout<< "That is Aries ";
        else if ((month == 4 && day >=20) || (month == 5 && day <=20 ))
            cout<< "That is Taurus";
        else if ((month == 5 && day >=21) || (month == 6 && day <=20 ))
            cout<< "That is Gemini ";
        else if ((month == 6 && day >=21) || (month == 7 && day <=22 ))
            cout<< "That is Cancer ";
        else if ((month == 7 && day >=23) || (month == 8 && day <=22 ))
            cout<< "That is Leo ";
        else if ((month == 8 && day >=23) || (month == 9 && day <=22 ))
            cout<< "That is Virgo ";
        else if ((month == 9 && day >=23) || (month == 10 && day <=22 ))
            cout<< "That is Libra ";
        else if ((month == 10 && day >=23) || (month == 11 && day <=21 ))
            cout<< "That is Scorpio ";
        else if ((month == 11 && day >=22) || (month == 12 && day <=21 ))
            cout<< "That is Sagittarius ";
        else if ((month == 12 && day >=22) || (month == 1 && day <=19 ))
            cout<< "That is Capricorn";
       }
       else cout<< "Not valid day";
    }
    else
        cout<< "Not valid month ";

    return 0;
}
