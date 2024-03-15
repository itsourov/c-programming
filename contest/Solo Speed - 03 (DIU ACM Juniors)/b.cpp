#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int dif1 = arr[1] - arr[0];
    int dif2 = arr[2] - arr[1];

    if (dif1 == dif2)
    {

        cout << arr[2] + dif1 << endl;
    }
    else if (dif1 > dif2)
    {
        cout << arr[0] + dif2 << endl;
    }
    else
    {
        cout << arr[1] + dif1 << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}