#include <bits/stdc++.h>
using namespace std;
#define int long long
double p, q, r, s, t, u;
double calculate(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

void solve()
{
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double result = calculate(0.0);
        if (result * calculate(1.0) > 0)
        {
            cout << "No solution" << endl;
            continue;
        }

        double low = 0.0;
        double high = 1.0;

        while (high - low > 1e-7)
        {
            double mid = (low + high) / 2.0;
            result = calculate(mid);

            if (result > 0)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }

        double solution = (low + high) / 2.0;
        cout << fixed << setprecision(4) << solution << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}