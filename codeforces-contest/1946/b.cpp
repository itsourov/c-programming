#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int MOD = 1000000007;
int bigmod(int a, int b, int mod)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2, mod);
    x = (x * x) % mod;
    if (b % 2 == 1)
        x = (x * a) % mod;
    return x;
}

int binMultiply(int a, int b, int mod)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}

int getMaxSum(int arr[], int n)
{
    int maxSum = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}
int processNegative(int x)
{

    return ((x % MOD) + MOD) % MOD;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }
    // cout << totalSum << endl;
    int maxSum = getMaxSum(arr, n);
    if (maxSum <= 0)
    {
        cout << processNegative(totalSum) << endl;
        return;
    }
    int temp = maxSum;
    int gunKorteHobe = bigmod(2, k, MOD);
    int ans = totalSum + binMultiply(maxSum, gunKorteHobe, MOD) - temp;
    if (ans < 0)
        ans = processNegative(ans);
    cout << ans << endl;
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
}