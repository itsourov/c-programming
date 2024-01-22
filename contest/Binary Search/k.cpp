#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n, greater<int>());
    sort(b, b + n, greater<int>());

    int prefixSumA[n + 3], prefixSumB[n + 3];

    prefixSumA[0] = a[0];
    prefixSumB[0] = b[0];

    for (int i = 1; i < n; i++)
    {
        prefixSumA[i] = prefixSumA[i - 1] + a[i];
        prefixSumB[i] = prefixSumB[i - 1] + b[i];
    }

    int l = -1;
    int r = INT_MAX;

    while (l + 1 < r)
    {

        int mid = l + (r - l) / 2;

        int totalRound = n + mid;
        // cout << "totl " << totalRound << endl;
        int countableRound = totalRound - totalRound / 4;
        // cout << "countable " << countableRound << endl;
        int suma = 100 * mid;
        if (mid < n)
        {
            suma += prefixSumA[countableRound - mid - 1];
        }

        int sumb = countableRound < n ? prefixSumB[countableRound - 1] : prefixSumB[n - 1];

        if (suma < sumb)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << r << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}