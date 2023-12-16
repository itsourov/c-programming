#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int ans, i;
    if (n >= 10e4)
    {
        ans = 215582594;
        i = 10e4 + 1;
    }
    else
    {
        ans = 1;
        i = 1;
    }
    for (; i <= n; i++)
    {
        ans *= i;
        if (ans >= 998244353)
            ans %= 998244353;
    }
    cout << ans << endl;
}