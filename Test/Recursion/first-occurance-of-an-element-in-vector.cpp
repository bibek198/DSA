#include <iostream>
#include <vector>
using namespace std;

int firstOccurance (vector<int> vec, int key, int i) {
    if (vec[i] == key) return i;
    if (i == vec.size()) return -1;
    return firstOccurance(vec, key, i+1);
}

int main () {
    // [1, 2, 3, 4, 4, 5], key = 4, ans = 3
    vector<int> myVector = {1, 3, 3, 4, 9};
    cout << firstOccurance(myVector, 3, 0) << endl;

}