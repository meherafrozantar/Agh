#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int a[n] = {1, 2, 2, 9, 1, 1};
    for (int number = 1; number <= 10; number++) {
        int number_count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == number) {
                number_count++;
            }
        }
        cout << number << " occurs "  << number_count << " times\n";
    }
   
    return 0;
}
