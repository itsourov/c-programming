#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, lower_sum = 0, upper_sum = 0;
    cin >> n;
    bool s(false);
    for (int x, y; cin >> x >> y;)
    {
        if (n == 1 and x % 2 + y % 2 == 1)
        {
            cout << -1;
            return 0;
        }
        if (y % 2 + x % 2 == 1)
            s = true;
        lower_sum += x;
        upper_sum += y;
    }
    if (lower_sum % 2 == 0 and upper_sum % 2 == 0)
        cout << 0 << endl;
    else if (lower_sum % 2 == 1 and upper_sum % 2 == 1 and s)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}