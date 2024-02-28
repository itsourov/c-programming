#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    char dif = 'a';
    for (auto item : mp)
    {
        if (item.second == 1)
        {
            dif = item.first;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == dif)
        {
            cout << i + 1 << endl;
        }
    }
}