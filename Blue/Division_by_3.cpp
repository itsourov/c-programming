
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int a, b;
    cin >> a >> b;
    a--;
    if (a % 3 == 0)
    {
        a -= (a / 3);
    }
    else
    {
        a -= (a / 3) + 1;
    }

    if (b % 3 == 0)
    {
        b -= (b / 3);
    }
    else
    {
        b -= (b / 3) + 1;
    }

    cout << b - a << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}