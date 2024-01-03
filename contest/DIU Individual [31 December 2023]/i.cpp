#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> mp1;
        map<char, int> mp2;

        for (auto c : s1)
            mp1[c]++;

        for (auto c : s2)
            mp2[c]++;

        int count = 0;
        for (auto item : mp1)
        {
            count += min(item.second, mp2[item.first]);
        }
        cout << count << endl;
    }
}