#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isDivGood(int n)
{
    int i = 2;
    while (1)
    {
        if (n % (i * i) == 0)
        {
            return false;
        }
        if (i * i > n)
        {
            return true;
        }
        i++;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int divisor = n / i;
            if (isDivGood(divisor))
            {
                cout << divisor << endl;
                return;
            }
            else
            {
                // cout << divisor << " not good" << endl;
            }
        }
    }
    cout << 1 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}