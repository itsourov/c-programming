#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve(int tc, int t)
{
    string s, c;
    cin >> s >> c;
    // if (t > 10 && tc == 82)
    // {
    //     cout << s << " " << c << endl;
    // }
    // if (t > 10)
    // {
    //     return;
    // }
    bool swaped = false;
    if (s >= c)
    {
        for (int i = 0; i < s.size() && i < c.size(); i++)
        {

            if (s[i] != c[i])
            {
                char ch = s[i];
                int pos = i;
                for (int j = i + 1; j < s.size(); j++)
                {
                    // cout << i << " " << j << endl;
                    if (s[j] <= ch)
                    {
                        pos = j;
                        ch = s[pos];
                    }
                }
                if (pos != i)
                {
                    swap(s[i], s[pos]);
                }
                break;
            }
        }
    }

    if (s < c)
    {
        cout << s << endl;
    }
    else
    {

        cout << "---" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        solve(i, t);
    }
}