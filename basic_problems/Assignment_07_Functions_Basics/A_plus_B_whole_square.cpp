#include <iostream>
using namespace std;

int wholeSquare(int a, int b);

int main () {
    cout << "Welcome to (A + B) ^ 2" << endl;

    int a, b;
    cout << "Enter two number a and b : ";
    cin >> a >> b;

    cout << "("<< a << " + " << b << ")^2 = " << wholeSquare(a, b) << endl;

    return 0;
}

int wholeSquare(int a, int b) {
    cout << a << "*" << a << " + 2*" << a << "*" << b << " + " << b << "*" << b << " = ";
    return a * a + b * b + 2 * a * b;
}