#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        if (i > 0)
            vt[i] += vt[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;

        auto ub = lower_bound(vt.begin(), vt.end(), q);
        if (ub != vt.end())
        {

            cout << ub - vt.begin() + 1 << endl;
        }
        else
        {

            cout << ub - vt.begin() << endl;
        }
    }
}