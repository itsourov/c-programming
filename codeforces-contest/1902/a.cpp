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
    {
        mp[c]++;
    }

    int l = s.size();
    if (mp['0'] > mp['1'])
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < l; i++)
    {
        if (s[i] != s[i - 1])
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}