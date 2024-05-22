#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k;
bool isPossible(double mid, double arr[])
{
    double extra = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mid)
        {
            extra += arr[i] - mid;
            // cout << "extra " << arr[i] - mid << endl;
        }
        else
        {
            double lagbe = (100 * (mid - arr[i])) / (100 - k);
            // cout << lagbe << endl;
            extra -= lagbe;
            if (extra < 0.0)
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{

    cin >> n >> k;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    // isPossible(3.0, arr);
    // return;
    double l = 0.0, r = 1.0;
    while (isPossible(r, arr))
    {
        r *= 2;
    }
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2.0;
        if (isPossible(mid, arr))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(9) << r << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
