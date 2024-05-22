#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> mp;
    for (auto c : s3)
        mp[c]++;

    for (auto c : s1)
    {
        mp[c]--;
    }
    for (auto c : s2)
    {
        mp[c]--;
    }

    for (auto item : mp)
    {
        if (item.second != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}
