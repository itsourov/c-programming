#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int sum1 = 0, sum2 = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    if (sum1 != sum2)
    {
        cout << -1 << endl;
        return;
    }

    int count = 0;
    int p1 = 0;
    int p2 = 0;
    sum1 = 0;
    sum2 = 0;
    while (p1 < n && p2 < m)
    {

        sum1 += a[p1];
        sum2 += b[p2];
        // cout << sum1 << " " << sum2 << endl;
        if (sum1 == sum2)
        {
            p1++;
            p2++;
            sum1 = 0;
            sum2 = 0;
            count++;
        }
        else if (sum1 > sum2)
        {
            sum1 -= a[p1];
            p2++;
        }
        else if (sum1 < sum2)
        {
            sum2 -= b[p2];
            p1++;
        }
    }

    if (count == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
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