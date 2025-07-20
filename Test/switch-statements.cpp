#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the Simple Calculator (Switch Case Version)!\n\n";

    int num1, num2;
    char operation;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
            break;
        case '/':
            if (num2 == 0) {
                cout << "❌ Error: Cannot divide by zero.\n";
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
            }
            break;
        default:
            cout << "❌ Invalid operation. Please choose from +, -, *, /\n";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main () {
//     cout << "Welcome to simple calculator using Switch case!!! \n";
//     char operation;
//     int num1, num2;
//     cout << "Enter two numbers : ";
//     cin >> num1;
//     cin >> num2;
    
//     cout << "Chose an operation +, -, *, / :";
//     cin >> operation;
    
//     switch (operation)
//     {
//     case '+':
//         cout << num1 + num2 << endl;
//         break;
//     case '-':
//         cout << num1 - num2 << endl;
//         break;
//     case '*':
//         cout << num1 * num2 << endl;
//         break;
//     case '/':
//         cout << num1 / num2 << endl;
//         break;
    
//     default:
//         cout << "Invaid operation";
//         break;
//     }
// }