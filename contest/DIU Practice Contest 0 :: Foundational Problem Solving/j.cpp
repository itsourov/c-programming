#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    int prod = n * m;

    if (n == 1 || m == 1)
    {
        int mx = max(m, n);
        int ans = (mx / 2.0) + 1;
        cout << ans << endl;
        return;
    }
    if (n % 2 == 0 && m % 2 == 0)
    {
        int ans = n / 2;
        ans += m / 2;
        cout << ans << endl;
        return;
    }
    else
    {
        int ans = n / 2;
        ans += m / 2;
        cout << ans + 1 << endl;
        return;
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