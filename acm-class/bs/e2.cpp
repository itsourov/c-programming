#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
double calculate(double x)
{
    long double ans = (x * x) + sqrt(x);
    return ans;
}
void solve()
{

    // for (int i = 0; i < 20; i++)
    // {
    //     cout << calculate(i) << endl;
    // }

    double c;
    cin >> c;
    double l = 0.0, r = 1;
    while (calculate(r) < c)
    {
        r *= 2;
    }
    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2.0;
        if (calculate(mid) < c)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(8) << l << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}