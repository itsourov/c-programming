#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int n, k;
vector<int> ropes;
bool good(double x)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (int)((double)ropes[i] / x);
    }

    return sum >= k;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    ropes.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ropes[i];
    }

    double l = 0.0;
    double r = 10e8;

    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2.0;
        if (good(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
        // printf("%lf\n", l);
    }

    printf("%lf\n", l);
}