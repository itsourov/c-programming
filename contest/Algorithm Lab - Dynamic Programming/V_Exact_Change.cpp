
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int rec(int idx, int money, vector<int> &coins)
{

    if (money <= 0)
        return 0;
    if (idx >= coins.size())
    {
        return INT_MAX;
    }
    int kotoBarAiCoin = 0;
    int minWay = INT_MAX;
    while ((money - (kotoBarAiCoin * coins[idx])) >= 0)
    {
        minWay = min(minWay, rec(idx + 1, money - (kotoBarAiCoin * coins[idx]), coins) + kotoBarAiCoin);

        kotoBarAiCoin++;
    }
    return minWay;
}

void solve()
{

    int price;
    cin >> price;
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << rec(0, price, coins) << endl;
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
