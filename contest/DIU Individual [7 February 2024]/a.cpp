#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int rec(int x, int y)
{
    if (x == y)
    {
        return x + y;
    }
    if (x <= 0)
    {
        return y;
    }
    if (y <= 0)
    {
        return x;
    }
    if (x > y)
    {
        return rec(x - y, y);
    }
    else
    {
        return rec(x, y - x);
    }
}
void solve()
{
    int x, y;
    cin >> x >> y;

    cout << rec(x, y) << endl;
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