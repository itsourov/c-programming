#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = b / 2;
    ans *= a;
    int ans2 = a / 2;
    ans2 *= b;
    cout << max(ans, ans2) << endl;
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