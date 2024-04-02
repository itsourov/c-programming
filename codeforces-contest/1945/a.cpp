#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = a;
    ans += b / 3;
    b = b % 3;
    if (b)
    {
        ans++;
        c -= (3 - b);
    }
    if (c < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ans += c / 3;
        c %= 3;
        if (c)
        {
            ans++;
        }
        cout << ans << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}