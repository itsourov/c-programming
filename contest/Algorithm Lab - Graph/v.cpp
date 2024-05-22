#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 20000 + 10;
vector<pair<int, int>> graph[N];
int visited[N];

int dfs(int u)
{
    if (visited[u])
        return 0;

    visited[u] = true;
    int mx = 0;
    for (auto v : graph[u])
        if (!visited[v.first])
            mx = max(mx, dfs(v.first) + v.second);

    return mx;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    cout << dfs(0) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
