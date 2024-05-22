#include <iostream>
using namespace std;
#define int long long
#define endl "\n"

const int N = 10000;
int n;
int dp[N + 10];
int rec(int idx, int arr[])
{
    if (dp[idx] != -1)
        return dp[idx];
    int maxLen = 1;
    for (int i = idx + 1; i < n; i++)
    {
        if (arr[i] > arr[idx])
        {
            int tempWay = rec(i, arr) + 1;
            maxLen = max(tempWay, maxLen);
        }
    }
    return dp[idx] = maxLen;
}
void solve()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxAns = 1;
    for (int i = 0; i < n; i++)
    {
        maxAns = max(rec(i, arr), maxAns);
    }
    cout << maxAns << endl;
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