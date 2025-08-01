#include <iostream>
using namespace std;

int power (int x, int n) {
    // x ^ n
    if (n == 0) return 1;

    int halfPow = power(x, n/2);
    int halfPowSquare = halfPow * halfPow;

    if (n % 2 != 0) {
        return x * halfPowSquare;
    } else {
        return halfPowSquare;
    }
}

int main () {
    cout << power(2, 10) << endl;
}