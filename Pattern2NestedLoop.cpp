#include<iostream>
using namespace std;
int main()
{
    for (int line = 1; line <= 5; line++) {
        for (int star = 1; star <= line ; star++)
        {
            cout << "*";
        }

         cout << '\n';

    }
    return 0;
}
