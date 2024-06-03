#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MAX_N = 1005;
const int MAX_LOAD = 3005;
int N;
int dp[MAX_N][MAX_LOAD];
int weight[MAX_N], load[MAX_N];

int GetNumberCanHold(int currentBox, int loadLeft)
{
    if (currentBox == N)
        return 0;
    if (dp[currentBox][loadLeft] != -1)
        return dp[currentBox][loadLeft];

    dp[currentBox][loadLeft] = GetNumberCanHold(currentBox + 1, loadLeft);

    if (loadLeft >= weight[currentBox])

        dp[currentBox][loadLeft] = max(dp[currentBox][loadLeft], 1 + GetNumberCanHold(currentBox + 1, min(loadLeft - weight[currentBox], load[currentBox])));

    return dp[currentBox][loadLeft];
}

int FindBest()
{
    int best = 0;
    for (int box = 0; box < N; ++box)
    {

        best = max(best, GetNumberCanHold(box + 1, load[box]) + 1);
    }
    return best;
}

void solve()
{
    while (cin >> N, N)
    {
        int highestLoad = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> weight[i] >> load[i];
            highestLoad = max(highestLoad, load[i]);
        }

        for (int i = 0; i < N; ++i)
            for (int j = 0; j <= highestLoad; ++j)
                dp[i][j] = -1;

        cout << FindBest() << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}

// do again