#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == m)
    {
        cout << 0 << endl;
        return;
    }
    if (n > m)
    {

        cout << abs(n - m) << endl;
    }
    else
    {
        int count = 0;
        while (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m++;
            }
            count++;
        }
        cout << count + abs(m - n) << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}