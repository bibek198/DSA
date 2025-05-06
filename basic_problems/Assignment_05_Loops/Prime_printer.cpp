#include <iostream>
#include <cmath>
using namespace std;


int main () {
    cout << "Welcome to prime printer !!!" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    // num >= 2
    for (int i = 2; i <= num; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) { // j < sqrt(i) also works (think why ? 4 * 4)
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}