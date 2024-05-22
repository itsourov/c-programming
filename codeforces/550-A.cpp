#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    string s;
    cin >> s;
    int firstAb = -1, lastAb = -1, firstBa = -1, lastBa = -1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'B')
        {
            if (firstAb == -1)
            {
                firstAb = i - 1;
            }
            lastAb = i - 1;
        }

        if (s[i - 1] == 'B' && s[i] == 'A')
        {
            if (firstBa == -1)
            {
                firstBa = i - 1;
            }
            lastBa = i - 1;
        }
    }

    if (((firstAb + 1) < (lastBa) && firstAb != -1 && lastBa != -1) || (firstBa + 1) < (lastAb) && firstBa != -1 && lastAb != -1)
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

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}