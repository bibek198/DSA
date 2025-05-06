// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ....
#include <iostream>
using namespace std;

int main () {
   cout << "Welcome to Fibonacci Printer !!!" << endl;

   int num;
   cout << "Enter a number : " ;
   cin >> num;
   
   int first = 0;
   int second = 1;
   int output = 0;
   // assuming num >= 2
    cout << first << " " << second << " ";
   while ((first + second) <= num) { // Why first + second and why not output ? Please understand it
    // reason is we have to guess the next output to stop the loop 
    output = first + second;
    first = second;
    second = output;
    cout << output << " " ;
   }
   cout << endl;

    return 0;
}
