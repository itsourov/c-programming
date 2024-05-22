#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int sum;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            int temp = lower_bound(arr, arr + n, sum) - arr - 2 - j;
            ans = max(ans, temp);
        }
    }
    // cout << endl;
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