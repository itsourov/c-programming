#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc)
{
    int n;
    cin >> n;
    int arr[n];
    int dif[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dif[0] = arr[0];
    int maxEl = dif[0];
    for (int i = 1; i < n; i++)
    {
        dif[i] = arr[i] - arr[i - 1];
        maxEl = max(dif[i], maxEl);
    }

    int temp = maxEl;
    for (int i = 0; i < n; i++)
    {
        if (dif[i] == temp)
        {
            temp--;
        }
        else if (temp < dif[i])
        {
            maxEl++;
            break;
        }
    }

    printf("Case %lld: %lld\n", tc, maxEl);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)

    {
        solve(i);
    }
}