#include <iostream>
using namespace std;

int sumOfNaturalNumber (int num) {
    if (num == 1) return 1;
    return num + sumOfNaturalNumber(num - 1);
}

int main () {
    cout << sumOfNaturalNumber(5) << endl;
}