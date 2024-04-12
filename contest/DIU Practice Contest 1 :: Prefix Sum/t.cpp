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
    int l, r;
    map<int, int> mp;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        l--;
        r--;
        mp[l]++;
        mp[r + 1]--;
    }
    vector<int> vt;
    int effect = 0;
    for (int i = 0; i < n; i++)
    {
        effect += mp[i];
        vt.push_back(effect);
    }
    sort(vt.begin(), vt.end());
    sort(arr, arr + n);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] * vt[i];
    }
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