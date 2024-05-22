#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    map<int, int> mp;
    for (auto item : s)
    {
        mp[item]++;
    }
    if (mp.size() >= 2)
    {
        cout << "YES" << endl;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                swap(s[i], s[i - 1]);
                break;
                ;
            }
        }
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
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
