#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num = 16;
    int binaryNum = 0;

    int power = 0;
    for (int i = 0; num > 0; i++) {
        binaryNum += (num % 2) * pow(10, power++);
        num /= 2;
    }
    cout << "Binary number is " << binaryNum << endl;


    return 0;
}