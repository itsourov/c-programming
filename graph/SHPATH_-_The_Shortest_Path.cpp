#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;
const int INF = LLONG_MAX;

vector<pair<int, int>> G[N];
vector<int> distArr(N, INF);
vector<int> visited(N, 0);
map<int, int> parentMp;
void dijkstra(int source)
{

    set<pair<int, int>> st;
    st.insert({0, source});
    distArr[source] = 0;

    while (!st.empty())
    {
        auto node = *st.begin();
        st.erase(st.begin());
        int distArrance = node.first;
        int nodeNum = node.second;
        if (visited[nodeNum])
        {
            continue;
        }
        visited[nodeNum] = 1;
        for (auto item : G[nodeNum])
        {
            int child = item.first;
            int child_distArr = item.second;

            if (distArr[nodeNum] + child_distArr < distArr[child])
            {
                distArr[child] = distArr[nodeNum] + child_distArr;
                st.insert({distArr[child], child});
                parentMp[child] = nodeNum;
            }
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a, b, w;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> w;

        G[a].push_back({b, w});
        G[b].push_back({a, w});
    }
    parentMp[1] = -1;
    dijkstra(1);

    if (distArr[n] == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> ans;
        int index = n;
        while (index != -1)
        {
            ans.push_back(index);
            index = parentMp[index];
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}