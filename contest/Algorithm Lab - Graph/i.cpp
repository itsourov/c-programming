#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
char grid[210][210];
int marked[210][210];
bool isGood(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
bool dfs(int i, int j, char type)
{
    if (!isGood(i, j))
        return false;
    if (grid[i][j] != type)
        return false;
    if (marked[i][j])
        return false;
    marked[i][j] = 1;
    if (type == 'b' && i == n - 1)
        return true;
    if (type == 'w' && j == n - 1)
        return true;

    return dfs(i - 1, j - 1, type) || dfs(i - 1, j, type) || dfs(i, j - 1, type) || dfs(i, j + 1, type) || dfs(i + 1, j, type) || dfs(i + 1, j + 1, type);
}
void solve()
{

    int tc = 1;
    while (cin >> n && n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                marked[i][j] = 0;
            }
        }

        cout << tc << " ";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }
        bool bWon = false;
        for (int i = 0; i < n; i++)
        {
            if (dfs(0, i, 'b'))
            {
                bWon = true;
            }
        }
        if (bWon)
        {
            cout << 'B' << endl;
        }

        bool wWon = false;
        for (int i = 0; i < n; i++)
        {
            if (dfs(i, 0, 'w'))
            {
                wWon = true;
            }
        }
        if (wWon)
        {
            cout << 'W' << endl;
        }

        tc++;
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
