#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int N = 1000 + 10;
int arr[N][N], ps[N][N];
void solve()
{
    int n, q;
    cin >> n >> q;
    char c;
    int value;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c;
            if (c == '.')
                value = 0;
            else if (c == '*')
                value = 1;

            ps[i][j] = ps[i][j - 1] + ps[i - 1][j] - ps[i - 1][j - 1] + value;
        }
    }
    int x1, y1, x2, y2;
    for (int i = 0; i < q; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << ps[x2][y2] - ps[x1 - 1][y2] - ps[x2][y1 - 1] + ps[x1 - 1][y1 - 1] << endl;
    }
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