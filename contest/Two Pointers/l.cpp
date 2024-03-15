#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    int j = 0;
    bool f = false;
    int l = 0, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            mp[s[i]]++;
        while (mp[s[i]] > 1)
        {
            mp[s[j]]--;
            j++;
        }
        if (i - j + 1 == 26)
        {
            f = true;
            l = j;
            r = i;
        }
    }
    if (f)
    {
        map<char, int> nmp;
        for (int i = l; i <= r; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                nmp[s[i]]++;
        }

        for (int i = l; i <= r; i++)
        {
            if (s[i] == '?')
            {
                for (char c = 'A'; c <= 'Z'; c++)
                {
                    if (nmp[c] == 0)
                    {
                        s[i] = c;
                        nmp[c]++;
                        // cout << c;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'A';
            }
        }

        // cout << endl;
        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
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