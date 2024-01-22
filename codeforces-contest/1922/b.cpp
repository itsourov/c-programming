#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }

    int a = 0, b = 1, c = 2;
    int bad = 0;
    while (c < n)
    {
        if (arr[b] + arr[c] <= arr[a])
        {
            bad++;
        }
    }

    cout << nCr(n, 3) << endl;
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