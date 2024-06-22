#include <iostream>
using namespace std;
int32_t main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n * n; i++){
        sum += ((i * i) + (3 * i) -9);
    }
    cout << sum;
    return 0;
}
