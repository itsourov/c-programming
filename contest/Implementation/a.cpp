#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{

    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr(n);

    int type, x, y;
    int lastAns = 0;
    vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        cin >> type >> x >> y;
        if (type == 1)
        {
            int idx = (x ^ lastAns) % n;
            arr[idx].push_back(y);
        }
        else
        {
            int idx = (x ^ lastAns) % n;
            lastAns = arr[idx][y % arr[idx].size()];
            ans.push_back(lastAns);
        }
    }
    for (auto item : ans)
    {
        cout << item << endl;
    }
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
