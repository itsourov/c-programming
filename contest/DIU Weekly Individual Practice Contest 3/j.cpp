#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, char>> vt(m);
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].first >> vt[i].second;
    }
    sort(vt.begin(), vt.end());
    for (int i = 0; i < m; i++)
    {
        if (vt[i].second == 'M')
        {
            cout << "No" << endl;
            return;
        }
        if (i > 0)
            if (vt[i].second != vt[i - 1].second && abs(vt[i].first - vt[i - 1].first) < 4)
            {
                cout << "No" << endl;
                return;
            }
    }
    cout << "Yes" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
