#include <iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, ...
int fibonacci (int index) {
    if (index == 0 || index == 1) return index;
    return (fibonacci(index - 1) + fibonacci(index - 2)); // first index-1 call will be complete 
    // then index-2 will be calculated
}

int main () {

    for (int i = 0; i <= 5; i++) {
        cout << fibonacci(i) << "  ";
    }
    cout << endl;
    return 0;
}