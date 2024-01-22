#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{

    int x[4], y[4];
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];

        if (i > 0)
        {
            // cout << x[i] << " " << x[0] << endl;
            a = max(abs(x[i] - x[0]), a);
        }
    }
    cout << a * a << endl;
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