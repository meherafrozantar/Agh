#include <iostream>
using namespace std;

int main()
{
    char ch = 'd';
    int ascii = (int)ch;
    cout << "The ascii value of d is = " << ascii << endl;

    char back_to_char = (char)ascii;
    cout << "Converting back to char = " << back_to_char << endl;


    return 0;
}
