#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MAXN = 2e5 + 10;
int dp1[MAXN];
int dp2[MAXN];
int n;
int arr[MAXN];
int rec1(int idx, int prev)
{
    if (idx >= n)
        return 0;
    if (dp1[idx] != 0)
    {
        return dp1[idx];
    }
    if (arr[idx] > prev)
    {
        return dp1[idx] = rec1(idx + 1, arr[idx]) + 1;
    }
    else
    {
        dp1[idx] = rec1(idx, INT_MIN);
        return 0;
    }
}
int rec2(int idx, int prev)
{
    if (idx < 0)
        return 0;
    if (dp2[idx] != 0)
    {
        return dp2[idx];
    }
    if (arr[idx] < prev)
    {
        return dp2[idx] = rec2(idx - 1, arr[idx]) + 1;
    }
    else
    {
        dp2[idx] = rec2(idx, INT_MAX);
        return 0;
    }
}
void solve()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxAns = 1;
    for (int i = 0; i < n; i++)
    {
        maxAns = max(rec1(i, INT_MIN), maxAns);
        maxAns = max(maxAns, rec2(n - i - 1, INT_MAX));
    }

    // cout << maxAns << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp1[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp2[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && i < n - 1)
        {
            if (arr[i - 1] < arr[i + 1])
            {

                int temp = (dp2[i - 1] + dp1[i + 1]);

                maxAns = max(temp, maxAns);
            }
            else
            {
                maxAns = max(maxAns, max(dp2[i - 1], dp1[i + 1]));
            }
        }
        else if (i == 0)
        {
            maxAns = max(maxAns, dp1[i + 1]);
        }
        else if (i == n - 1)
        {
            maxAns = max(maxAns, dp2[i - 1]);
        }
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
}