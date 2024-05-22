#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;

    while (cin >> n >> m)
    {
        map<int, vector<int>> graph;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            graph[x].push_back(i);
        }
        int k, v;
        for (int i = 0; i < m; i++)
        {
            cin >> k >> v;
            if (graph[v].size() < k)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << graph[v][k - 1] << endl;
            }
        }
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