#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    string s;
    cin >> s;

    int whiteCount = 0;
    int ans = 0;
    for (int i = s.size(); i >= 0; i--)
    {
        if (s[i] == 'W')
        {
            whiteCount++;
        }
        else
        {
            ans += whiteCount;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}