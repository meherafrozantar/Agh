#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[] = "hello";
    char b[] = "world!";
    int len_a = strlen(a);
    int len_b = strlen(b);
    char c[len_a + len_b + 1];
    for (int i = 0; i < len_a; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < len_b; i++) {
        c[len_a + i] = b[i];
    }
    c[len_a + len_b] = '\0'; // add the null character to end the string
    cout << c << '\n';
    return 0;
}
