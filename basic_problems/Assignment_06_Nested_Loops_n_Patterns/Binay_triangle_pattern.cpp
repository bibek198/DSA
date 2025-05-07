#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Pattern Printer !!!" << endl;

    bool output;
    int size = 15;
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 0) {
            output = false;
        } else {
            output = true;
        }
        for (int j = 1; j <= i; j++) {
            cout << output;
            output = !output;
        }
        cout << endl;
    }



    return 0;
}