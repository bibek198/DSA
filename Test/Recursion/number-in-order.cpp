#include <iostream>
using namespace std;

void printDecreasingOrder (int num) {
    if (num == 0) return;
    cout << num << "  ";
    printDecreasingOrder(num - 1);
}
void printIncreasingOrder (int num) {
    if (num == 0) return;
    printIncreasingOrder(num - 1);
    cout << num << "  ";
}




int main () {
    int num = 5;
    // printDecreasingOrder(25);
    printIncreasingOrder(25);
}