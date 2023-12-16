#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int score[n], penaty[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> penaty[i];
    }

    vector<pair<int, int>> vt(n);
    for (int i = 0; i < n; i++)
    {

        vt[i] = make_pair((-1) * score[i], penaty[i]);
    }
    sort(vt.begin(), vt.end());
    for (int i = 0; i < m; i++)
    {
        cout << vt[i].second << endl;
    }
}