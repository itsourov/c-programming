#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int ans[n];
    int mexFromLast = n;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = (mexFromLast - arr[i]);
        mexFromLast = min(ans[i], mexFromLast);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
