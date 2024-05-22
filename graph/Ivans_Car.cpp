#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;
const int INF = LLONG_MAX;

vector<pair<int, char>> G[N];
vector<int> distArr(N, INF);
vector<int> visited(N, 0);
map<int, int> parentMp;
void dijkstra(int source, char type)
{

    set<pair<char, int>> st;
    st.insert({type, source});
    distArr[source] = 0;

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
        for (auto item : G[nodeNum])
        {
            int child = item.first;
            int child_dist;
            if (node.first == item.second)
            {
                child_dist = 0;
            }
            else
            {
                child_dist = 1;
            }

            if (distArr[nodeNum] + child_dist < distArr[child])
            {
                distArr[child] = distArr[nodeNum] + child_dist;
                st.insert({item.first, child});
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
        cin >> a >> b;

        G[a].push_back({b, 'U'});
        G[b].push_back({a, 'D'});
    }
    parentMp[1] = -1;

    int x, y;
    cin >> x >> y;
    dijkstra(x, 'U');
    dijkstra(x, 'D');
    cout << distArr[y] << endl;
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