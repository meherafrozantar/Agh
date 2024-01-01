#include <iostream>
using namespace std;

int get_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << get_sum(10) << endl; // prints 55
    cout << get_sum(100) << endl; // prints 5050
    cout << get_sum(1000) << endl; // prints 500500
    return 0;
}
