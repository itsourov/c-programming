
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end());

    int ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        ans1 += (i + 1) * (a * vt[i] + b);
    }

    reverse(vt.begin(), vt.end());
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans2 += (i + 1) * (a * vt[i] + b);
    }
    cout << max(ans1, ans2) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}