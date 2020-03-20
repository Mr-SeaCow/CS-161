#include <iostream>

using namespace std;

void getNumbers(int&, int&, int&);
void sortNumbers(int&, int&, int&);
void outputNumbers(int, int, int);

int main() {

    int num1,
        num2,
        num3;

    getNumbers(num1, num2, num3);
    sortNumbers(num1, num2, num3);
    outputNumbers(num1, num2, num3);

    return 0;
}

void getNumbers(int& n1, int& n2, int& n3){

    cout << "Enter three numbers, separated by a space:\n";
    cin >> n1 >> n2 >> n3;
    return;
}

void sortNumbers(int& n1, int& n2, int& n3){

    int high, mid, low;

    if (n1 > n2) {
        if (n1 > n3) {
            high = n1;
            if (n2 > n3) {
                mid = n2;
                low = n3;
            } else {
                mid = n3;
                low = n2;
            }

        } else {
            high = n3;
            mid = n1;
            low = n2;
        }
    } else {
        if (n2 > n3){
            high = n2;
            if (n1 > n3) {
                mid = n1;
                low = n3;
            } else {
                mid = n3;
                low = n1;
            }
        } else {
            high = n3;
            if (n1 > n2){
                mid = n1;
                low = n2;
            } else {
                mid = n2;
                low = n1;
            }
        }
    }
    n1 = high;
    n2 = mid;
    n3 = low;
    return;
}

void outputNumbers(int high, int mid, int low) {

    cout << "The numbers, from smallest to largest, are:\n"
         << low << endl
         << mid << endl
         << high << endl;
    return;
}