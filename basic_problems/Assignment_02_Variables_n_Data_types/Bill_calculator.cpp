#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Bill amount calculator with 18% GST !!!" << endl;

    float pencil, pen, eraser;
    cout << "Enter the price of Pencil, Pen and Eraser : " ;
    cin >> pencil >> pen >> eraser;

    float total = pencil + pen + eraser;

    cout << "Final bill amount with 18% GST is " << ((total) + (total) * 0.18 ) << endl;

    return 0;
}