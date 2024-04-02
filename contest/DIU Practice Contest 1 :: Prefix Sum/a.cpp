#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    int ps[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            ps[i] = arr[i];
        }
        else
        {
            ps[i] = ps[i - 1] + arr[i];
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ps[r - 1] - ps[l - 1] + arr[l - 1] << endl;
    }
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