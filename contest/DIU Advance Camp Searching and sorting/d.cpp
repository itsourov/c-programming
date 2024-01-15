#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
bool good(int mid, int n, int k)
{
    return mid - (mid / n) >= k;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 0, r = 10e16;
    while (l + 1 < r)
    {
        int mid = (l + r) / 2;
        if (good(mid, n, k))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << endl;
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