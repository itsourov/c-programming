#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a % 2 == 0 && a / 2 != b) || (b % 2 == 0 && b / 2 != a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
