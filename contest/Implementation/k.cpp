#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int room[10] = {0};
    for (char c : s)
    {
        if (c == 'L')
        {
            for (int i = 0; i < 10; i++)
            {
                if (room[i] == 0)
                {
                    room[i] = 1;
                    break;
                }
            }
        }
        else if (c == 'R')
        {
            for (int i = 9; i >= 0; i--)
            {
                if (room[i] == 0)
                {
                    room[i] = 1;
                    break;
                }
            }
        }
        else
        {
            room[c - '0'] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << room[i];
    }
    cout << endl;
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
