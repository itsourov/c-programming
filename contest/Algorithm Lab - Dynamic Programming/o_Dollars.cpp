#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int dp[30000 + 10][15];
vector<double> coins = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
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
    for (int i = 0; i < 30000 + 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            dp[i][j] = -1;
        }
    }
    double n;
    while (cin >> n && n != 0.0)
    {
        int nn = (n * 100) + 0.5;

        int actualAns = f(nn, 0);
        cout << fixed << setprecision(2) << setw(6) << n << setw(17) << actualAns << endl;
    }
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