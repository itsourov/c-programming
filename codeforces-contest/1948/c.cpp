#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool ans = false;
bool visited[2][200000 + 100];

void rec(int row, int col, vector<string> &vt, int n)
{
    // cout << row << " " << col << endl;
    if ((row == 1 && col == n - 1) || (row == 1 && col == n - 2) || (row == 0 && col == n - 1))
    {
        ans = true;
    }
    if (ans == true)
    {
        return;
    }
    if (visited[row][col])
    {
        return;
    }
    visited[row][col] = true;
    if (row == 0 && col < n)
    {
        if (vt[1][col] == '<')
        {
            rec(row + 1, col - 1, vt, n);
        }
        else
        {
            rec(row + 1, col + 1, vt, n);
        }
    }

    if (col < n - 1)
    {
        if (vt[row][col + 1] == '>')
            rec(row, col + 2, vt, n);
    }
    if (row == 1 && col < n)
    {
        if (vt[0][col] == '<')
        {
            rec(row - 1, col - 1, vt, n);
        }
        else
        {
            rec(row - 1, col + 1, vt, n);
        }
    }

    if (col > 0)
    {
        if (vt[row][col - 1] == '<')
            rec(row, col - 2, vt, n);
    }
    visited[row][col] = false;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> vt(2);
    cin >> vt[0] >> vt[1];
    rec(0, 0, vt, n);
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    ans = false;
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
}