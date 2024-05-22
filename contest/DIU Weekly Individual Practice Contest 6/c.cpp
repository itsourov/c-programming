#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int arr[2][N];
int n;
int maxAns = 0;
int dp[N][3];
bool isValid(int i, int j)
{
    return (i >= 0 && i < 2 && j >= 0 && j < n);
}
int go(int idx, int flag)
{
    if (idx == n)
    {
        return 0;
    }
    if (dp[idx][flag] != -1)
    {
        return dp[idx][flag];
    }
    if (flag == 1)
    {
        int nibo = go(idx + 1, 2) + arr[1][idx];
        int nibona = go(idx + 1, 0);
        return dp[idx][flag] = max(nibo, nibona);
    }
    else if (flag == 2)
    {
        int nibo = go(idx + 1, 1) + arr[0][idx];
        int nibona = go(idx + 1, 0);
        return dp[idx][flag] = max(nibo, nibona);
    }
    else
    {
        int nibo1 = go(idx + 1, 1) + arr[0][idx];
        int nibo2 = go(idx + 1, 2) + arr[1][idx];
        return dp[idx][flag] = max(nibo1, nibo2);
    }
}
void solve()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[1][i];
        dp[i][0] = -1;
        dp[i][1] = -1;
        dp[i][2] = -1;
    }
    cout << go(0, 0) << endl;
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