#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int temp;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    int ans = 0;

    ans += mp[4];
    ans += mp[3];
    mp[1] -= min(mp[1], mp[3]);

    ans += mp[2] / 2;
    if (mp[2] % 2 != 0)
    {
        ans++;
        mp[1] -= 2;
    }
    if (mp[1] > 0)
    {
        ans += mp[1] / 4;

        if (mp[1] % 4 != 0)
        {
            ans++;
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