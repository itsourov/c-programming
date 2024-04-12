
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int l, r;

    while (scanf("%lld %lld", &l, &r) == 2)
    {
        int ans = 0;
        cout << l << " " << r << " ";
        if (l > r)
            swap(l, r);
        for (int i = l; i <= r; i++)
        {
            int j = i;
            int count = 0;
            while (1)
            {
                count++;
                if (j == 1)
                    break;
                if (j % 2 == 0)
                {
                    j = j / 2;
                }

                else
                {
                    j = (3 * j) + 1;
                }
            }
            ans = max(count, ans);
        }

        cout << ans << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        // tc++;
    }
}