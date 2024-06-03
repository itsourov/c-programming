#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];

    map<int, int> mpb;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mpb[b[i]]++;
    }
    int m;
    cin >> m;
    int d[m];

    map<int, int> mpd;
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        mpd[d[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (mpd[b[i]])
            {
                mpd[b[i]]--;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    int lastItem = d[m - 1];
    if (!mpb[lastItem])
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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