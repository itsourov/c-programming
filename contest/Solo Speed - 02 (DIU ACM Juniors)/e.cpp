#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        total *= max(arr[i] - bad, 0LL);
        total %= mod;
        bad++;
    }

    cout << total << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}