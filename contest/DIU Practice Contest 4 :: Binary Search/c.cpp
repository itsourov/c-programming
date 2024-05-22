#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int a, b, c;
double good(double x)
{
    return ((a * x) + (b * sin(x))) <= c;
}
void solve()
{
    cout << fixed << setprecision(6);

    cin >> a >> b >> c;
    double l = 0.0, r = 1.1;
    while (good(r))
    {
        r *= 2;
    }
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2.0;
        if (good(mid))
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
