
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N = 30;
char grid[N][N];
bool mark[N][N];
bool isGood(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
void oli(int i, int j)
{
    if (!isGood(i, j))
        return;
    if (mark[i][j])
    {
        return;
    }
    if (grid[i][j] == '0')
        return;
    mark[i][j] = true;
    oli(i + 1, j);
    oli(i - 1, j);
    oli(i, j + 1);
    oli(i, j - 1);

    oli(i - 1, j + 1);
    oli(i - 1, j - 1);
    oli(i + 1, j + 1);
    oli(i + 1, j - 1);
}
void solve()
{
    int tc = 1;
    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                mark[i][j] = false;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!mark[i][j] && grid[i][j] == '1')
                {
                    ans++;
                    oli(i, j);
                }
            }
        }
        cout << "Image number " << tc << " contains " << ans << " war eagles." << endl;
        tc++;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}