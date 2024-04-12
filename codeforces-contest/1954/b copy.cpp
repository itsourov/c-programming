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
    int prev = arr[0];
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == prev)
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            prev = arr[i];
            temp = 1;
            ans = max(ans, temp);
        }
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