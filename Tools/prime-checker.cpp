#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Welcome to Prime-Checker!!!\n";

    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// bool primeChecker (int num) {
//     if (num == 1 || num == 2) {
//         return true;
//     }
//     for (int i = 2; i <= num * num; i++) {
//         if (num % i != 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main () {
//     cout << "Welcome to Prime-Checker!!!" << endl;

//     int num;
//     cout << "Enter a natural number : ";
//     cin >> num;

//     cout << primeChecker(num) << endl;


//     return 0;
// }