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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    if (mp.size() == 1)
    {
        cout << -1 << endl;
        return;
    }

    int prev = 0;
    int ans = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
        {
            prev++;
        }
        else
        {
            ans = min(ans, prev);
            prev = 0;
        }
    }
    ans = min(ans, prev);

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