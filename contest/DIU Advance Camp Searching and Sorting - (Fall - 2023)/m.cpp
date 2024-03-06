#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    // cin >> n;
    scanf("%lld", &n);

    vector<pair<int, int>> vt(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%lld %lld", &x, &y);
        vt[i].first = x;
        vt[i].second = y * (-1);
    }
    sort(vt.begin(), vt.end());
    for (int i = 0; i < n; i++)
    {
        printf("%lld %lld\n", vt[i].first, vt[i].second * (-1));
    }
}
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int t = 1;
    // cin >> t;
    scanf("%lld", &t);

    while (t--)
    {
        solve();
    }
}