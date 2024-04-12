#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    map<int, int> mp;
    mp[0] = 1;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        ans += mp[sum - x];
        mp[sum]++;
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