#include <bits/stdc++.h>
using namespace std;
#define int long long
const int limit = 100;

void solve()
{
    int nc;
    int tc = 1;
    while (cin >> nc && nc)
    {
        map<int, vector<int>> gph;
        int a, b;
        for (int i = 0; i < nc; i++)
        {
            cin >> a >> b;
            gph[a].push_back(b);
            gph[b].push_back(a);
        }

        int source, ttl;
        while (cin >> source >> ttl)
        {

            if (source == 0 && ttl == 0)
                break;

            int valid = 1;
            map<int, int> distance;
            queue<int> qq;
            qq.push(source);
            distance[source] = 0;
            while (!qq.empty())
            {
                int node = qq.front();
                qq.pop();
                for (auto item : gph[node])
                {
                    if (distance.find(item) == distance.end())
                    {
                        distance[item] = distance[node] + 1;
                        if (distance[item] <= ttl)
                        {
                            qq.push(item);
                            valid++;
                        }
                    }
                }
            }
            // cout << gph.size() - valid << endl;
            cout << "Case " << tc++ << ": " << gph.size() - valid << " nodes not reachable from node " << source << " with TTL = " << ttl << "." << endl;
        }
    }
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
