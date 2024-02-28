#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int pens = (a + c - 1) / c;
    int pencils = (b + d - 1) / d;
    int total = pens + pencils;

    if (total > k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << pens << " " << pencils << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}