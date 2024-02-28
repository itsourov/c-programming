#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool good(int n, int k, int mid)
{
    return mid - (mid / n) >= k;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 0;
    int r = INT_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (good(n, k, mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
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