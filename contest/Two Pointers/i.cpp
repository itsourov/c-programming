#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxLen = 0;
    int l = 0, r = -1;
    int j = 0;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            zeroCount++;
        }
        while (zeroCount > k)
        {
            if (arr[j] == 0)
            {
                zeroCount--;
            }
            j++;
        }
        if (i - j + 1 > maxLen)
        {
            maxLen = i - j + 1;
            l = j;
            r = i;
        }
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = 1;
    }
    cout << maxLen << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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