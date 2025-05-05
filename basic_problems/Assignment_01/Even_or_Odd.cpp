#include <iostream>
using namespace std;

int main () {
    cout << "\nWelcome to Even or Odd finder !!!" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num >= 0 && num % 2 == 0) {
        cout << "Number is ever." << endl;
    } else {
        if (num >= 0) {
            cout << "Number is odd." << endl;
        }else {
            cout << "Invalid number" << endl;
        }
    }
    return 0;

}

