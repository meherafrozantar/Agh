#include <iostream>
using namespace std;

int main() {
    int age[5];
    for (int i = 0; i < 5; i++) {
        cin >> age[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << age[i] << ' ';
    }
    return 0;
}
