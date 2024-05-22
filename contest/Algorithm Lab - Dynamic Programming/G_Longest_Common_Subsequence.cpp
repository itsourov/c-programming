#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
string s1, s2;
int dp[1010][1010];
int rec(int idx1, int idx2)
{
    if (idx1 >= s1.size())
        return 0;
    if (idx2 >= s2.size())
        return 0;

    if (dp[idx1][idx2] != -1)
    {
        return dp[idx1][idx2];
    }
    int ans = 0;
    if (s1[idx1] == s2[idx2])
    {
        ans = rec(idx1 + 1, idx2 + 1) + 1;
    }
    else
    {
        ans = max(ans, rec(idx1 + 1, idx2));
        ans = max(ans, rec(idx1, idx2 + 1));
    }

    return dp[idx1][idx2] = ans;
}
void solve()
{

    while (getline(cin, s1) && getline(cin, s2))
    {

        if (s1.empty() && s2.empty())
        {
            return;
        }

        for (int i = 0; i <= s1.size(); i++)
        {
            for (int j = 0; j <= s2.size(); j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << rec(0, 0) << endl;
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