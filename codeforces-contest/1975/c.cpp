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
    if (n == 1)
    {

        cout << arr[0] << endl;
        return;
    }

    auto maxEl = max_element(arr, arr + n) - arr;
    int l = INT_MIN;
    if (maxEl - 1 >= 0)
    {
        l = arr[maxEl - 1];
    }

    int r = INT_MIN;
    if (maxEl + 1 < n)
    {
        r = arr[maxEl + 1];
    }
    cout << max(l, r) << endl;
}

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}