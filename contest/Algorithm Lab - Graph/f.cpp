#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    while (cin >> n >> m)
    {
        int x;
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            mp[x].push_back(i);
        }
        int a, b;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            // cout << a << " " << b << endl;
            if (mp[b].size() < a)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << mp[b][a - 1] << endl;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
