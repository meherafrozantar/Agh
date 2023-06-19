#include <iostream>
using namespace std;

int main()
{
    int a, b, ans = 1;
    cin >> a >> b;
    int i = 1;
    while (i <= b)
    {
        ans *= a;
        i++;
    }
    cout << ans << '\n';
    return 0;
}
