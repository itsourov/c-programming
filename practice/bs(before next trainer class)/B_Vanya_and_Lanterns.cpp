#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, len;
bool possible(double mid, double arr[])
{
    double suruhoice = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - mid <= suruhoice)
        {

            suruhoice = max(suruhoice, arr[i] + mid);
        }
    }
    return suruhoice >= len;
}
void solve()
{
    cin >> n >> len;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    double l = 0, r = len;
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2;
        if (possible(mid, arr))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << fixed << setprecision(10);
    cout << l << endl;
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