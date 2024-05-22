#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int oneToN(int n)
{
    return n * (n + 1) / 2;
}
bool isPossible(int mid)
{

    int totalKilled = 0;
    if (mid % 2 == 0)
    {
        totalKilled += oneToN(mid / 2);
        totalKilled += oneToN(mid / 2);
    }
    else
    {
        totalKilled += oneToN(mid / 2);
        totalKilled += oneToN((mid / 2) + 1);
    }
    return totalKilled >= n;
}
void solve()
{
    cin >> n;
    int l = 0;
    int r = 1;
    while (!isPossible(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid))
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
