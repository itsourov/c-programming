#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double l = 0;
    double r = sum;
    for (int i = 0; i < 100; i++)
    {

        double mid = (l + r) / 2;
        if (mid * mid > sum)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
        // cout << mid << endl;
    }

    int mid = (l + r) / 2;
    if (mid * mid == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}