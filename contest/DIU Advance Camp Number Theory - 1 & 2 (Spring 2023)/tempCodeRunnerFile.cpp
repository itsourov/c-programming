#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= n;
        if (ans >= 998244353)
            ans %= 998244353;
    }
    cout << ans << endl;
}