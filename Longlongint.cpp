#include <iostream>
using namespace std;

int main()
{
    long long int big_number = 1000000000000000; //15 zeros
    cout << big_number << '\n';
    int x = big_number;      // it will overflow as int data type cannot contain that big number, recall that int can contain upto (2^31 - 1)
    cout << x << '\n';
    return 0;
}
