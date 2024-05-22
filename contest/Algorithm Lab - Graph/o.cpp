#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <utility>

using namespace std;
// #define int long long
const int N = 5;
char grid[N + 10][N + 10];
int visited[N + 10][N + 10];
vector<pair<int, int>> moves;
bool isGood(int i, int j)
{
    return i >= 0 && i < N && j >= 0 && j < N;
}
void print(pair<int, int> ijidx, map<pair<int, int>, pair<int, int>> &path)
{
    if (ijidx.first == 0 && ijidx.second == 0)
    {
        cout << "(" << ijidx.first << ", " << ijidx.second << ")" << endl;
        return;
    }
    print(path[ijidx], path);
    cout << "(" << ijidx.first << ", " << ijidx.second << ")" << endl;
}

void solve()
{
    moves.push_back(make_pair(0, 1));
    moves.push_back(make_pair(0, -1));
    moves.push_back(make_pair(1, 0));
    moves.push_back(make_pair(-1, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> grid[i][j];
        }
    }
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    map<pair<int, int>, int> mp;
    map<pair<int, int>, pair<int, int>> path;
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    visited[0][0] = 1;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> item = moves[i];
            int ii = item.first + node.first;
            int jj = item.second + node.second;
            if (!isGood(ii, jj))
            {
                continue;
            }
            if (grid[ii][jj] == '1')
                continue;
            if (visited[ii][jj] == 1)
                continue;
            q.push(make_pair(ii, jj));
            mp[make_pair(ii, jj)] = mp[node] + 1;
            path[make_pair(ii, jj)] = node;
            visited[ii][jj] = 1;
        }
    }
    print(make_pair(4, 4), path);
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
