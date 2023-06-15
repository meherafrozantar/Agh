#include<iostream>
using namespace std;
int main()
{
    int magic_number = 4;
    int guess;
    while (guess != magic_number)
    {
        cout << "Guess the number: ";
        cin >> guess;
    }
    cout << "Congrats!" << '\n';
    return 0;
}
