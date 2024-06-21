#include<iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
    } else if (op == '/') {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
    } else {
        cout << "Invalid operator\n";
    }

    return 0;
}
