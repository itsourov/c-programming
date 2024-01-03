#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }

    sort(arr, arr + n, greater<int>());
    sort(arr, arr + k + 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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