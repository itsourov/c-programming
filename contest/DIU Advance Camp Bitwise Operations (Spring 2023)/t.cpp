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
    int sum = (1LL << 31) - 1;
    // cout << sum << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum &= arr[i];
        if (sum == 0)
        {
            count++;
            sum = (1LL << 32) - 1;
        }
    }

    cout << max(count, 1LL) << endl;
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