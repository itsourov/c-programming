#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int k, q;
    cin >> k >> q;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    int n[q];
    sort(arr, arr + k);
    int minel = arr[0] - 1;
    for (int i = 0; i < q; ++i)
    {
        cin >> n[i];
        cout << max(0LL, min(minel, n[i])) << " ";
    }
    cout << endl;
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