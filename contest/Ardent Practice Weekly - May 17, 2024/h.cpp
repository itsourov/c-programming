#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s;
        mp[s]--;
    }
    for (auto item : mp)
    {
        if (item.second)
            cout << item.first << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
