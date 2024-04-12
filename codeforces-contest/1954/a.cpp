#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int m, n, k;
    cin >> n >> m >> k;
    int maxSame = n / m;
    int raste;
    if (n % m)
    {
        raste = n % m;
    }
    else
    {
        raste = 0;
    }
    if (raste)
    {
        raste--;
    }

    if ((((m - 1) * maxSame) + raste) > k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}