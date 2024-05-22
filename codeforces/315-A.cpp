#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] != b[i])
            mp[b[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]])
        {
            ans++;
            mp[a[i]] = 0;
        }
    }
    cout << n - ans << endl;
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
}