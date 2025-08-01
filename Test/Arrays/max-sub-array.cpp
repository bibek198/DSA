#include <iostream>
using namespace std;

// Max Sub-Array : Brute force -> O(n^3)
int maxSubArrayBruteForce (int arr[], int size) {
    int sum = INT_MIN;
    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            int subArraySum = 0;
            for (int i = start; i <= end; i++) {
                subArraySum += arr[i];
            }
            if (sum <= subArraySum) sum = subArraySum;
        }
    }
    return sum;
}

// Max Sub-Array : Better -> Inner loop optimization -> O(n^2)
int maxSubArrayBetter (int arr[], int size) {
    int sum = INT_MIN;
    for (int start = 0; start < size; start++) {
        int currentSum = 0;
        for (int end = start; end < size; end++) {
            currentSum += arr[end];
            if (sum <= currentSum) sum = currentSum;
        }
    }
    return sum;
}

// Max Sub-Array : Best -> Kadane's Algo -> O(n)
int maxSubArraySumKadan (int arr[], int size) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += arr[i];
        if (currentSum < 0) currentSum = 0;
        else if (maxSum <= currentSum) maxSum = currentSum;
    }

    return maxSum;
}
// Please visulaize what is happeing in this algo



int main () {
    int myArr[] = {5, -1, 3, 4, -2};
    cout << maxSubArrayBruteForce(myArr, 5) << endl;
    cout << maxSubArrayBetter(myArr, 5) << endl;
    cout << maxSubArraySumKadan(myArr, 5) << endl;


    return 0;
}