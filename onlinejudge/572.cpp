#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
vector<string> vt;

int n, m;
void fill(int i, int j)
{
    if (i <= 0 || i >= n)
    {
        return;
    }
    if (j <= 0 || j >= n)
    {
        return;
    }

    if (vt[i][j] == '@')
        vt[i][j] = '1';
    fill(i, j + 1);
    fill(i, j - 1);
    fill(i + 1, j);
    fill(i - 1, j);
}

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;

        vt.reserve(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vt[i];
            // cout << vt[i] << endl;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vt[i][j] == '@')
                {
                    fill(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}