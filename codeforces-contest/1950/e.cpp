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
    if (s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    map<char, int> mp;
    for (auto item : s)
    {
        ++mp[item];
    }
    vector<pair<int, char>> vt;
    for (auto item : mp)
    {
        vt.push_back({item.second, item.first});
    }
    sort(vt.begin(), vt.end());

    if (vt[0].first == 1 && vt.size() == 2)
    {
        cout << 1 << endl;
        return;
    }
    int segment;
    if (vt[0].first == 1)
    {
        segment = n / (vt[1].first);
    }
    else
    {
        segment = n / vt[0].first;
    }

    int diffCount = 0;
    map<int, int> cnt;
    for (int i = 0; i < n && i + segment < n; i++)
    {
        if (s[i] != s[i + segment])
        {
            diffCount++;
            cnt[i]++;
            cnt[i + segment]++;
        }
    }
    if (diffCount <= 1)
    {
        cout << segment << endl;
        return;
    }
    else if (diffCount == 2 && mp.size() == 3)
    {
        cout << segment << endl;
        return;
    }

    segment = n / (vt[1].first + 1);

    diffCount = 0;
    map<int, int> cnt2;
    for (int i = 0; i < n && i + segment < n; i++)
    {
        if (s[i] != s[i + segment])
        {
            diffCount++;
            cnt2[i]++;
            cnt2[i + segment]++;
        }
    }
    if (diffCount <= 1)
    {
        cout << segment << endl;
        return;
    }
    else if (diffCount == 2 && mp.size() == 3)
    {
        cout << segment << endl;
        return;
    }
    cout << n << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}