#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }

    map<int, int> mp2;
    for (auto item : mp)
    {
        mp2[item.second]++;
    }
    for (auto item : mp2)
    {
        if (item.second != 0 && item.second != 2)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}