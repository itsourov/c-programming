#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int ans = 1;
    int i = 1;
    while ((ans << i) <= n)
    {

        // cout << (ans << i) << endl;
        i++;
    }
    i--;
    ans = 1LL << i;

    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}