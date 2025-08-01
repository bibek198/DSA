// leetcode 121
#include <iostream>
using namespace std;

// brute force -> O(n^2)
int maxProfit (int arr[], int size) {
    int profit = 0;
    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            int diff = arr[end] - arr[start];
            if ((diff > 0) && (diff > profit)) profit = diff;
        }
    }

    return profit;
}

// optimized code -> O(n) 
// but space is not optimized
int maxProfitOpt (int arr[], int size) {
    int bestBuy[size];
    bestBuy[0] = INT_MAX;

    for (int i = 1; i < size; i++) {
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
    }

    int profit[size];
    for (int i = 0; i < size; i++) {
        profit[i] = arr[i] - bestBuy[i];
    }

    int maxProfit = 0;
    for (int i = 0; i < size; i++) {
        if (profit[i] > maxProfit) maxProfit = profit[i];
    }

    return maxProfit;
}

// optimized for both space -> O(1) and time -> O(n)
// this can easily be done from method 2
int maxProfitBest (int arr[], int size) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < size; i++) {
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }

    return maxProfit;
}



int main () {
    int arr[] = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(arr, 5) << endl;
    cout << maxProfitOpt(arr, 5) << endl;

}