#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, v;
bool isPossible(double x, int arr[], int brr[])
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double temp = arr[i] * x;
        if (temp > brr[i])
            return false;
        sum += temp;
    }
    return sum <= v;
}
void solve()
{

    cin >> n >> v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    double l = 0.0;
    double r = 1.0;
    while (isPossible(r, arr, brr))
    {
        r *= 2;
    }
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2;
        if (isPossible(mid, arr, brr))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * r;
    }
    cout << fixed << setprecision(5) << sum << endl;
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
