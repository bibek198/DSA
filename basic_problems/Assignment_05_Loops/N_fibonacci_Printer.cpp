#include <iostream>
using namespace std;

int main ( ) {
    cout << "Fibonacci Printer !!!" << endl;

    int num;
    cout << "Enter a Number : ";
    cin >> num;

    int first = 0;
    int second = 1;
    int third = 0;

    cout << first << " " << second << " ";

    for ( int i = 2; i < num; i ++) {
        third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
    cout << endl;

    return 0;
}