#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
                ok = true;
            else if (ok)
                ans++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = m - 1; j >= 0; j--)
        {
            if (arr[i][j] == 1)
                ok = true;
            else if (ok)
                ans++;
        }
    }
    for (int j = 0; j < m; j++)
    {
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 1)
                ok = true;
            else if (ok)
                ans++;
        }
    }
    for (int j = 0; j < m; j++)
    {
        bool ok = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i][j] == 1)
                ok = true;
            else if (ok)
                ans++;
        }
    }
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