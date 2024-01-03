#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
        mp[c]++;
    int count = 0;
    for (auto item : mp)
    {
        if (item.second >= (item.first - 'A' + 1))
            count++;
    }

    cout << count << endl;
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