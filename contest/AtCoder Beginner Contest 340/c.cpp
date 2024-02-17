#include <bits/stdc++.h>
using namespace std;

#define int long long
int ans = 0;
map<int, int> dp;
int rec(int x)
{
    if (dp[x])
    {
        return dp[x];
    }
    if (x <= 1)
    {
        return 0;
    }
    if (x % 2 == 0)
    {
        return dp[x] = (rec(x / 2)) * 2 + x;
    }
    return dp[x] = rec((x / 2)) + rec((x / 2) + 1) + x;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << rec(n) << endl;
    // cout << ans << endl;
}