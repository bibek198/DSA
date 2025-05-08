#include <iostream>
using namespace std;

bool palindromeChecker(int num);

int main () {
    cout << "Welcome to Palindrome Checker !!!" << endl;

    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (palindromeChecker(num)) {
        cout << num << " is a Palindrome." << endl;
    } else {
        cout << num << " is not a Palindrome." << endl;
    }

    return 0;
}

bool palindromeChecker (int num) {
    int num_copy = num;
    int rev_num = 0;
    for (int i = 0; num_copy > 0; i++) {
        rev_num = rev_num * 10 + num_copy % 10;
        num_copy = num_copy / 10;
    }

    if (rev_num == num) {
        return true;
    }
    return false;
}