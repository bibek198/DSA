#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    int a = 5;
    int *p;
    p = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    // p = 10; // this throws error, as we are assing a interger to a address type varibale that is pointer
    // cout << p;
    // p = 0x16bc12c4c
    // cout << p << endl;
    
    cout << sizeof(p) << endl; // 8 bytes

    char ch = 'A';
    char* ptr = &ch;
    cout << sizeof(ptr) << endl; // 8 bytes

    int num = 5;
    int *ptr1 = &num;
    cout << ptr1 << endl;

    int secNum = 10;
    ptr1 = &secNum;
    cout << ptr1 << endl;

    int myNum = 10;
    int *oldPtr = &myNum;
    int **newPtr = &oldPtr;
    cout << myNum << endl << oldPtr << endl << newPtr << endl << *oldPtr << endl << *newPtr << endl << **newPtr << endl;
    // 10 addrr-mynum olptaffrr 10 10


    // NULL ptr
    int *somePtr; // bad practice 
    cout << somePtr << endl; // garbage value
    int *goodPtr = NULL; // good practice
    cout << goodPtr << endl; // 0x0
    int *dontknowThisPtr = nullptr; // best practice
    cout << dontknowThisPtr << endl; // 0x0

    // Note : use nullptr
    // difference comes in function overloading and type safety 


    // c style
    int *j;
    j = (int *) malloc (1 * sizeof(int));
    cout << j << " " << *j << endl;
    *j = 25;
    cout << j << " " << *j << endl;

    free(j);

    // c++ style
    int *k;
    k = new int[1];
    cout << k << " " << *k << endl;
    *k = 34;
    cout << k << " " << *k << endl;

    delete[] k;


    // Name of an array also like pointer 
    int arr[5] = {1, 2, 3, 4, 5};
    int *myP;
    myP = arr; // or myP = &a[0];

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << myP[i] << " ";
    }
    cout << endl;

    int* myArrInHeap = new int[5];
    myArrInHeap[0] = 5;
    myArrInHeap[1] = 10;
    myArrInHeap[2] = 15;
    myArrInHeap[3] = 20;
    myArrInHeap[4] = 25;

    for (int i = 0; i < 5; i++) {
        cout << myArrInHeap[i] << " ";
    }
    cout << endl;

    cout << "\n \n \n";

    // Pointer Arithmatics
    // Dangerous : pointer to char is very tricky
    char myChar = 'A';
    char* myCharPtr = &myChar;

    cout << *myCharPtr << " " << ++myCharPtr << endl;

    // This works as intended
    int myTestNum = 15;
    int* myPtrNum = &myTestNum;
    cout << myPtrNum << " " << ++myPtrNum << endl;

    return 0;
}