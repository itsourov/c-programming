#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n;
int dp[200][200];
int rec(int i, int j, vector<vector<int>> &mainvt)
{
    if (i >= mainvt.size())
        return 0;
    if (j >= mainvt[i].size())
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];
    int w1 = rec(i + 1, j, mainvt);
    int w2;
    if (i >= n - 1)
        w2 = rec(i + 1, j - 1, mainvt);
    else
        w2 = rec(i + 1, j + 1, mainvt);

    return dp[i][j] = max(w1, w2) + mainvt[i][j];
}
void solve()
{
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            dp[i][j] = -1;
        }
    }

    cin >> n;

    vector<vector<int>> mainvt;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j <= i; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        mainvt.push_back(tmp);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        vector<int> tmp;
        for (int j = 0; j <= i; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        mainvt.push_back(tmp);
    }
    cout << rec(0, 0, mainvt) << endl;
    // for (auto item : mainvt)
    // {
    //     for (auto cc : item)
    //         cout << cc << " ";
    //     cout << endl;
    // }
    // cout << endl;
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