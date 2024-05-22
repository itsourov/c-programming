#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> graph[30005];

pair<int, int> bfs(int start, int n)
{
    vector<bool> visited(n, false);
    queue<pair<int, int>> q;
    q.push({start, 0});
    pair<int, int> farthestNode = {start, 0};

    while (!q.empty())
    {
        int node = q.front().first;
        int distance = q.front().second;
        q.pop();

        if (distance > farthestNode.second)
        {
            farthestNode.first = node;
            farthestNode.second = distance;
        }

        visited[node] = true;

        for (auto neighbor : graph[node])
        {
            int nextNode = neighbor.first;
            int weight = neighbor.second;
            if (!visited[nextNode])
            {
                q.push({nextNode, distance + weight});
            }
        }
    }

    return farthestNode;
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        graph[i].clear();
    }

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    pair<int, int> node1 = bfs(0, n);

    pair<int, int> node2 = bfs(node1.first, n);
    cout << node2.second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int testCase = 0;
    while (t--)
    {
        cout << "Case " << ++testCase << ": ";
        solve();
    }

    return 0;
}
