#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    int n;

    cin >> n;
    int arr[n];
    int sum = 0;
    int maxPos = 0;
    int minNeg = 0;
    bool currentPos = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (currentPos)
        {
            if (arr[i] > 0)
                maxPos = max(maxPos, arr[i]);
            else
            {
                // cout << maxPos << " ";
                sum += maxPos;
                maxPos = 0;
                currentPos = false;
                minNeg = arr[i];
            }
        }
        else
        {
            if (arr[i] < 0)
            {
                minNeg = max(minNeg, arr[i]);
            }
            else
            {
                // cout << minNeg << " ";
                sum += minNeg;
                minNeg = 0;
                currentPos = true;
                maxPos = arr[i];
            }
        }
    }
    if (currentPos)
    {
        // cout << maxPos << " ";
        sum += maxPos;
    }
    else
    {
        // cout << minNeg << " ";
        sum += minNeg;
    }
    cout << sum << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}