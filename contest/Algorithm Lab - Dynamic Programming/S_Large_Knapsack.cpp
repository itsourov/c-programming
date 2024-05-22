#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, w;
int dp[500][2000000 + 10];
int rec(int idx, int available, pair<int, int> arr[])
{
    // cout << available << " " << idx << endl;
    if (available < 0)
        return INT_MIN;
    if (idx >= n)
        return 0;
    if (dp[idx][available] != -1)
        return dp[idx][available];
    return dp[idx][available] = max(rec(idx + 1, available - arr[idx].first, arr) + arr[idx].second,
                                    rec(idx + 1, available, arr));
}
void solve()
{

    cin >> n >> w;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << rec(0, w, arr) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}