#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string key = "heidi";
    string s;
    cin >> s;
    int pos = 0;

    for (auto c : key)
    {
        int temp = s.find(c, pos);
        if (temp != string::npos)
        {
            pos = temp + 1;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}
