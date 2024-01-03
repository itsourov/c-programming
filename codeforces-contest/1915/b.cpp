#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int tt = 3;
        while (tt--)
        {
            string s;
            cin >> s;
            map<char, int> mp;
            for (auto c : s)
            {
                mp[c]++;
            }
            if (mp['A'] == 0)
            {
                cout << 'A' << endl;
            }
            else if (mp['B'] == 0)
            {
                cout << 'B' << endl;
            }
            else if (mp['C'] == 0)
            {
                cout << 'C' << endl;
            }
        }
    }
}