#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = a * 2;

    int maxAns = ans;
    bool hasExtra = false;
    while (1)
    {
        int tx = b, ty = c;

        while (c && b && hasExtra)
        {
            b--;
            ans += 2;
        }

        if (c)
        {
            if (hasExtra)
            {
                c--;
                ans += 2;
                hasExtra = false;
                maxAns = max(ans, maxAns);
            }
            else
            {
                c--;
                ans += 1;
                hasExtra = true;
            }
        }
        while (c && b && hasExtra)
        {
            b--;
            ans += 2;
        }

        if (tx == b && ty == c)
        {

            break;
        }
    }

    cout << maxAns << endl;
}
signed main()
{

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}