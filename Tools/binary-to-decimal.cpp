#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int binaryNum = 1010; // Assume this "num" is a binary number
    int decimalNum = 0;

    // 1010 % 10 = 0 -> 0 * 2 ^ 1
    // 1010 / 10 = 101
    // similary continues

    int power = 0;
    for (int i = 0; binaryNum > 0; i++) {
        decimalNum += binaryNum % 10 * pow(2, power++);
        binaryNum /= 10;
    }
    cout << "Decimal number is " << decimalNum << endl;


    return 0;
}