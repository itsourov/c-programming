#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    double act = sqrt(n);
    // printf("%.10lf\n", act);
    cout << fixed << setprecision(4);

    cout << act << endl;

    double l = 0;
    double r = n;
    while ((r - l) > 1e-4)
    {

        double mid = (l + r) / 2;
        if (mid * mid > n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    // printf("%.10lf\n", (l + r) / 2);
    cout << (l + r) / 2 << endl;
}