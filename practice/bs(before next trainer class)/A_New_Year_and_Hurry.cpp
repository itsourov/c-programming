#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k;
bool isPossible(int mid)
{
    int time = 5 * (mid * (mid + 1) / 2);
    return time + k <= 240;
}
void solve()
{

    cin >> n >> k;

    int l = 0, r = n;
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
    cout << r << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}