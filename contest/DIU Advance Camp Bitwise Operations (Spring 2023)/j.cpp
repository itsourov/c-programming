#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            x = arr[i];
        }
        else
        {
            x = x ^ arr[i];
        }
    }
    int ans;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] ^ x;
        if (i == 0)
            ans = arr[i];
        else
            ans = ans ^ arr[i];
    }
    if (ans == 0)
        cout << x << endl;
    else
        cout << -1 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}