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
    map<int, int> mp;
    int l, r, v;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r >> v;
        mp[l - 1] += v;
        mp[r] -= v;
    }
    int effect = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(i) != mp.end())
        {
            effect += mp[i];
        }
        cout << arr[i] + effect << " ";
    }
    cout << endl;
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