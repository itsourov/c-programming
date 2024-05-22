#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int MAXN = 20;
int n, m;
char grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
int disArr[MAXN][MAXN];
vector<pair<int, int>> moves;
bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
pair<int, int> homeCord;
void reset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
            disArr[i][j] = -1;
        }
    }
}
void bfs(int i, int j)
{
    reset();

    queue<pair<int, int>> q;
    q.push({i, j});
    disArr[i][j] = 0;
    visited[i][j] = 1;
    while (!q.empty())
    {
        auto u = q.front();
        q.pop();
        visited[u.first][u.second] = 1;
        for (auto item : moves)
        {
            int ii = u.first + item.first;
            int jj = u.second + item.second;
            if (isValid(ii, jj) && !visited[ii][jj] && (grid[ii][jj] == '.' || grid[ii][jj] == 'a' || grid[ii][jj] == 'b' || grid[ii][jj] == 'c' || grid[ii][jj] == 'h'))

            {
                q.push({ii, jj});
                disArr[ii][jj] = disArr[u.first][u.second] + 1;
                if (ii == homeCord.first && jj == homeCord.second)
                    return;
            }
        }
    }
}
void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'h')
            {
                homeCord.first = i;
                homeCord.second = j;
            }
        }
    }
    int maxAns = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c = grid[i][j];
            if (c == 'a' || c == 'b' || c == 'c')
            {
                bfs(i, j);
                maxAns = max(maxAns, disArr[homeCord.first][homeCord.second]);
            }
        }
    }
    cout << maxAns << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    moves.push_back(make_pair(0, 1));
    moves.push_back(make_pair(0, -1));
    moves.push_back(make_pair(1, 0));
    moves.push_back(make_pair(-1, 0));

    int t = 1;
    cin >> t;

    int tc = 0;
    while (t--)
    {

        cout << "Case " << ++tc << ": ";
        solve();
    }
}
