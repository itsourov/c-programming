#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].first >> vt[i].second;
        vt[i].second *= (-1);
    }
    sort(vt.begin(), vt.end());
    for (auto item : vt)
    {
        cout << item.first << " " << -1 * item.second << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}