#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double d;
    cin >> d;

    double ans = 1000.0 * 5280.0 / 4854.0;

    ans *= d;

    cout << (int)(ans + 0.5) << endl;
}