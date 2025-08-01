#include <iostream>
using namespace std;

int main () {
    int num = 4;

    // Pattern 01
    cout << "Pattern 01\n";
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 02
    cout << "Pattern 02\n";
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 03
    cout << "Pattern 03\n";
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j ;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 04
    cout << "Pattern 04\n";
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;


    // Pattern 05
    cout << "Pattern 05\n";
    char ch = 'A';
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << ch++;
        }
        cout << endl;
    }
    cout << endl;




    return 0;
}