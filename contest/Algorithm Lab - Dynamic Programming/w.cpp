#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int dp[40000][10];
vector<int> coins = {1, 5, 10, 25, 50};
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
    for (int i = 0; i < 40000; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            dp[i][j] = -1;
        }
    }
    while (cin >> n)
    {

        int actualAns = f(n, 0);
        if (actualAns > 1)
        {
            cout << "There are " << actualAns << " ways to produce " << n << " cents change." << endl;
        }
        else
        {
            cout << "There is only " << actualAns << " way to produce " << n << " cents change." << endl;
        }
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