#include <iostream>
using namespace std;

int main() {
    int n, a[n];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n], j = 0;
    for (int i = n - 1; i >= 0; i--) {
        b[j] = a[i];
        j++;
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
    return 0;
}
