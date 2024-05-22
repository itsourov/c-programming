#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        int pos = lower_bound(arr, arr + n, x) - arr;

        if (pos >= 0 && pos < n && arr[pos] == x)
            cout << pos << endl;
        else
            cout << -1 << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}