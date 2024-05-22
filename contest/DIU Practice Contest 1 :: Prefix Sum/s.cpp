#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n], pf[n + 1];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        pf[i + 1] = pf[i] + arr[i];
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        int x = pf[r] - pf[l - 1];
        if (x >= 0)
            ans += x;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}