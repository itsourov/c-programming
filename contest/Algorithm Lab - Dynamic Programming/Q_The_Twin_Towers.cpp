#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int dp[110][110];
vector<int> v1, v2;
int rec(int idx1, int idx2)
{
    if (idx1 >= v1.size())
        return 0;
    if (idx2 >= v2.size())
        return 0;

    if (dp[idx1][idx2] != -1)
    {
        return dp[idx1][idx2];
    }
    int ans = 0;
    if (v1[idx1] == v2[idx2])
    {
        ans = rec(idx1 + 1, idx2 + 1) + 1;
    }
    else
    {
        ans = max(rec(idx1 + 1, idx2), rec(idx1, idx2 + 1));
    }

    return dp[idx1][idx2] = ans;
}
void solve()
{
    int n1, n2;
    int tc = 1;
    while (cin >> n1 >> n2)
    {
        if (n1 == 0 && n2 == 0)
        {
            break;
        }
        v1.clear();
        v2.clear();

        int x;
        for (int i = 0; i < n1; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> x;
            v2.push_back(x);
        }
        for (int i = 0; i < 110; i++)
        {
            for (int j = 0; j < 110; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << "Twin Towers #" << tc++ << endl;
        cout << "Number of Tiles : ";
        cout << rec(0, 0) << endl;
        cout << endl;
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