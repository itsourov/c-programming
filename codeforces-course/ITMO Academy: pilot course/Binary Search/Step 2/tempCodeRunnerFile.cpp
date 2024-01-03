#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

int n, x, y;

bool good(int m)
{
    if (m <= min(x, y))
        return false;
    m -= min(x, y);
    int sum = 1;
    sum += m / x;
    sum += m / y;

    return sum >= n;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x >> y;

    int l = 0;
    int r = max(x, y) * n;

    while (l + 1 < r)
    {

        int m = l + (r - l) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;
}