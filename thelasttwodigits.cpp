#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // get the last two digits of a, b, c, and d
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

     // get the last two digits of a * b * c * d
    int product = a * b * c * d;
    int last_digits = product % 100;

    if (last_digits < 10) { // special case: if the last two digits are less than 10, then we need to add a 0 before the last digit
        cout << 0 << last_digits << '\n';
    }
    else {
        cout << last_digits << '\n';
    }
    return 0;
}
