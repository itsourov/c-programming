#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int s, d;
    for (int j = 1; j <= t; j++)
    {
        cin >> s >> d;
        if (d > s)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}