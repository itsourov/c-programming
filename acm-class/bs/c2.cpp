#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int n, x, y;
int good(int mid)
{
    if (mid < min(x, y))
        return false;
    int cnt = 1;
    mid -= min(x, y);
    cnt += (mid / x) + (mid / y);

    return cnt >= n;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x >> y;

    int l = 0, r = 1;
    while (!good(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2.0;
        if (good(mid))
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