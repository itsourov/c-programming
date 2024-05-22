#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> vt;
    for (auto item : mp)
    {
        vt.push_back({item.second * (-1), item.first});
    }

    int ans = 0;
    for (auto item : vt)
    {
        x = item.first * (-1);
        ans += (x / 3.0);
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}