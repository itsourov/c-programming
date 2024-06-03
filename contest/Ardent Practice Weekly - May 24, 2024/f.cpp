#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 2; i < s.size(); i += 3)
    {
        string temp;
        temp.push_back(s[i - 2]);
        temp.push_back(s[i - 1]);
        temp.push_back(s[i]);
        mp[temp]++;
    }
    for (auto item : mp)
    {
        if (item.second >= 2)
        {
            cout << "GRESKA" << endl;
            return;
        }
    }

    string type = "PKHT";
    for (int j = 0; j < type.size(); j++)
    {
        int count = 0;
        for (int i = 1; i <= 13; i++)
        {
            string temp;
            temp.push_back(type[j]);

            temp.push_back(i / 10 + '0');
            temp.push_back(i % 10 + '0');
            // cout << temp << endl;
            if (mp[temp] == 0)
            {
                count++;
            }
        }
        cout << count << " ";
    }
}

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}