#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    string s;
    cin >> s;

    int ps[s.size() + 1] = {0};
    for (int i = 1; i < s.size(); i++)
    {
        ps[i + 1] = ps[i];
        if (s[i] == s[i - 1])
            ps[i + 1]++;
    }
    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        cout << ps[r] - ps[l] << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}