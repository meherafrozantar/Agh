#include <iostream>
using namespace std;

int main()
{
    bool cute = true;
    bool little = true;
    if (cute && little)
    {
        cout << "The penguin is cute & little\n";
    }
    else if (cute && !little)
    {
        cout << "The penguin is cute\n";
    }
    else if (!cute && little)
    {
        cout << "The penguin is little\n";
    }
     else
     {
        cout << "This is a penguin\n";
     }
    return 0;
}
