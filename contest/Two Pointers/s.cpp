#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum > t)
        {
            sum -= arr[j];
            j++;
        }
        ans = max(i - j + 1, ans);
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}