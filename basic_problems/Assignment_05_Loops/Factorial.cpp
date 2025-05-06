#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Factorial Program !!!" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int factorial = 1;

    // n! = n * n-1 * n-2 * ... * 1
    // Have to check unnecessay conditions for 0 (only) 
    // if (num == 0 || num == 1) {
    //     cout << "Factorial of " << num << " is " << 1 << endl;
    // } else if (num > 0) {
    //     for (int i = num; i > 0; i--) {
    //         factorial *=  i;
    //     }
    //     cout << "Factorial of " << num << " is " << factorial << endl;
    // } else {
    //     cout << "Invalid Input" << endl;
    // }


    // Better, n! = 1 * 2 * ... * n
    if (num >= 0) {
        for (int i = 1; i <= num; i++) {
            factorial *=  i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0; 
}