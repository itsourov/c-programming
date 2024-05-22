#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int INF = LLONG_MAX;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> graph[n + 5];
    int ai, bi, ci;
    for (int i = 0; i < m; i++)
    {
        cin >> ai >> bi >> ci;
        graph[ai].push_back({bi, ci});
    }
    int a, b;
    cin >> a >> b;

    set<pair<int, int>> st;
    vector<int> distArr(n + 10, INF);
    vector<int> visited(n + 10, 0);

    st.insert({0, a});
    distArr[a] = 0;

    while (!st.empty())
    {
        auto node = *st.begin();
        st.erase(st.begin());
        int nodeNum = node.second;
        if (visited[nodeNum])
        {
            continue;
        }
        visited[nodeNum] = 1;
        for (auto item : graph[nodeNum])
        {
            int child = item.first;
            int child_dist = item.second;

            if (distArr[nodeNum] + child_dist < distArr[child])
            {
                distArr[child] = distArr[nodeNum] + child_dist;
                st.insert({distArr[child], child});
            }
        }
    }
    if (distArr[b] == INF)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << distArr[b] << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}