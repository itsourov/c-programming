#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{

    double r;
    cin >> r;

    double pie = 2 * acos(0.0);
    double areaSq = pow(r + r, 2);
    double areaCircle = pie * r * r;

    cout << fixed << setprecision(2);
    cout << areaSq - areaCircle << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc++ << ": ";
        solve();
    }
}