#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Leap Year finder !!!" << endl;

    int year;
    cout << "Enter a year : " ;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap Year" << endl;
            } else {
                cout << "Not a Leap Year" << endl;
            }
        } else {
            cout << "Leap Year" << endl;
        }
    } else {
        cout << "Not a Leap Year" << endl;
    } 

    return 0;
}