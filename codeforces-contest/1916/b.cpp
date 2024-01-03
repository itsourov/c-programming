#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

void solve()
{
    int a, b;
    cin >> a >> b;
    int lcmX = (a * b) / __gcd(a, b);
    if (lcmX > b)
    {
        cout << lcmX << endl;
    }
    else
    {
        cout << lcmX * (b / a) << endl;
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