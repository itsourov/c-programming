
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans1 = n * a;
    int ans2 = (int)(n / 2);
    ans2 *= b;
    if (n % 2 != 0)
    {
        ans2 += a;
    }
    cout << min(ans1, ans2) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}