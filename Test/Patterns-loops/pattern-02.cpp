#include <iostream>
using namespace std;

int main () {

    int num = 12;

    // Pattern 01
    cout << "Pattern 01" << endl;
    for (int i = 1; i <= num; i++) {
        cout << "*";
        for (int j = 1; j <= num - 1; j++) {
            if (i == 1 || i == num) cout << "*";
            else cout << " ";
        }
        cout << "*" << endl;
    }
    cout << endl;


    // Pattern 02
    cout << "Pattern 02" << endl;
    for (int i = 1; i <= num; i++) {
        // Spaces
        for (int j = i; j <= num - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;


    // Patter 03 - Floyd's Triangle
    cout << "Pattern 03" << endl;
    int numToPrint = 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << numToPrint++ << " ";
        }
        cout << endl;
    }
    cout << endl;


    // Pattern 04
    cout << "Pattern 04" << endl;
    // Upper-half
    for (int i = 1; i <= num; i++) {
        // Spaces
        for (int j = i; j <= num - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; (j <= 2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower-half
        for (int i = 1; i <= num; i++) {
        // Spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= 2 * (num - i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

}