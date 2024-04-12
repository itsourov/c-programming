
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int a, b;
    cin >> a >> b;
    int ans = abs(b - a) * 4;
    ans += 9;
    ans += 10;
    ans += a * 4;
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}