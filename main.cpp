#include <iostream>
#include <cmath>

using namespace std;

int main () {

    string operation;
    double num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Choose Operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> num2;

    if (operation == "+") {
        cout << num1 + num2;
    }
    else if (operation == "-") {
        cout << num1 - num2;
    }
    else if (operation == "*") {
        cout << num1 * num2;
    }
    else if (operation == "/") {
        cout << num1 / num2;
    }
    else {
        cout << "Not a valid operation";
    }

    return 0;
}