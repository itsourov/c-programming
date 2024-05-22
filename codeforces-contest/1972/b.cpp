#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int upCount = 0, downCOunt = 0;
    for (auto c : s)
    {
        if (c == 'U')
        {
            upCount++;
        }
        else
        {
            downCOunt++;
        }
    }
    if (downCOunt % 2 == 0 && n != 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}