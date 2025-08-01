#include <iostream>
using namespace std;

void printSubArray (int arr[], int size) {
    // O(n^3) 
    for (int start = 0; start < size; ++start) {
        for (int end = start; end < size; end++) {
            cout << "Sub-Array: (" << start << ", " << end << ") = ";
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        
    }

}

int main () {
    int myArr[] = {3, 4, 1, 2, 5};

    printSubArray(myArr, 5);


    return 0;
}