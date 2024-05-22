#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int sum1 = 0;
    int x;
    for (int i = 0; i < 9; i++)
    {
        cin >> x;
        sum1 += x;
    }

    int sum2 = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> x;
        sum2 += x;
    }
    cout << sum1 - sum2 + 1 << endl;
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
    return 0;
}