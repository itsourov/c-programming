#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mp[arr[i]])
            ans++;
        mp[arr[i]]++;
    }
    cout << ans << endl;
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