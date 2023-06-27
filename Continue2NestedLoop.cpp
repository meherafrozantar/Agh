#include <iostream>
using namespace std;

int main()
{
    for (int week = 1; week <= 4; week++)
    {
        if (week == 3) continue;
        cout << "week = " << week << '\n';
        for (int day = 1; day <= 7; day++)
        {
            cout << " day = "<< day << '\n';
        }
    }
        return 0;
}

