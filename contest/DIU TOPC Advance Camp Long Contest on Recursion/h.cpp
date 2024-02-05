#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, m;
int maxNumber = INT_MAX;
bool good(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void floodFill(vector<vector<int>> &arr, int i, int j, int sum)
{
    if (!good(i, j))
        return;
    sum += arr[i][j];
    // cout << i << " " << j << " " << arr[i][j] << endl;
    if (i == n - 1 && j == m - 1)
    {
        maxNumber = max(maxNumber, sum);
        return;
    }

    floodFill(arr, i + 1, j, sum);
    floodFill(arr, i, j + 1, sum);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    maxNumber *= -1;
    cin >> n >> m;

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    floodFill(arr, 0, 0, 0);
    cout << maxNumber << endl;
}