#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int a, b, c;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = 6;
        ans -= a;
        ans -= b;
        cout << ans << endl;
    }
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
}