#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << max(a, b) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    // cin.ignore();
    // cin.ignore();

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
        // if (t)
        //     cout << endl;
    }
}
