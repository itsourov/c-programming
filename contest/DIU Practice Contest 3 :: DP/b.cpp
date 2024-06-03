#include <bits/stdc++.h>
using namespace std;
#define int long long

string s1, s2;
int price[26];
int dp[2020][2020];
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
        ans = rec(idx1 + 1, idx2 + 1) + price[s1[idx1] - 'a'];
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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 26; i++)
    {
        cin >> price[i];
    }
    cin >> s1 >> s2;

    for (int i = 0; i <= s1.size(); i++)
    {
        for (int j = 0; j <= s2.size(); j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << rec(0, 0) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}