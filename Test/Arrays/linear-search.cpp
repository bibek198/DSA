#include <iostream>
using namespace std;

int linearSearch (int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) return i;
    }
    return -1;
}

int main () {
    int arr[] = {1, 3, 5, 2, 4};
    int key = 3;

    cout << endl << linearSearch(arr, 5, key) << endl;
    
}