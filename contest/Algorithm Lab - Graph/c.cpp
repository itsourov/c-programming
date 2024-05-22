#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> graph[110];
int arr[110];
int endNode;

int dfs(int idx)
{
    int maxNodeIdx = -1, maxValue = INT_MIN;

    for (auto item : graph[idx])
    {
        if (arr[item] > maxValue)
        {
            maxValue = arr[item];
            maxNodeIdx = item;
        }
    }

    if (maxNodeIdx == -1)
    {
        endNode = idx;
        return arr[idx];
    }

    return dfs(maxNodeIdx) + arr[idx];
}

void solve()
{
    int n, m;
    cin >> n >> m;

    endNode = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
    }
    cout << dfs(0) << " " << endNode << endl;

    for (int i = 0; i < n; i++)
    {
        graph[i].clear();
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int tc = 0;
    while (t--)
    {
        cout << "Case " << ++tc << ": ";
        solve();
    }
}
