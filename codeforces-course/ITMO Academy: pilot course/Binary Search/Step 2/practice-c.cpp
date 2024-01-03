#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

bool good(int m, int n, int x, int y)
{

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

    int n, x, y;
    cin >> n >> x >> y;

    int l = 0;
    int r = max(x, y) * n;
    r += 2;

    while (l + 1 < r)
    {

        int m = l + (r - l) / 2;
        if (good(m, n, x, y))
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