
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int r[30], g[30], b[30];
int dp[4][30];
int rec(int prev, int idx)
{
    if (idx == n)
    {
        return 0;
    }
    if (dp[prev][idx] != -1)
    {
        return dp[prev][idx];
    }
    int way1 = INT_MAX;
    int way2 = INT_MAX;
    int way3 = INT_MAX;

    if (prev != 1)
    {
        way1 = rec(1, idx + 1) + r[idx];
    }
    if (prev != 2)
    {
        way2 = rec(2, idx + 1) + g[idx];
    }
    if (prev != 3)
    {
        way3 = rec(3, idx + 1) + b[idx];
    }
    return dp[prev][idx] = min(way1, min(way2, way3));
}
void solve()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            dp[i][j] = -1;
        }
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> g[i] >> b[i];
    }
    cout << rec(0, 0) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}