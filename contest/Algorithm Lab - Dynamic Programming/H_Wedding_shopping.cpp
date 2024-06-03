#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int money, typeOfGarmetns;
int dp[30][300];
int rec(int idx, int taka, vector<vector<int>> &mainVt)
{
    if (taka < 0)
        return INT_MIN;
    if (idx == typeOfGarmetns)
        return money - taka;

    if (dp[idx][taka] != -1)
        return dp[idx][taka];

    int mxKhoroc = INT_MIN;
    for (auto item : mainVt[idx])
    {
        mxKhoroc = max(mxKhoroc, rec(idx + 1, taka - item, mainVt));
    }
    return dp[idx][taka] = mxKhoroc;
}
void solve()
{

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 300; j++)
        {
            dp[i][j] = -1;
        }
    }

    cin >> money >> typeOfGarmetns;

    vector<vector<int>> mainVt;
    for (int i = 0; i < typeOfGarmetns; i++)
    {
        int n;
        cin >> n;
        vector<int> tvt(n);
        for (int i = 0; i < n; i++)
        {

            cin >> tvt[i];
        }
        mainVt.push_back(tvt);
    }
    int ans = rec(0, money, mainVt);
    if (ans == INT_MIN)
        cout << "no solution" << endl;
    else
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