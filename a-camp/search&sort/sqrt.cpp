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
    cout << fixed << setprecision(15);

    cout << act << endl;

    double l = 0;
    double r = n;
    for (int i = 0; i < 100; i++)
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
        cout << mid << endl;
    }

    cout << (l + r) / 2 << endl;
}