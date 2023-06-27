#include <iostream>
using namespace std;

int main()
{
    for (int week = 1; week <= 4; week++)
    {
        cout << "week = " << week << '\n';
        for (int day = 1; day <= 7; day++)
        {
            if (day == 3) continue;
            cout << " day = "<< day << '\n';
        }
    }
        return 0;
}

