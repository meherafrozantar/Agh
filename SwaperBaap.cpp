#include <iostream>
using namespace std;

int main()
{
    int a, b, c, temp;
    cin >> a >> b >> c;
    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "c = " << c << '\n';

    return 0;
}
