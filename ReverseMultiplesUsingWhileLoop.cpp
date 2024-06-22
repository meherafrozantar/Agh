#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m ;
    int i = n;
    while (i >= 1){
        if (i % m == 0){
            cout << i << '\n';
        }
        i--;
    }
    return 0;
}
