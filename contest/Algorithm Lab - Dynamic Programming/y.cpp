#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int dp[1000 + 10][50 + 5];
vector<int> coins;
vector<int> numberOfCoins;
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

    while (aiCoinKotoBarNibo <= numberOfCoins[idx] && n - (aiCoinKotoBarNibo * coins[idx]) >= 0)
    {
        ans += f(n - aiCoinKotoBarNibo * coins[idx], idx + 1);
        aiCoinKotoBarNibo++;
    }
    return dp[n][idx] = ans % 100000007;
}
void solve()
{
    coins.clear();
    numberOfCoins.clear();

    int n, k;
    cin >> n >> k;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        coins.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        numberOfCoins.push_back(x);
    }

    for (int i = 0; i < 1000 + 5; i++)
    {
        for (int j = 0; j < 50 + 5; j++)
        {
            dp[i][j] = -1;
        }
    }

    int actualAns = f(k, 0);
    cout << actualAns << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc++ << ": ";
        solve();
    }
    return 0;
}