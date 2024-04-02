#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ps1[n + 1] = {0}, ps2[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ps1[i + 1] = ps1[i] + arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        ps2[i + 1] = ps2[i] + arr[i];
    }

    int m;
    cin >> m;
    int a, l, r;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> l >> r;
        if (a == 1)
        {
            cout << ps1[r] - ps1[l - 1] << endl;
        }
        else
        {
            cout << ps2[r] - ps2[l - 1] << endl;
        }
    }
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
