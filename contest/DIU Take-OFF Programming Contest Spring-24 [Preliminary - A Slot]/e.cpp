#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p;
    cin >> n >> p;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0)
        {
            p -= (arr[i] - arr[i - 1]);
        }
        if (p < 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
