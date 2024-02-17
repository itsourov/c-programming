#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isSafe(const int row, const int col, const vector<string> &vt, const int n)
{

    for (int i = row + 1; i < n; i++)
    {
        if (vt[i][col] == 'X')
        {
            break;
        }
        if (vt[i][col] == '#')
        {
            return false;
        }
    }

    for (int i = row - 1; i >= 0; i--)
    {
        if (vt[i][col] == 'X')
        {
            break;
        }
        if (vt[i][col] == '#')
        {
            return false;
        }
    }

    for (int i = col + 1; i < n; i++)
    {
        if (vt[row][i] == 'X')
        {
            break;
        }
        if (vt[row][i] == '#')
        {
            return false;
        }
    }

    for (int i = col - 1; i >= 0; i--)
    {
        if (vt[row][i] == 'X')
        {
            break;
        }
        if (vt[row][i] == '#')
        {
            return false;
        }
    }
    return true;
}
int maxcount = INT_MIN;

void rec(vector<string> &vt, int row, int n, int count)
{

    if (row == n)
    {
        // for (auto item : vt)
        // {
        //     for (auto c : item)
        //     {
        //         cout << c << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        maxcount = max(maxcount, count);
        return;
    }
    int possibleCount = 0;
    for (int colI = 0; colI < n; colI++)
    {
        if (vt[row][colI] == '.' && isSafe(row, colI, vt, n))
        {
            vt[row][colI] = '#';
            rec(vt, row, n, count + 1);
            vt[row][colI] = '?';
            rec(vt, row, n, count);
            vt[row][colI] = '.';
            possibleCount++;
        }
    }
    if (possibleCount == 0)
    {
        rec(vt, row + 1, n, count);
    }
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n && n != 0)
    {
        vector<string> vt(n);
        vector<vector<bool>> visited(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vt[i];
            for (int j = 0; j < n; j++)
            {
                visited[i].push_back(false);
            }
        }

        rec(vt, 0, n, 0);
        cout << maxcount << endl;
        maxcount = INT_MIN;
    }
}