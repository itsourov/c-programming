#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int needed = sum / n;
    int extra = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > needed)
        {
            extra += arr[i] - needed;
        }
        else
        {
            extra -= needed - arr[i];
        }
        if (extra < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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