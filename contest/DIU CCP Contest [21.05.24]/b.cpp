#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < y; i++)
    {
        int way1 = x * 2;
        int way2 = x + 1000;
        x = max(way1, way2);
    }
    cout << x << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}