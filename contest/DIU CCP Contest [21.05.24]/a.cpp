#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x + x + y + y >= 1000)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}