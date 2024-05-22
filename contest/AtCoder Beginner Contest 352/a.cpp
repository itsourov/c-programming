#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if (x > y)
        swap(x, y);
    if (z > x && z < y)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}