#include <iostream>
using namespace std;

int main () {
    cout << "\nWelcome to Largest of Three Number finder !!!" << endl;

    int a, b, c;
    cout << "Enter three numbers to compare :" ;
    cin >> a >> b >> c;
    cout << "Largest number is ";
    if ((a >= b) && (a >= c)) {
        cout << a << endl;
    } else {
        if (b >= c) {
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }

    return 0;
}