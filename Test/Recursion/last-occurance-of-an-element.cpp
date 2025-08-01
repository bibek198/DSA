#include <iostream>
#include <vector>
using namespace std;

int lastOccurance (vector<int> vec, int key, int i) {
    if (vec[i] == key) return i;
    if (i == 0) return -1;
    return lastOccurance(vec, key, i - 1);

}

int main () {
    vector<int> myVector = {1, 2, 3, 3, 3, 4};
    cout << lastOccurance(myVector, 3, myVector.size());
}