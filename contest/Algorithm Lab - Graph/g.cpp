#include <bits/stdc++.h>
using namespace std;
#define int long long
int dfs(char idx, map<char, vector<char>> &graph, map<char, bool> &marked)
{
    // cout << "dfs " << idx << " " << graph[idx].size() << endl;
    if (marked[idx])
    {
        return 0;
    }
    marked[idx] = true;
    int count = 1;
    for (auto item : graph[idx])
    {
        if (item != idx)
            count += dfs(item, graph, marked);
    }

    return count;
}
void solve()
{
    char c;
    cin >> c;
    cin.ignore();

    string s;
    map<char, vector<char>> graph;
    while (getline(cin, s) && !s.empty())
    {

        // cout << s << endl;
        graph[s[0]].push_back(s[1]);
        graph[s[1]].push_back(s[0]);
    }

    map<char, bool> marked;
    int ans = 0;
    for (char i = 'A'; i <= c; i++)
    {
        int temp = dfs(i, graph, marked);
        // cout << temp << endl;
        if (temp)
        {
            ans++;
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
    cin >> t;
    cin.ignore();
    // cin.ignore();

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
        if (t)
            cout << endl;
    }
}
