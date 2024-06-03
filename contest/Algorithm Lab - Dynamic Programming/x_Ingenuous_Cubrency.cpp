#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int dp[10000 + 10][25];
vector<int> coins = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
int f(int n, int idx)
{

    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
        return 0;

    if (dp[n][idx] != -1)
        return dp[n][idx];

    if (idx >= coins.size())
        return 0;

    int ans = 0;
    int aiCoinKotoBarNibo = 0;

    while (n - (aiCoinKotoBarNibo * coins[idx]) >= 0)
    {
        ans += f(n - aiCoinKotoBarNibo * coins[idx], idx + 1);
        aiCoinKotoBarNibo++;
    }
    return dp[n][idx] = ans;
}
void solve()
{
    int n;
    for (int i = 0; i < 10010; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            dp[i][j] = -1;
        }
    }
    while (cin >> n)
    {

        // cout << n << endl;
        int actualAns = f(n, 0);
        cout << actualAns << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << coins.size() << endl;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}