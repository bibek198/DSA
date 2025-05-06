#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Positive, Negative and Zero identifier !!!" << endl;

    int num;
    cout << "Enter an Integer : " ;
    cin >> num;

    if (num > 0) {
        cout << num << " is a Positive integer." << endl;
    } else if (num = 0) {
        cout << num << " is zero." << endl;
    } else {
        cout << num << " is Negative integer." << endl;
    }

    return 0;
}