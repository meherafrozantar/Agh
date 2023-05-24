#include <iostream>
using namespace std;

int main()
{
    double a = 2 + 3.5;
    cout << "a = " << a << endl;
    double b = 2 + (int)3.5;     // explicitly converting from double to int
    cout << "b = " << b << endl;
    int sum = 1 + (int)'a';
    cout << "sum = " << sum << endl;
    char ch = 'a' + 3;
    cout << "ch = " << ch << endl;

    return 0;
}
