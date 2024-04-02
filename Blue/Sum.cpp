#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    int ans;

    if (n > 0)
        ans = n * (n + 1) / 2;
    else
        ans = 1 + n * (1 - n) / 2;
    cout << ans << endl;
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