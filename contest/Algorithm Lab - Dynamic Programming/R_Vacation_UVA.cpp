#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MAX = 110;
string A, B;
int N1, N2;
bool vis[MAX][MAX];
int dp[MAX][MAX];

int lcs(int i, int j)
{
    if (i >= A.size() || j >= B.size())
        return 0;
    if (vis[i][j])
        return dp[i][j];

    vis[i][j] = 1;
    if (A[i] == B[j])
        return dp[i][j] = 1 + lcs(i + 1, j + 1);
    else
        return dp[i][j] = max(lcs(i + 1, j), lcs(i, j + 1));
}

void solve()
{
    int tc = 0;
    while (getline(cin, A))
    {
        if (A == "#")
            break;
        getline(cin, B);

        memset(vis, 0, sizeof(vis));
        cout << "Case #" << ++tc << ": you can visit at most " << lcs(0, 0) << " cities." << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}