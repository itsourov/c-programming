#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int A, B, C, D;

    A = min(a, b);
    B = max(a, b);

    C = min(c, d);
    D = max(c, d);

    int cnt = 0;
    if (C < B && C > A)
        cnt++;
    if (D < B && D > A)
        cnt++;

    // cout << cnt << endl;
    if (cnt % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }
}
