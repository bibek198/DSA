#include <iostream>
using namespace std;

// pass by value and default case
int add (int a, int b = 1) {
    return a + b;
}

// pass by address
void swap (int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// pass by reference 
void swapRef (int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}


int main () {
    int num1 = 5, num2 = 10;
    cout << add(num1, num2) << endl; // uses both arguments 
    cout << add(num1) << endl; // uses default case

    cout << num1 << " " << num2 << endl;

    swap(&num1, &num2);
    cout << num1 << " " << num2 << endl;
    
    swapRef(num1, num2);
    cout << num1 << " " << num2 << endl;
}