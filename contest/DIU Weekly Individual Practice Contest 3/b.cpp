#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int d1 = (x1 * x1) + (y1 * y1);
    int d2 = (x2 * x2) + (y2 * y2);

    if (d1 == d2)
    {
        cout << "Empate" << endl;
    }
    else if (d1 < d2)
    {
        cout << "Russo" << endl;
    }
    else
    {
        cout << "Wil" << endl;
    }
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
