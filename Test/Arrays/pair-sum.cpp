#include <iostream>
using namespace std;

// TC = O(n^2)
void pairSumBrute (int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "[" << arr[i] << ", " << arr[j] << "]" << endl;
                return;
            }
        }
    }
    cout << "No valid answer" << endl;
    return;   
}

// TC = O(n^1)
void pairSumOptimized (int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        int currSum = arr[start] + arr[end];
        if (currSum == target) {
            cout << "[" << arr[start] << ", " << arr[end] << "]" << endl; 
            return;
        } else if (currSum > target) {
            end--;
        } else {
            start++;
        }
    }
    cout << "No valid solution" << endl;
    return;
}

int main () {
    int arr[] = {2, 7, 11, 15};
    int target = 9;

    pairSumBrute(arr, 4, 9);
    pairSumOptimized(arr, 4, 9);

    return 0;

}