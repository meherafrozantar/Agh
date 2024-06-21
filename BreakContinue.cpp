#include<iostream>
using namespace std;

int main() {
    cout << "Enter numbers (0 to stop). Negative numbers are ignored.\n";
    while (true) {
        int input;
        cin >> input; // Read a number from the user
        if (input == 0) {
            cout << "You entered 0, so the loop is terminated.\n";
            break; // Exit the loop if the user enters 0
        }
        if (input < 0) {
            continue; // Skip the rest of the loop for negative numbers
        }
        cout << "You entered: " << input << '\n';
    }
    return 0;
}
