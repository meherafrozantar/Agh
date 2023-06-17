#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << '\n';
        }
        i++;
    }

   return 0;
}
