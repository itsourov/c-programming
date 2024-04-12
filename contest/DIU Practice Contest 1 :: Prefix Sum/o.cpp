#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int N = 50 + 10;
int ps[N][N];
void solve()
{
    int n, m;
    cin >> n >> m;
    int value;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> value;

            ps[i][j] = ps[i][j - 1] + ps[i - 1][j] - ps[i - 1][j - 1] + value;
        }
    }
    int ans = INT_MAX;
    int a, b;
    int x1, y1, x2, y2;
    for (int i = 1; i <= n - b; i++)
    {
        for (int j = 1; j <= m - a; j++)
        {
            x1 = j;
            y1 = i;
            x2 = j + a;
            y2 = i + b;
            int temp = ps[x2][y2] - ps[x1 - 1][y2] - ps[x2][y1 - 1] + ps[x1 - 1][y1 - 1];
            cout << temp << endl;
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