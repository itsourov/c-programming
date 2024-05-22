#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int x, y;
    cin >> x >> y;
    int screenNeeded = y / 2;
    if (y % 2 == 1)
    {
        screenNeeded++;
    }
    int totalCell = screenNeeded * 15;
    int rem = totalCell - (y * 4);

    if (x <= rem)
    {
        cout << screenNeeded << endl;
    }
    else
    {
        x -= rem;
        screenNeeded += (x / 15);
        if (x % 15 != 0)
            screenNeeded++;
        cout << screenNeeded << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}