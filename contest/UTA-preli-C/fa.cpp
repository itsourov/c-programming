#include <bits/stdc++.h>
using namespace std;
// #define int long long
set<int> st;
void dfs(int node, int mx, vector<int> tree[], int parent, int marked[], int arr[])
{

    int cMx = max(arr[node], mx);
    if (tree[node].size() == 1)
    {
        st.insert(cMx);
    }
    for (auto item : tree[node])
    {
        if (!marked[item])
        {
            marked[item] = 1;
            dfs(item, cMx, tree, node, marked, arr);
            marked[item] = 0;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> tree[n + 1];
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    int marked[n] = {0};
    dfs(0, 0, tree, -1, marked, arr);
    // for (auto item : st)
    // {
    //     cout << item << endl;
    // }

    int k = ceil(log2(st.size() + 1)) + floor(sqrt(st.size())) - 1;
    vector<int> vt;
    for (auto item : st)
    {
        vt.push_back(item);
    }
    sort(vt.begin(), vt.end(), greater<int>());
    cout << vt[k - 1] << endl;
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
