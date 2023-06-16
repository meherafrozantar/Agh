#include <iostream>
using namespace std;

int main()
{
    int magic_number = 5;
    int guess = -1;
    int guess_limit = 2;
    int guess_cnt = 0;
    bool guess_limit_crossed = false;

    while (guess != magic_number && !guess_limit_crossed)
    {
        if (guess_cnt < guess_limit)
        {cout << "Guess one number: ";
        cin >> guess;
        guess_cnt++;
        }
        else
        {
            guess_limit_crossed = true;
        }
    }
    if (guess_limit_crossed)
    {
        cout << "Sad :(" << '\n';
    }
    else
    {
        cout << "Congrats!";
    }
    return 0;
}
