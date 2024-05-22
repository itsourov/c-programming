#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    int l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int sum = (mid * (mid + 1)) / 2;
        if (sum == n)
        {
            cout << mid << endl;
            return;
        }
        else
        {
            if (sum > n)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    cout << "NAI" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
