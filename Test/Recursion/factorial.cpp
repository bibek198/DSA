#include <iostream>
using namespace std;

int factorial (int num) {
    if (num == 0) return 1;
    return num * factorial(num - 1);
}

int main () {
    int a = 5;
    cout << factorial(a) << endl;
}