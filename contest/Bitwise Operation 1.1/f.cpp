#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int l, r;
    cin >> l >> r;
    int i = 0;
    while ((1LL << i) - 1 <= r)
    {
        i++;
    }
    i--;
    int ans = (1LL << i) - 1;
    if (ans >= l && ans <= r)
    {
        cout << ans << endl;
    }
    else
    {
        ans = 0;
        int maxCount = 0;
        for (int i = l; i <= r; i++)
        {
            int count = __builtin_popcount(i);
            if (count > maxCount)
            {
                ans = i;
                maxCount = count;
            }
        }
        cout << ans << endl;
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