#include <iostream>
using namespace std;

void printArr (int arr[], int n) {
    cout << "\nArray = ";
    for (int i = 0; i < n; i++) {
        (i != n - 1) ? cout << arr[i] << ", " : cout << arr[i];
    }
    cout << endl;
}

int main () {
    int students[50];
    printArr(students, 50);
    
    int marks[50] = {85, 92, 73, 78, 91, 79};
    printArr(marks, 50);

    int zerosArr[100] = {0};
    printArr(zerosArr, 100);

    // getting size or length of an array 
    int sizeOrLength = sizeof(students) / sizeof(students[0]);
    cout << endl << sizeOrLength << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl; // array name as pointer 
    cout << *arr << endl; // arr[0]
    cout << *(arr + 1) << endl; // arr[1]


    return 0;
    
}