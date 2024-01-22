#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    bool good = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == c[i] || b[i] == c[i])
        {
            // good = true;
            // cout << c[i] << i << endl;
        }
        else
        {
            good = true;
        }
    }

    if (good)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}