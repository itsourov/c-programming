#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int has = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (has + arr[i] <= k)
        {
            has += arr[i];
        }
        else
        {
            ans++;
            has = 0;
            if (arr[i] < k)
            {
                has = arr[i];
            }
            else
            {
                ans++;
            }
        }
    }
    if (has)
        ans++;
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
