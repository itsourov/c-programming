#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<int> c(n);
    int res = 0, len;

    for (string &c : a)
    {
        cin >> c;
    }

    for (int i = 0; i < n; i++)
    {
        len = a[i].size();
        for (auto it = a[i].rbegin(); it != a[i].rend() && *it == '0'; it++)
            c[i]++;
        res += len - c[i];
    }
    sort(c.begin(), c.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            res += c[i];
    }
    cout << (res - 1 >= m ? "Sasha" : "Anna") << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}