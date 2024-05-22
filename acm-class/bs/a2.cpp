#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int w, h, n;

bool good(int x)
{
    return (x / w) * (x / h) >= n;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> w >> h >> n;

    int l = 0;
    int r = 1;
    while (!good(r))
    {
        r = r << 1;
    }

    while (l <= r)
    {
        int mid = (l + r) / 2;
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