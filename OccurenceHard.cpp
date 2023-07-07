#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int a[n] = {1, 2, 2, 9, 1, 1};
    int frequency[11];
    for (int i = 1; i <= 10; i++) {
        frequency[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        frequency[a[i]]++;
    }
    for (int number = 1; number <= 10; number++) {
        cout << number << " occurs "  << frequency[number] << " times\n";
    }
    return 0;
}
