#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    string s;
    cin >> s;

    int ans = 0;
    int oneCount = 0;
    int zeroCount = 0;
    int foundOne = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (foundOne == -1)
                foundOne = i;
        }
        else
        {
            if (foundOne != -1)
            {
                ans += i - foundOne + 1;
                // cout << i - foundOne + 1 << " ";
                foundOne++;
            }
        }
    }

    cout << ans << endl;
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