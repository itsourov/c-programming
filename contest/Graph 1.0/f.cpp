#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;

    cin >> n >> m;
    int arr[n + 1];
    int minCol = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        // cout<<arr[i]<<" ";
        minCol = min(arr[i], minCol);
    }
    // cout << minCol << endl;
    int a, b;
    map<int, set<int>> graph;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (arr[a] != arr[b])
        {
            graph[arr[a]].insert(arr[b]);
            graph[arr[b]].insert(arr[a]);
        }
    }
    int ans = minCol;
    int maxSize = 0;
    for (auto item : graph)
    {
        if (item.second.size() > maxSize)
        {
            maxSize = item.second.size();
            ans = item.first;
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
    while (t--)
    {
        solve();
    }
}