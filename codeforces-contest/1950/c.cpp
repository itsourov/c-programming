#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int h, m;
    scanf("%lld:%lld", &h, &m);

    if (h >= 12)
    {
        if (h > 12)
            h -= 12;
        printf("%02lld:%02lld PM\n", h, m);
    }
    else
    {
        if (h == 0)
            h += 12;
        printf("%02lld:%02lld AM\n", h, m);
    }
}
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int t;
    t = 1;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }
}