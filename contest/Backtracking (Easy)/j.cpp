#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isSafe(int i, int j, int r, int c)
{
    if (i >= 0 && i < r && j >= 0 && j < c)
    {
        return true;
    }
    return false;
}

map<pair<int, int>, int> dp;
int maxAns = INT_MIN;
int rec(vector<vector<int>> &arr, vector<vector<int>> &visited, int i, int j, int r, int c, int prev)
{

    // cout << i << " " << j << endl;
    if (!isSafe(i, j, r, c))
        return 0;
    if (visited[i][j] == 1)
    {
        return 0;
    }
    if (prev <= arr[i][j])
    {
        return 0;
    }
    if (dp[{i, j}])
    {
        // cout << "returning " << dp[{i, j}] << endl;
        return dp[{i, j}];
    }
    else
    {
        visited[i][j] = 1;
        int maxPath = rec(arr, visited, i + 1, j, r, c, arr[i][j]) + 1;
        maxPath = max(maxPath, rec(arr, visited, i - 1, j, r, c, arr[i][j]) + 1);
        maxPath = max(maxPath, rec(arr, visited, i, j + 1, r, c, arr[i][j]) + 1);
        maxPath = max(maxPath, rec(arr, visited, i, j - 1, r, c, arr[i][j]) + 1);
        visited[i][j] = 0;
        dp[{i, j}] = maxPath;
        return maxPath;
    }
}

void solve()
{
    string s;
    cin >> s;
    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr(r);
    vector<vector<int>> visited(r);
    int dum;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> dum;
            arr[i].push_back(dum);
            visited[i].push_back(0);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp = rec(arr, visited, i, j, r, c, INT_MAX);
            // cout << temp << " ";

            maxAns = max(maxAns, temp);
        }
        // cout << endl;
    }

    cout << s << ": " << maxAns << endl;
    maxAns = INT_MIN;
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
