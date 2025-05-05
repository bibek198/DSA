#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to area of triangle !!!" << endl;

    int base, height;
    cout << "Enter base of triangle : ";
    cin >> base;
    cout << "Enter height of triangle : ";
    cin >> height;
    cout << "Area of Triangle is " << (base * height) / 2  << endl;

    return 0;

}