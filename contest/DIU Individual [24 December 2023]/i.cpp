#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;

    int gc = __gcd(n, m);
    cout << (n * m) / (gc * gc) << endl;
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