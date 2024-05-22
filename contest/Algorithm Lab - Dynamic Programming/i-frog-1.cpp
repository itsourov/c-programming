#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int dp[100000 + 10];
int rec(int idx, int arr[])
{
    if (idx == n - 1)
        return 0;
    if (idx >= n)
        return INT_MAX;
    if (dp[idx] != -1)
    {
        return dp[idx];
    }
    int way1 = rec(idx + 1, arr) + abs(arr[idx] - arr[idx + 1]);
    int way2 = rec(idx + 2, arr) + abs(arr[idx] - arr[idx + 2]);
    return dp[idx] = min(way1, way2);
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << rec(0, arr) << endl;
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