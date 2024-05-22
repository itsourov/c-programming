#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int arr[100005], brr[100005], crr[100005];
int dp[100005][4];
int rec(int idx, int prev)
{
    if (idx >= n)
        return 0;
    if (dp[idx][prev] != -1)
    {
        return dp[idx][prev];
    }
    int do1 = 0, do2 = 0, do3 = 0;
    if (prev != 1)
    {
        do1 = rec(idx + 1, 1) + arr[idx];
    }
    if (prev != 2)
    {
        do2 = rec(idx + 1, 2) + brr[idx];
    }

    if (prev != 3)
    {
        do3 = rec(idx + 1, 3) + crr[idx];
    }
    return dp[idx][prev] = max(do1, max(do2, do3));
}
void solve()
{

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] >> brr[i] >> crr[i];
    }

    cout << rec(0, 0) << endl;
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