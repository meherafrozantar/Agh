#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "It is a vowel\n";
    else
        cout << "It is a consonant\n";

    return 0;
}
