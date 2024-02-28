#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int q;
    cin >> q;
    map<char, char> mp;
    map<char, int> mpIndex;
    int i = 0;
    while (q--)
    {
        char a, b;
        cin >> a >> b;
        if (a != b)
        {
            mp[a] = b;
            mpIndex[a] = i;
            i++;
        }
    }
    // for (auto item : mpIndex)
    // {
    //     cout << item.first << " " << item.second << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        int prev = -1;
        while (mp[c] && mpIndex[c] > prev)
        {
            prev = mpIndex[c];
            c = mp[c];
            cout << c << endl;
        }
        cout << c;
    }
    cout << endl;
}