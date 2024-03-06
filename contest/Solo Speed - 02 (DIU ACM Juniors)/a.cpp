#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (!found && arr[i] - arr[i - 1] <= x)
            {
                cout << arr[i] << endl;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
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