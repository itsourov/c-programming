#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;
    int suma = 0, sumb = 0;
    int ans = 0;
    while (l <= r)
    {

        if (suma < sumb)
        {
            suma += arr[l++];
        }
        else
        {
            sumb += arr[r--];
        }
        if (suma == sumb)
        {
            ans = l + (n - r - 1);
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}