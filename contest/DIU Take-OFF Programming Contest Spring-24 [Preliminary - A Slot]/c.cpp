#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n < 5)
    {
        cout << 0 << endl;
    }
    else if (n < 15)
    {
        cout << 1 << endl;
    }
    else if (n < 30)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
