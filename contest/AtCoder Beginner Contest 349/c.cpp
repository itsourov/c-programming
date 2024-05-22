#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    string s, t;
    cin >> s >> t;
    t[0] = tolower(t[0]);
    t[1] = tolower(t[1]);
    t[2] = tolower(t[2]);

    auto it = s.find(t[0]);
    if (it == string::npos)
    {
        cout << "No" << endl;
        return;
    }
    it = s.find(t[1], it + 1);
    if (it == string::npos)
    {
        cout << "No" << endl;
        return;
    }
    if (t[2] == 'x')
    {
        cout << "Yes" << endl;
        return;
    }
    it = s.find(t[2], it + 1);
    if (it == string::npos)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}