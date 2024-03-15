#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    vector<double> anss;
    double ans = INT_MAX;

    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    double x3 = x2;
    double y3 = y1;
    double x4 = x1;
    double y4 = y2;

    double diff1 = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    double diff2 = sqrt(pow((x2 - x), 2) + pow((y2 - y), 2));
    double diff3 = sqrt(pow((x3 - x), 2) + pow((y3 - y), 2));
    double diff4 = sqrt(pow((x4 - x), 2) + pow((y4 - y), 2));

    anss.push_back(diff1);
    anss.push_back(diff2);
    anss.push_back(diff3);
    anss.push_back(diff4);

    if (y >= y1 && y <= y2)
    {
        anss.push_back(min(abs(x - x1), abs(x - x2)));
    }
    else if (x >= x1 && x <= x2)
    {
        anss.push_back(min(abs(y - y1), abs(y - y2)));
    }
    sort(anss.begin(), anss.end());
    cout << anss[0] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}