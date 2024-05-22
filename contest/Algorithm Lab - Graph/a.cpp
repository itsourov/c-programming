
#include <bits/stdc++.h>
using namespace std;
#define int long long
void mark(vector<int> graph[], int marked[], int n, int idx)
{

    for (auto item : graph[idx])
    {
        if (!marked[item])
        {
            marked[item] = 1;
            mark(graph, marked, n, item);
        }
    }
}

void solve()
{
    int n;
    while (cin >> n && n != 0)
    {
        vector<int> graph[n + 1];

        int u;
        while (cin >> u && u != 0)
        {
            int v;
            while (cin >> v && v != 0)
            {

                graph[u].push_back(v);
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            int marked[n + 1];
            for (int i = 0; i < n + 1; i++)
            {
                marked[i] = 0;
            }
            mark(graph, marked, n, x);

            vector<int> ans;
            for (int i = 1; i < n + 1; i++)
            {
                if (!marked[i])
                {
                    ans.push_back(i);
                }
            }
            cout << ans.size();
            for (auto item : ans)
            {
                cout << " " << item;
            }
            cout << endl;
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
    while (t--)
    {
        solve();
    }
}