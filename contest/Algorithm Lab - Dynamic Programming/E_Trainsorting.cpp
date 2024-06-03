#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int n;
vector<int> arr;
int dp[2010][2010];

int rec(int idx, int prev_idx)
{
    if (idx == n)
    {
        return 0;
    }

    if (dp[idx][prev_idx] != -1)
    {
        return dp[idx][prev_idx];
    }

    int take = 0, not_take = 0;

    // Try to take the current car if it can be placed
    if (prev_idx == n || arr[idx] <= arr[prev_idx])
    {
        take = rec(idx + 1, idx) + 1;
    }

    // Option to skip the current car
    not_take = rec(idx + 1, prev_idx);

    return dp[idx][prev_idx] = max(take, not_take);
}

void solve()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << rec(0, n) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
