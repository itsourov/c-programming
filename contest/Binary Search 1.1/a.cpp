#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int l = 0, r = INT_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if ((int)((mid * (mid + 1)) / 2.0) <= n)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << r << endl;
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