#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int temp = (n * y) / 100.0;
    if ((n * y) % 100 != 0)
    {
        temp++;
    }
    cout << max(0LL, temp - x) << endl;
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