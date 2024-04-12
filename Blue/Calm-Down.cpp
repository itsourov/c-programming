
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int q;
    cin >> q;
    int x, y;
    while (q--)
    {
        cin >> x >> y;
        if (x > x1 && x < x2 && y > y1 && y < y2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": " << endl;
        solve();
        tc++;
    }
}