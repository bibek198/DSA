#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Rhombus Printer !!!" << endl;

    int size = 15;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= (size - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= size; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}