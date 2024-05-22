#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int r, x1, y1, x2, y2;

    cin >> r >> x1 >> y1 >> x2 >> y2;

    double dis = sqrt(pow(y2 - y1, 2.0) + pow(x2 - x1, 2.0));

    cout << ceil(dis / (r * 2)) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}