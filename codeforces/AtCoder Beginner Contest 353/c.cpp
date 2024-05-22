#include <bits/stdc++.h>
using namespace std;
#define int long long

int binMultiply(int a, int b, int mod)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int mod = 1e9;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += binMultiply(x, n - 1, mod);
    }
    cout << sum << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
