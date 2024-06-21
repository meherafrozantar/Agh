#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Your grade is A+\n";
    } else if (marks >= 70) {
        cout << "Your grade is A\n";
    } else if (marks >= 60) {
        cout << "Your grade is A-\n";
    } else if (marks >= 50) {
        cout << "Your grade is B\n";
    } else if (marks >= 40) {
        cout << "Your grade is C\n";
    } else if (marks >= 33) {
        cout << "Your grade is D\n";
    } else {
        cout << "Your grade is F\n";
    }

    return 0;
}
