#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 109546051211;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int temp = n;
    int prod = 1;
    int i = 1;
    while (temp--)
    {
        prod *= i;
        i++;
        if (i == mod)
        {
            i == 0;
        }
    }
    cout << prod << endl;
}