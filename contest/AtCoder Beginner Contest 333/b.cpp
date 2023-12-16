#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string one, two;
    cin >> one >> two;
    int value1, value2;

    value1 = abs(one[1] - one[0]);
    value2 = abs(two[1] - two[0]);

    if (value1 > 2)
    {
        value1 = 5 - value1;
    }
    if (value2 > 2)
    {
        value2 = 5 - value2;
    }
    if (value1 == value2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}