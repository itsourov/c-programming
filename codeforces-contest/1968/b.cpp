#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;

    string s1, s2;
    cin >> s1 >> s2;
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m)
        {
            if (s1[i] == s2[j])
            {
                ans++;
                i++;
            }
            j++;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}