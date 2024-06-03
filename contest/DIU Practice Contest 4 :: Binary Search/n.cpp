#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool isGood(int x, int y, int p, int q, int s)
{
    return p * s >= x && (q * s - p * s) >= (y - x);
}
void solve()
{
    int x, y, p, q;
    // if ((double)x / y <= (double)p / q)
    // {

    // }
    int l = 0;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
