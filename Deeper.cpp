#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 2; i++) {
        cout << "i = " << i << '\n';
        for (int j = 1; j <= 2; j++) {
            cout << "   j = " << j << '\n';
            for (int k = 1; k <= 2; k++) {
                cout << "       k = " << k << '\n';
            }
        }
    }
    return 0;
}
