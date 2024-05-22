#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int n, k;
bool isGood(double arr[], double mid)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (arr[i] / mid);
    }
    return cnt >= k;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double l = 0.0, r = 1;
    while (isGood(arr, r))
    {
        r *= 2;
    }

    for (int i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2.0;

        if (isGood(arr, mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(7);
    cout << l << endl;
}