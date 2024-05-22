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
    vector<char> vt;
    for (auto item : mp)
    {
        vt.push_back(item.first);
    }
    vector<char> oldV = vt;
    reverse(vt.begin(), vt.end());

    map<char, char> nMp;
    for (int i = 0; i < vt.size(); i++)
    {
        nMp[oldV[i]] = vt[i];
    }
    for (auto item : s)
    {
        cout << nMp[item];
    }
    cout << endl;
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