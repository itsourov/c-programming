#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n;
    cin >> n;
    map<char, int> mp;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0)
            mp['L']++;
        if (x > 0)
            mp['R']++;
        if (y < 0)
            mp['D']++;
        if (y > 0)
            mp['U']++;
    }
    if (mp.size() == 4)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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