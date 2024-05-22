#include <bits/stdc++.h>
using namespace std;
// #define int long long
int arr[300000];
map<int, vector<int>> tree;
set<int> ans;

void dfs(int node, int mx, int parent, int marked[])
{
    // cout << node << endl;
    if (tree[node].size() == 1 && tree[node][0] == parent)
    {
        ans.insert(max(mx, arr[node]));
        return;
    }

    for (auto item : tree[node])
    {
        if (item != node && !marked[item])
        {
            marked[item] = 1;
            dfs(item, max(mx, arr[item]), node, marked);
            marked[item] = 0;
        }
    }
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int u, v;

    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    // for (auto item : tree)
    // {
    //     cout << item.first << "-";
    //     for (auto c : item.second)
    //     {
    //         cout << c << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    int marked[300000] = {0};
    dfs(1, 0, -1, marked);
    for (auto item : ans)
    {
        cout << item << " ";
    }
    int uel = ans.size()
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
