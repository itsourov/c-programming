#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int dp[1010][35];
int knapsack(int idx, int available, int price[], int weights[])
{
    if (available < 0)
        return INT_MIN;
    if (idx >= n)
        return 0;
    if (dp[idx][available] != -1)
        return dp[idx][available];
    int way1 = knapsack(idx + 1, available - weights[idx], price, weights) + price[idx];
    int way2 = knapsack(idx + 1, available, price, weights);
    return dp[idx][available] = max(way1, way2);
}
void solve()
{

    cin >> n;
    int price[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i] >> weight[i];
    }
    int g;
    cin >> g;
    int maxW[g];
    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 35; j++)
        {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i < g; i++)
    {
        cin >> maxW[i];
        // cout << maxW[i] << "-" << endl;

        ans += knapsack(0, maxW[i], price, weight);
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}