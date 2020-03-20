#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getName(string&, string&);
void getData(float&, float&);
void computePay(float, float, float&);
void showPay(string, string, float);

int main() {

   string firstName,
          lastName;
   float hours,
         payRate,
         total;

   getName(firstName, lastName);
   getData(hours, payRate);
   computePay(hours, payRate, total);
   showPay(firstName, lastName, total);
   
   return 0;

}

void getName(string& fn, string& ln) {

   cout << "What is your first name? ";
   getline(cin, fn);
   cout << "What is your last name? ";
   getline(cin, ln);
   return;

}

void getData(float& hrs, float& rate) {

   cout << "How many hours did you work? ";
   cin >> hrs;
   cout << "What is your rate of pay? ";
   cin >> rate;
   return;

}

void computePay(float hrs, float rate, float& total) {

   total = hrs*rate;
   return;

}

void showPay(string first, string last, float total) {
   
   cout << fixed << showpoint << setprecision(2);
   cout << first << ' ' << last << endl;
   cout << "Total pay: $ " << total << endl;
   return;

}