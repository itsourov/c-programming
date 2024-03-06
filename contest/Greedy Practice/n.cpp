#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
    int way1 = min(abs(x), abs(y)) * b;
    way1 += (max(abs(x), abs(y)) - min(abs(x), abs(y))) * a;

    int way2 = (abs(x) + abs(y)) * a;
    cout << min(way1, way2) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}