#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        int operation = 0;

        sort(arr, arr + n);

        int max = arr[n - 1];

        int gcdX, gap;
        for (int i = 0; i < n - 1; i++)
        {
            gap = max - arr[i];
            if (i == 0)
            {
                gcdX = gap;
            }
            else
            {
                if (gap != 0)
                    gcdX = gcd(gap, gcdX);
            }
        }
        gap = arr[n - 1] - arr[n - 2];
        if (gap >= gcdX * 2)
        {
            operation++;
        }
        else
        {
            max = arr[n - 1] + gcdX;
        }
        for (int i = 0; i < n; i++)
        {
            operation += (max - arr[i]) / gcdX;
        }

        cout << operation << endl;
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