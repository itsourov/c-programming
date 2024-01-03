#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, m, l, r;
    cin >> a >> m >> l >> r;
    int ans = (r - l) / m;

    if (l % m == 0)
        ans++;
    else if (r % m == 0)
        ans++;
    cout << ans << endl;
}