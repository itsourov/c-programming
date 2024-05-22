#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 30;
vector<string> grid;
int marked[N][N];

bool isGood(int i, int j)
{
    return i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size();
}
int mark(int i, int j)
{
    if (!isGood(i, j))
        return 0;
    if (grid[i][j] != '1')
        return 0;
    if (marked[i][j])
        return 0;

    marked[i][j] = true;
    int counter = 1;
    counter += mark(i + 1, j);
    counter += mark(i - 1, j);
    counter += mark(i, j + 1);
    counter += mark(i, j - 1);

    counter += mark(i - 1, j + 1);
    counter += mark(i - 1, j - 1);
    counter += mark(i + 1, j + 1);
    counter += mark(i + 1, j - 1);
    return counter;
}
void solve()
{
    grid.clear();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            marked[i][j] = 0;
        }
    }

    string s;

    while (getline(cin, s) && !s.empty())
    {
        grid.push_back(s);
    }

    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid[i].size(); j++)
    //     {
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    // return;

    int maxAns = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (!marked[i][j] && grid[i][j] == '1')
            {
                int x = mark(i, j);
                maxAns = max(maxAns, x);
                // cout << x << " " << i << " " << j << endl;

                // for (int i = 0; i < n; i++)
                // {
                //     for (int j = 0; j < n; j++)
                //     {
                //         cout << marked[i][j] << " ";
                //     }
                //     cout << endl;
                // }
                // return;
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

    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();
    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
        if (t)
            cout << endl;
    }
}
