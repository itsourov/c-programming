#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ps[n + 1];
    ps[0] = 0;
    int ans = 0;
    map<int, int> mp;
    mp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ps[i + 1] = (ps[i] + arr[i]) % 7;
        if (mp.find(ps[i + 1]) != mp.end())
        {
            ans = max(ans, (i + 1 - mp[ps[i + 1]]));
            // cout << i + 1 << " " << mp[ps[i + 1]] << endl;
        }
        else
        {
            mp[ps[i + 1]] = i + 1;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}
