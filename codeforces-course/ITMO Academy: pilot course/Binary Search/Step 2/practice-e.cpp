#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

bool isGood(long double x, long double c)
{
    long double ans = (x * x) + sqrt(x);
    return ans >= c;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double c;
    cin >> c;

    long double l = 0.0;
    long double r = c;

    cout << setprecision(10);
    for (int i = 0; i < 70; i++)
    {
        long double mid = (l + r) / 2;

        if (isGood(mid, c))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r << endl;
}