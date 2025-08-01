#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2; // this code can cause problem in larger data 
    int mid = start + (end - start) / 2;
    
    while (start <= end) {
        if (key == arr[mid]) return mid;
        else if (key > arr[mid]) {
                start = mid + 1;
                // mid = (start + end) / 2;
                mid = start + (end - start) / 2;
            } else {
                end = mid - 1;
                // mid = (start + end) / 2;
                mid = start + (end - start) / 2;
            }
        }
    return -1;
}

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;

    cout << binarySearch(arr, 5, key) << endl;



    return 0;
}