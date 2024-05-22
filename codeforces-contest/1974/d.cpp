#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto item : s)
    {
        mp[item]++;
    }

    if (mp['N'] + mp['S'] % 2 == 0 && mp['E'] + mp['W'] % 2 == 0 && n != 2)
    {
        cout << "path" << endl;
    }
    else if (n == 2 && (s[0] == s[1]))
    {
        cout << "RH" << endl;
    }
    else
    {
        cout << -1 << endl;
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
    return 0;
}