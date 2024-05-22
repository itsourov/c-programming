#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int k, n, a, b;
bool isPossible(int mid)
{
    int charge = k;
    charge -= (mid * a);
    if (mid < n)
    {
        charge -= (b * (n - mid));
    }
    return charge > 0;
}
void solve()
{

    cin >> k >> n >> a >> b;
    int l = 0, r = 1;
    while (isPossible(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid))
        {
            l = mid + 1;
        }
        else
        {

            r = mid - 1;
        }
    }
    cout << min(r, n) << endl;
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
