#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
int n, m, total;
int visited[50][50];
bool isValid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }
    return false;
}
bool rec(vector<string> &vt, int i, int j, int count)
{

    // cout << i << " " << j << endl;
    if (!isValid(i, j))
        return false;
    if (visited[i][j])
    {
        return false;
    }
    if (vt[i][j] == '#')
        return false;
    if (vt[i][j] == 's')
    {
        count++;
    }
    if (vt[i][j] == 'x')
    {
        if (count * 2 > total)
        {
            return false;
        }
        // cout << count << endl;
        return true;
    }

    visited[i][j] = 1;

    if (rec(vt, i - 1, j, count))
        return true;
    if (rec(vt, i + 1, j, count))
        return true;
    if (rec(vt, i, j - 1, count))
        return true;
    if (rec(vt, i, j + 1, count))
        return true;

    visited[i][j] = 0;
    return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> total;
    vector<string> vt(n);
    int startx, starty;

    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        for (int j = 0; j < vt[i].size(); j++)
        {
            if (vt[i][j] == '@')
            {
                startx = i;
                starty = j;
            }
        }
    }
    // cout << startx << " " << starty << endl;
    if (rec(vt, startx, starty, 0))
    {
        cout << "SUCCESS" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
