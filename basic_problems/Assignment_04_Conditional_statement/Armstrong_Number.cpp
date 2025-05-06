#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Armstrong Number identifier !!!" << endl;

    int num;
    cout << "Enter a number : " ;
    cin >> num;

    int test_number = num;
    int result = 0;
    while (test_number != 0) {
        result += ((test_number % 10) * (test_number % 10) * (test_number % 10));
        test_number /= 10;
    }

    if (result == num) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }


    return 0;
}