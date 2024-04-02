#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        printf("yoink a\nyoink b\n*slaps a on top of b*\nyeet b\ngo touch some grass\n");
    }
    else if (n == 2)
    {
        printf("yoink a\nbruh b is lowkey just 0\nrip this b fell off by a\nvibe check a ratios b\nsimp for 7\nbruh a is lowkey just b\nyeet a\ngo touch some grass\n");
    }
    else if (n == 3)
    {
        printf("yoink n\nyoink a\nbruh m is lowkey just a[0]\nbruh i is lowkey just 1\nvibe check n ratios i\nsimp for 9\nyeet m\ngo touch some grass\nvibe check a[i] ratios m\nbruh m is lowkey just a[i]\n*slaps 1 on top of i*\nsimp for 5\n");
    }
    else if (n == 4)
    {
        printf("\n");
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}
