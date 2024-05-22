#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    while (cin >> n && n)
    {
        int x, y, a, b;
        cin >> x >> y;
        while (n--)
        {
            cin >> a >> b;
            if (a == x || b == y)
                cout << "divisa" << endl;
            else if (a > x && b > y)
                cout << "NE" << endl;
            else if (a < x && b > y)
                cout << "NO" << endl;
            else if (a < x && b < y)
                cout << "SO" << endl;
            else
                cout << "SE" << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}