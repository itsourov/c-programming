#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    while (cin >> n && n)
    {

        int l;
        cin >> l;

        vector<int> graph[n + 1];
        int a, b;
        for (int i = 0; i < l; i++)
        {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        // for (int i = 0; i < n + 1; i++)
        // {
        //     cout << i << "- ";
        //     for (auto item : graph[i])
        //     {
        //         cout << item << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        int marked[n + 1];

        for (int i = 0; i < n + 1; i++)
        {
            marked[i] = 0;
        }
        bool allGood = true;

        queue<int> q;
        q.push(0);
        marked[0] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto item : graph[node])
            {
                if (marked[item] == 0)
                {
                    if (marked[node] == 1)
                    {
                        marked[item] = 2;
                    }
                    else
                    {
                        marked[item] = 1;
                    }
                    q.push(item);
                }
                else
                {
                    if (marked[item] == marked[node])
                    {
                        allGood = false;
                    }
                }
            }
        }

        if (allGood)
        {
            cout << "BICOLORABLE." << endl;
        }
        else
        {
            cout << "NOT BICOLORABLE." << endl;
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
    // cin.ignore();
    // cin.ignore();

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
        // if (t)
        //     cout << endl;
    }
}
