#include <iostream>
using namespace std;

void printArr (int arr[], int n) {
    cout << "\nArray = ";
    for (int i = 0; i < n; i++) {
        (i != n - 1) ? cout << arr[i] << ", " : cout << arr[i];
    }
    cout << endl;
}

void reverseArrayWithExtraSpace (int arr[], int size) {
    int newArray[size];
    for (int i = 0; i < size; i++) {
        newArray[size - i - 1] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = newArray[i];
    }
}

void reverseArrayWithoutExtraSpace (int arr[], int size) {
    // my way of writing this code
    for (int i = 0; i <= size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }

    // more readable way
    // int start = 0;
    // int end = size - 1;
    // while (start < end) {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
}

int main () {
    int arr[] = {1, 3, 4, 2, 5};

    reverseArrayWithExtraSpace(arr, 5);
    printArr(arr, 5);
    
    
    reverseArrayWithoutExtraSpace(arr, 5);
    printArr(arr, 5);

    return 0;
}