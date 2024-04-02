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
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += max(0LL, max(arr[i], arr[i + 1]));
    }
    cout << sum << endl;
}
signed main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}