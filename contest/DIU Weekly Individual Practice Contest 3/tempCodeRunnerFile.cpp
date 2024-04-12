#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if ((sum % 2 == 0 && a == b) || (sum % 2 == 1 && abs(a - b) == 1))
    {
        cout << "Ok" << endl;
    }
    else
    {
        int x = sum / 2;
        int y = sum - x;
        cout << x << " " << y << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
    return 0;
}
