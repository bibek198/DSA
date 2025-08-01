#include <iostream>
using namespace std;

void spiralTraversal (int mat[][4], int n, int m) {
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;

    while (srow <= erow && scol <= ecol) {
        // For top row
        for (int i = scol; i <= ecol; i++) {
            cout << mat[srow][i] << " ";
        }
        // for right col
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << " ";
        }
        // for bottom row
        for (int i = ecol - 1; i >= scol; i--) {
            cout << mat[erow][i] << " ";
        }
        // for left col
        for (int i = erow - 1; i >= srow + 1; i--) {
            cout << mat[i][scol] << " ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    return;
}

int main () {
    int matrics[4][4] = {{1, 2, 3, 4}, 
                         {5, 6, 7, 8}, 
                         {9, 10, 11, 12}, 
                         {13, 14, 15, 16}};

    spiralTraversal(matrics, 4, 4);

    return 0;
}

// My first attempt code 
    // vector<int> spiralOrder(vector<vector<int>>& matrix) {

    //     vector<int> answer; 
    //     int row = matrix.size();
    //     int col = matrix[0].size();

    //     int srow = 0;
    //     int scol = 0;
    //     int erow = row - 1;
    //     int ecol = col - 1;

    //     while (srow <= erow && scol <= ecol) {

    //         if (!(ecol == scol || srow == erow)) {
    //             // Top Row
    //             for (int i = scol; i <= ecol; ++i) {
    //                 answer.push_back(matrix[srow][i]);
    //             }

    //             // Right Col
    //             for (int i = srow + 1; i <= erow; ++i) {
    //                 answer.push_back(matrix[i][ecol]);
    //             } 

    //             // Bottom Row
    //             for (int i = ecol - 1; i >= scol; --i) {
    //                 answer.push_back(matrix[erow][i]);
    //             }

    //             // Left Col
    //             for (int i = erow - 1; i >= srow + 1; --i) {
    //                     answer.push_back(matrix[i][scol]);
    //             }

    //         } else if (srow == erow) {
    //             for (int i = scol; i <= ecol; i++) {
    //                 answer.push_back(matrix[erow][i]);
    //             }
    //             return answer;
    //         } else if (ecol == scol) {
    //             for (int i = srow; i <= erow; i++) {
    //                 answer.push_back(matrix[i][ecol]);
    //             }
    //             return answer;
    //         }

    //         srow++;
    //         scol++;
    //         erow--;
    //         ecol--;
    //     }

    // return answer;
    // }






    // Optimized code 
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int srow = 0, scol = 0;
//     int erow = matrix.size() - 1;
//     int ecol = matrix[0].size() - 1;

//     vector<int> answer;

//     while (srow <= erow && scol <= ecol) {
//         // top row
//         for (int i = scol; i <= ecol; i++) 
//             answer.push_back(matrix[srow][i]);

//         // right column
//         for (int i = srow + 1; i <= erow; i++) 
//             answer.push_back(matrix[i][ecol]);

//         // bottom row (only if more than one row remaining)
//         if (srow < erow) {
//             for (int i = ecol - 1; i >= scol; i--) 
//                 answer.push_back(matrix[erow][i]);
//         }

//         // left column (only if more than one column remaining)
//         if (scol < ecol) {
//             for (int i = erow - 1; i > srow; i--) 
//                 answer.push_back(matrix[i][scol]);
//         }

//         srow++;
//         scol++;
//         erow--;
//         ecol--;
//     }

//     return answer;
// }


// Step 1: Think of the funniest thing that ever happened to you 🤭
// Step 2: Don’t stop smiling 😄
// Step 3: Quick! Turn on your webcam or sprint to the nearest mirror 🪞🚀
