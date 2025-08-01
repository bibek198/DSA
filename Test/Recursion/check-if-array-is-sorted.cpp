#include <iostream>
using namespace std;

bool isSorted (int arr[], int size, int i) {
    if (i == size - 1) return true;
    if (arr[i] > arr[i + 1]) return false;

    return isSorted(arr, size, i+1);   
}

int main () {
    int arr[] = {1, 2, 4, 5, 6};
    int myArr[] = {4, 3, 1, 3};
    cout << isSorted(arr, 5, 0) << endl;
    cout << isSorted(myArr, 4, 0) << endl;


    return 0;

}