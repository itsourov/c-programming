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
    sort(arr, arr + n, greater<int>());

    vector<int> psum(n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            psum[i] = arr[i] + psum[i - 1];
        else
            psum[i] = arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int lb = lower_bound(psum.begin(), psum.end(), x) - psum.begin();

        lb++;
        if (lb > n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << lb << endl;
        }
    }
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