#include <iostream>
using namespace std;

int main()
{
    for (int line = 1; line <= 5; line++)
    {
        int star = line;
        int space = 5 - star;
        for (int i = 1; i <= space ; i++)
        {
            cout << ' ' ;
        }
        for (int i = 1; i <= star; i++)
        {
            cout << '*' ;
        }
        cout << '\n' ;
    }
    return 0;
}
