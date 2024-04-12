#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MAXN = 1001;
int arr[MAXN][MAXN];
int dp[MAXN][MAXN];
int n;

int walk(int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return arr[i][j];

    if (i >= n || j >= n || arr[i][j] == -1)
        return INT_MIN;

    if (dp[i][j] != -1)
        return dp[i][j];

    int down = walk(i + 1, j);
    int right = walk(i, j + 1);

    if (down == INT_MIN && right == INT_MIN)
        return dp[i][j] = INT_MIN;

    return dp[i][j] = arr[i][j] + max(down, right);
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    memset(dp, -1, sizeof(dp));

    int result = walk(0, 0);

    if (result == INT_MIN)
        cout << -1 << endl;
    else
        cout << result << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }

    return 0;
}
