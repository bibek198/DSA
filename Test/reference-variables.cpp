#include <iostream>
using namespace std;

void increase (int num) {
    num++;
}

void increaseRef (int &num) {
    num++;
}

int main () {
    int a = 5;
    int &b = a;

    // 5
    cout << a << " " << b << endl;

    a++; // 6
    cout << a << " " << b << endl;

    b++; // 7
    cout << a << " " << b << endl;

    // won't increase as pass by value
    increase(a);
    cout << a << " " << b << endl;

    // now pass by reference -> this will update the original value 
    increaseRef(a);
    cout << a << " " << b << endl;



    return 0;
}