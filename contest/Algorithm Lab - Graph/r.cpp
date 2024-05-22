#include <bits/stdc++.h>
using namespace std;
#define int long long

int bfs(int idx, int visited[], map<int, vector<int>> &graph)
{
    int colorCnt[2] = {0};
    queue<pair<int, int>> q;
    q.push({idx, 0});
    colorCnt[0]++;
    visited[idx] = 1;
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();

        for (auto child : graph[node.first])
        {
            if (!visited[child])
            {
                visited[child] = 1;
                q.push({child, node.second ^ 1});
                colorCnt[node.second ^ 1]++;
            }
        }
    }
    return max(colorCnt[0], colorCnt[1]);
}
void solve()
{

    int n;
    cin >> n;
    map<int, vector<int>> graph;

    int a, b;

    int minNode = INT_MAX;
    int maxNode = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);

        maxNode = max(a, maxNode);
        maxNode = max(b, maxNode);

        minNode = min(a, minNode);
        minNode = min(b, minNode);
    }
    // cout << minNode << " " << maxNode << endl;
    int visited[maxNode + 1] = {0};
    int ans = 0;
    for (int i = minNode; i <= maxNode; i++)
    {

        if (graph[i].size() && !visited[i])
        {
            // cout << bfs(i, visited, graph) << endl;
            ans += bfs(i, visited, graph);
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;
    while (t--)
    {

        cout << "Case " << ++tc << ": ";
        solve();
    }
}
