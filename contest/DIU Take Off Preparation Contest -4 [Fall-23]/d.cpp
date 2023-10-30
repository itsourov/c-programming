#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int isLeapYear = 0;
    if (n < 1582)
    {
        if (n % 4 == 0)
            isLeapYear = 1;
    }
    else
    {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        {
            isLeapYear = 1;
        }
    }
    if (isLeapYear)
    {
        cout << "I can participate in LCPC" << endl;
    }
    else
    {
        cout << "I have to travel back to the past" << endl;
    }
}