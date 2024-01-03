#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, m, l, r;
    cin >> a >> m >> l >> r;
    int start = ceil((double)l / m) * m;
    int end = floor((double)r / m) * m;
    int ans = (end - start) / m;
    ans++;
    cout << ans << endl;
}