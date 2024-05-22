#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int visited[8][8];
int level[8][8];
const int INF = INT_MAX;
int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '1';
}
bool isValid(int x, int y)
{
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}
vector<pair<int, int>> movements = {
    {-2, 1},
    {-2, -1},
    {2, 1},
    {2, -1},
    {1, 2},
    {-1, 2},
    {1, -2},
    {-1, -2},

};
int bfs(string start, string end)
{
    int startx = getX(start);
    int startY = getY(start);

    int endX = getX(end);
    int endY = getY(end);

    queue<pair<int, int>> q;
    q.push({startx, startY});
    visited[startx][startY] = 1;
    level[startx][startY] = 0;

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        // cout << v.first << " " << v.second << endl;
        q.pop();
        visited[v.first][v.second] = 1;
        for (auto item : movements)
        {
            if (isValid(v.first + item.first, v.second + item.second))
            {
                if (!visited[v.first + item.first][v.second + item.second])
                {
                    q.push({v.first + item.first, v.second + item.second});
                    level[v.first + item.first][v.second + item.second] = level[v.first][v.second] + 1;
                }
            }
        }
        if (level[endX][endY] != INF)
        {
            break;
        }
    }
    return level[endX][endY];
}
void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            visited[i][j] = 0;
            level[i][j] = INF;
        }
    }
}
void solve()
{
    reset();
    string start, end;
    cin >> start >> end;
    cout << bfs(start, end) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}