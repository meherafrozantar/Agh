/*Input an integer n. Output the last two digits of the number n^3. It is guaranteed that 1 <= n <=1234567 and it will
be such that the last two digits of n^3 will not contain any 0s. For example, if n = 5, then n^3 = 5^3 = 125.So the last 
two digits are 25 and you should print it.*/

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    long long cube = (long long) n * n * n;
    int last_two_digits = cube % 100;
    cout << last_two_digits << endl;

    return 0;
}
