#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int t;
    double a;
    cin >> t >> a;
    int arr[n];
    int closestI = 1;
    double closestDif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        double temp = t - (0.006 * arr[i]);
        if (temp > a)
        {
            if ((temp - a) < closestDif)
            {
                closestI = i + 1;
                closestDif = (temp - a);
            }
        }
        else
        {
            if ((a - temp) < closestDif)
            {
                closestI = i + 1;
                closestDif = (a - temp);
            }
        }
    }
    cout << closestI << endl;
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