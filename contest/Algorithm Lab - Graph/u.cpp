#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int arr[100005];
vector<int> graph[100005];
bool visited[100005];
int x;
int dfs(int in)
{
    visited[in] = 1;
    x = min(x, arr[in]);
    for (auto i : graph[in])
    {
        if (visited[i] == 0)
        {
            dfs(i);
        }
    }
    return x;
}
void solve()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            x = INT_MAX;
            ans += dfs(i);
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
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
