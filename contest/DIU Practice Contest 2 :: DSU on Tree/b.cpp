#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005

long long n, x, y, i, col, c[N], mx[N], ans[N];
vector<int> aj[N];

void dfs(int idx, int par, map<int, int> &mp)
{
    mx[idx] = mp[c[idx]] = 1, ans[idx] = c[idx];

    for (auto child : aj[idx])
    {
        if (child == par)
            continue;

        map<int, int> mn;
        dfs(child, idx, mn);

        if (mn.size() > mp.size())
        {
            mp.swap(mn);
            mx[idx] = mx[child], ans[idx] = ans[child];
        }

        for (auto it : mn)
        {
            mp[col = it.first] += it.second;

            if (mp[col] > mx[idx])
                ans[idx] = col, mx[idx] = mp[col];
            else if (mp[col] == mx[idx])
                ans[idx] += col;
        }
    }
}
void solve()
{
    map<int, int> mp;
    cin >> n;
    for (i = 1; i <= n; ++i)
        cin >> c[i];
    for (i = 2; i <= n; ++i)
    {
        cin >> x >> y;
        aj[x].push_back(y);
        aj[y].push_back(x);
    }
    dfs(1, 0, mp);
    for (i = 1; i <= n; ++i)
        cout << ans[i] << " ";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
