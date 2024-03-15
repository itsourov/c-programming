#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> f;

    for (int i = 0; i < n; ++i)
    {
        int m, s;
        cin >> m >> s;
        f.push_back({m, s});
    }

    sort(f.begin(), f.end());

    ll maxF = 0, curF = 0;
    int l = 0;

    for (int r = 0; r < n; ++r)
    {
        while (f[r].first - f[l].first >= d)
        {
            curF -= f[l].second;
            ++l;
        }

        curF += f[r].second;
        maxF = max(maxF, curF);
    }

    cout << maxF << endl;
}