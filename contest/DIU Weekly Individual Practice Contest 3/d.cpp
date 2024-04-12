#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int ps[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        ps[i + 1] = ps[i] + arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] * (sum - ps[i + 1]);
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
