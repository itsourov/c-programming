#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = n - 1;

    int sum1 = 0, sum2 = 0;
    bool tarnOf1 = true;
    while (l <= r)
    {
        if (arr[l] > arr[r])
        {
            if (tarnOf1)
            {
                sum1 += arr[l];
            }
            else
            {
                sum2 += arr[l];
            }
            l++;
        }
        else
        {
            if (tarnOf1)
            {
                sum1 += arr[r];
            }
            else
            {
                sum2 += arr[r];
            }
            r--;
        }
        tarnOf1 = !tarnOf1;
    }
    cout << sum1 << " " << sum2 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}