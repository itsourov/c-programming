#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > (n * n))
    {
        cout << "NO" << endl;
        return;
    }
    if (k % 4 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (n % 2 == 1)
    {
        k--;
    }

    if (k % 4 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}