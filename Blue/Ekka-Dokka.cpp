
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int w;
    cin >> w;
    if (w % 2 == 0)
    {
        int b = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            b *= 2;
        }
        cout << w << " " << b << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
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
        cout << "Case " << tc << ":" << endl;
        solve();
        tc++;
    }
}