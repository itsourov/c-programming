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
    int maxl = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            maxl++;
        }
        else
        {
            break;
        }
    }
    int maxR = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
        {
            maxR++;
        }
        else
        {
            break;
        }
    }
    int maxSame = 0;
    if (arr[0] == arr[n - 1])
    {
        maxSame = min(maxl + maxR, n);
    }
    else
    {
        maxSame = max(maxl, maxR);
    }

    cout << n - maxSame << endl;
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