#include <iostream>
using namespace std;

int main() {
    int age[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> age[i];
        sum += age[i];
    }
    cout << sum << '\n';
    return 0;
}
