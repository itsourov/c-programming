#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;

    int cut = 1;
    bool found01 = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            if (s[i] == '0')
            {
                cut++;
            }
            else
            {
                cut++;
                found01 = true;
            }
        }
    }
    if (found01)
        cut--;
    cout << cut << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }
}
