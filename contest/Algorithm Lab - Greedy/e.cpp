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
    for (auto item : s)
    {
        mp[item]++;
    }
    for (char i = 'a'; i < 'z'; i++)
    {
        if (mp[i] >= 2)
        {
            mp[i + 1] += mp[i] / 2;
            mp[i] = mp[i] % 2;
        }
    }
    for (char i = 'z'; i >= 'a'; i--)
    {
        if (mp[i])
        {
            for (int j = 0; j < mp[i]; j++)
            {
                cout << i;
            }
        }
    }
    cout << endl;
}