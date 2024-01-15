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
    }
    sort(vt.begin(), vt.end());

    int q;
    cin >> q;
    int query;
    for (int i = 0; i < q; i++)
    {
        cin >> query;

        auto ub = upper_bound(vt.begin(), vt.end(), query);

        int ans = ub - vt.begin();
        cout << ans << endl;
    }
}