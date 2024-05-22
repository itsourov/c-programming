#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0, ct = 0;
    for (int b = 1; b <= m; b++)
    {
        for (int a = b; a <= n; a += b)
        {
            if ((a / b + 1) % gcd(a, b) == 0)
            {

                ans++;
            }
        }
    }
    cout << ans << "\n";
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