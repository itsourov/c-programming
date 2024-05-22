#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 105;
int n, m;
char grid[N][N];
int marked[N][N];
bool isGood(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
int dfs(int i, int j)
{

    if (!isGood(i, j))
        return 0;
    if (grid[i][j] != '@')
        return 0;
    if (marked[i][j])
        return 0;
    marked[i][j] = true;
    int counter = 1;
    counter += dfs(i + 1, j);
    counter += dfs(i - 1, j);
    counter += dfs(i, j + 1);
    counter += dfs(i, j - 1);

    counter += dfs(i - 1, j + 1);
    counter += dfs(i - 1, j - 1);
    counter += dfs(i + 1, j + 1);
    counter += dfs(i + 1, j - 1);

    return counter;
}
void solve()
{

    while (cin >> n >> m && n && m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                marked[i][j] = 0;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << grid[i][j];
                if (dfs(i, j))
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
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
        if (t)
            cout << endl;
    }
}
