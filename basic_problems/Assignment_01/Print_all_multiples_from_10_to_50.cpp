#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Multiples printer !!!" <<endl;

    int num;
    cout << "Enter a number ";
    cin >> num;

    for (int i = 10; i <= 50; i++) {
        if (i % num == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}