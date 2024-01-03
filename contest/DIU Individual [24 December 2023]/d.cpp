#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w;
    cin >> h >> w;

    map<string, int> mp;
    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (mp[s])
            mp[s]--;
        else if (mp[temp])
            mp[temp]--;
    }
    for (auto item : mp)
    {
        if (item.second != 0)
        {
            cout << "No" << endl;
            return 0;
        }
        // cout << item.first << " " << item.second << endl;
    }
    cout << "Yes" << endl;
}