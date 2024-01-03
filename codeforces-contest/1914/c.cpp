#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int score = 0;

    int playedGames = 0;
    vector<int> vt;
    while (k--)
    {
        if (playedGames == 0)
        {
            score += a[playedGames];
            vt.push_back(b[playedGames]);
            playedGames++;
        }
        else
        {
            auto maxIt = max_element(vt.begin(), vt.end());

            int max = *maxIt;
        }
    }

    cout << score << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}