#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, k;
    cin >> n >> k;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i] << " ";
    }
    int j = 0;
    int ans = n;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '0')
        {
            zeroCount++;
        }
        while (zeroCount > k + 1)
        {
            if (arr[j] == '0')
            {
                zeroCount--;
            }
            j++;
        }
        if (zeroCount == k + 1)
        {
            // int minLen = INT_MAX;
            // for (int k = j; k <= i; k++)
            // {
            //     if (arr[k] == '0')
            //     {
            //         minLen = min(minLen, max(k - j, i - k));
            //     }
            // }
            // ans = min(ans, minLen);
            ans = min(ans, (int)ceil((i - j + 1) / 2.0));
        }
    }
    cout << ans << endl;
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
}