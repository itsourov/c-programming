#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MAX_N = 55;
const int MAX_M = 55;

int n, m, x, y;
int a[MAX_N][MAX_M];

void solve()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;

    int ans = INT_MAX;

    for (int i = 1; i + x <= n; i++)
    {
        for (int j = 1; j + y <= m; j++)
        {
            int temp = 0;
            for (int k = i; k <= i + x; k++)
                for (int l = j; l <= j + y; l++)
                    temp += a[k][l];
            ans = min(ans, temp);
        }
    }

    swap(x, y);

    for (int i = 1; i + x <= n; i++)
    {
        for (int j = 1; j + y <= m; j++)
        {
            int temp = 0;
            for (int k = i; k <= i + x; k++)
                for (int l = j; l <= j + y; l++)
                    temp += a[k][l];
            ans = min(ans, temp);
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}