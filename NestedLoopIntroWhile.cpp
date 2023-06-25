#include<iostream>
using namespace std;
int main()
{
    for (int week = 1; week <= 4; week++) {
        cout << "week = " << week << '\n';

        //for (int day = 1; day <= 7; day++) {
        //cout << "   day = " << day << '\n';

        int day = 1;
        while (day <= 7)
        {
            cout << "   day = " << day << '\n';
            day++;
        }
    }
    return 0;
}
