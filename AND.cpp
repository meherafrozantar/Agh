#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 11;
    int result = a & b;
    cout << result << '\n';
    cout << (3 & 4) << '\n'; // use brackets here, otherwise you will get compilation error
}
