#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int day[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> day[i];
    }
    int d = 0;
    while (n > 0)
    {
        if (d == 7)
            d = 0;
        n -= day[d];
        d++;
    }
    cout << d << endl;
}