#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, s;
    cin >> n >> s;

    vector<pair<int, int>> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].first >> vt[i].second;
    }
    sort(vt.begin(), vt.end());
    int totalpenalty = 0;
    for (int i = 0; i < n; ++i)
    {
        s += vt[i].first;
        totalpenalty += max(0LL, s - vt[i].second);
    }
    cout << totalpenalty << endl;
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
