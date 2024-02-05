#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
        mp[c]++;
    vector<pair<int, char>> vt;
    for (auto item : mp)
        vt.push_back({-1 * item.second, item.first});
    sort(vt.begin(), vt.end());
    cout << vt[0].second << endl;
}