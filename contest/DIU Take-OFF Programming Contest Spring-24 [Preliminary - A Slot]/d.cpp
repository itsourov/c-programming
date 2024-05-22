#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int t, w;
    cin >> t >> w;
    if (t > 2000 || (t > 0 && t <= 2000 && w > 100))
    {
        cout << "Bandor, these bananas are tasty enough." << endl;
    }
    else
    {
        cout << "No Bandor, bananas are not tasty enough." << endl;
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
