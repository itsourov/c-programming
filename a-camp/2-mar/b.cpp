#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string t;
    cin >> t;

    string s;
    cin >> s;
    s = s + '$' + t;

    int n = s.size();
    vector<int> v(n, 0);

    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (i < r)
        {
            int k = i - l;
            cnt = min(v[k], r - i);
        }
        while (i + cnt < n && s[cnt] == t[i + cnt])
        {
            cnt++;
        }
        v[i] = cnt;
        if (i + cnt > r)
        {
            l = i;
            r = i + cnt;
        }
    }
    for (auto item : v)
    {
        cout << item << endl;
    }
}