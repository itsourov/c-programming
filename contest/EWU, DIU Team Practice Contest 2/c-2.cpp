#include <bits/stdc++.h>
using namespace std;
#define int long long
int _;

const int N = 502;
int ball[N], score[N];
string grid[N];
int dp[N][N];
int r, c;

int move(int i, int j)
{
    if (i == r)
        return score[j];
    int ans = 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    ans = move(i + 1, j);
    if (j - 1 >= 0 && grid[i][j] != '.')
    {
        int left = move(i + 1, j - 1);
        ans = max(ans, left);
    }
    if (j + 1 < c && grid[i][j] != '.')
    {
        int right = move(i + 1, j + 1);
        ans = max(ans, right);
    }
    dp[i][j] = ans;
    return dp[i][j];
}

void solve()
{
    cin >> r >> c;
    for (int i = 0; i < c; i++)
        cin >> ball[i];
    for (int i = 0; i < r; i++)
        cin >> grid[i];
    // for (int i = 0; i < r; i++) cout << grid[i] << '\n';
    for (int i = 0; i < c; i++)
        cin >> score[i];

    memset(dp, -1, sizeof(dp));
    int ans = 0;

    for (int i = 0; i < c; i++)
    {
        ans += (move(0, i) * ball[i]);
    }
    cout << ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test = 1;
    cin >> test;
    for (_ = 1; _ <= test; _++)
    {
        solve();
    }
    return 0;
}