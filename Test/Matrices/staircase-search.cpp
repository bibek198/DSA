#include <iostream>
using namespace std;

int main () {
    int matrics[4][4] = {{1, 2, 3, 4}, 
                         {5, 6, 7, 8}, 
                         {9, 10, 11, 12}, 
                         {13, 14, 15, 16}};
    
    int startRow = 3;
    int startCol = 0;
    int key = 16;


    while (startRow >= 0 || startCol <= 3) {
        if (matrics[startRow][startCol] == key) {
            cout << "found at " << startRow << ", " << startCol << endl;
            break;
        } else if (matrics[startRow][startCol] > key) {
            startRow--;
        } else {
            startCol++;
        }
    }


    return 0;
}