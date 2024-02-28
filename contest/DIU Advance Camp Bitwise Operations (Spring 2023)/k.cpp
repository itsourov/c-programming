#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans *= n;
        ans %= mod;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}