#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = a + b * b - b + (a / b);
    cout << result << '\n';
    return 0;
}

