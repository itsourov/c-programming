#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> vt;
    map<int, int> mpa, mpb;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpa[x]++;
        vt.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mpb[x]++;
        vt.push_back(x);
    }
    sort(vt.begin(), vt.end());

    for (int i = 1; i < vt.size(); i++)
    {
        int a = vt[i];
        int b = vt[i - 1];
        if ((mpa[a] && mpa[b]))
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

signed main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}