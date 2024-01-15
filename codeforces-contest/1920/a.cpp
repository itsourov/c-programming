#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    int x, a;

    int maxSmall = 0, minBig = INT_MAX;
    map<int, int> cantBeThis;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> a;

        if (x == 1)
            maxSmall = max(maxSmall, a);
        else if (x == 2)
            minBig = min(minBig, a);
        else if (x == 3)
        {
            cantBeThis[a]++;
        }
    }
    int count = 0;
    for (auto item : cantBeThis)
    {
        if (item.first >= maxSmall && item.first <= minBig)
            count++;
    }
    int ans = minBig - maxSmall - count + 1;
    if (ans < 0)
        ans = 0;

    cout << ans << endl;
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