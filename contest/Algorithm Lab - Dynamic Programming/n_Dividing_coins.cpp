#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
int sum;
int dp[110][100 * 500 + 10];
int rec(int idx, int person1, int arr[])
{
    int person2 = sum - person1;
    if (idx >= n)
        return abs(person1 - person2);
    if (dp[idx][person1] != -1)
        return dp[idx][person1];
    int way1 = rec(idx + 1, person1 + arr[idx], arr);
    int way2 = rec(idx + 1, person1, arr);

    return dp[idx][person1] = min(way1, way2);
}
void solve()
{

    sum = 0;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << rec(0, 0, arr) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}