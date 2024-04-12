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
    int pre[n + 1];

    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {

        pre[i] = __gcd(pre[i - 1], arr[i]);
    }
    int suf[n + 1];
    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = __gcd(suf[i + 1], arr[i]);
    }
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans = max(__gcd(pre[i - 1], suf[i + 1]), ans);
    }
    ans = max(ans, max(suf[1], pre[n - 2]));
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}