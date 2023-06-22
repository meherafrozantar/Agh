#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 10 != 9)
        {
            continue;
        }
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << '\n';
    }
    return 0;
}
