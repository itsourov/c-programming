#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
char grid[500][500];
void solve()
{
    int n, m;
    cin >> n >> m;
    int wcount = 0, bcount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'W')
            {
                wcount++;
            }
            else
            {
                bcount++;
            }
        }
    }
    if ((grid[0][0] == grid[n - 1][m - 1]) || (grid[0][m - 1] == grid[n - 1][0]))
    {
        cout << "YES" << endl;
    }
    else
    {
        int ok = 0;
        for (int i = 0; i < m; i++)
        {
            if (grid[0][i] != grid[0][0])
            {
                ok++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] != grid[0][0])
            {
                ok++;
                break;
            }
        }
        if (ok == 2)
        {
            cout << "YES" << endl;
            return;
        }

        ok = 0;
        for (int i = 0; i < m; i++)
        {
            if (grid[0][i] != grid[0][m - 1])
            {
                ok++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (grid[i][m - 1] != grid[0][m - 1])
            {
                ok++;
                break;
            }
        }
        if (ok == 2)
        {
            cout << "YES" << endl;
            return;
        }

        ok = 0;
        for (int i = 0; i < m; i++)
        {
            if (grid[n - 1][i] != grid[n - 1][m - 1])
            {
                ok++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (grid[i][m - 1] != grid[n - 1][m - 1])
            {
                ok++;
                break;
            }
        }
        if (ok == 2)
        {
            cout << "YES" << endl;
            return;
        }

        ok = 0;
        for (int i = 0; i < m; i++)
        {
            if (grid[n - 1][i] != grid[n - 1][0])
            {
                ok++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] != grid[n - 1][0])
            {
                ok++;
                break;
            }
        }
        if (ok == 2)
        {
            cout << "YES" << endl;
            return;
        }

        cout << "No" << endl;
    }
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