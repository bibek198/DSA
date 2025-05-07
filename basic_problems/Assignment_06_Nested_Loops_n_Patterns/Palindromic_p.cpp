#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Palindromic Pattern !!!" << endl;
    int size = 5;

    for (int i = 1; i <= size; i++) {
        // Spaces 
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }

        // Decreasing seq
        for (int j = i; j >= 1; j--) {
            cout << j ;
        }

        // Increasing seq 
        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }











    // THIS IS MY CODE // This is lengthy beacuse i am using j form 1 all the time
    // for (int i = 1; i <= size; i++) {
    //     // Spaces
    //     for (int j = 1; j <= (size - i); j++) {
    //         cout << " ";
    //     }
    //     // Decreasing seq of numbers
    //     int counter = i;
    //     for (int j = 1; j <= i; j++) {
    //         cout << counter--;
    //     }
    //     // now counter is at 0
    //     // Increasing seq of numbers
    //     counter++; 
    //     for (int j = 1; j <= i - 1; j++) {
    //         cout << ++counter;
    //     }
    //     cout << endl;
    // }

    return 0;

}