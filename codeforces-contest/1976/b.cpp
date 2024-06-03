#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n + 1; i++)
    {
        cin >> brr[i];
    }

    int totalCost = 0;
    int closestDiff = INT_MAX;
    int lastEl = brr[n];
    // cout << lastEl << "asd" << endl;
    for (int i = 0; i < n; i++)
    {
        totalCost += abs(arr[i] - brr[i]);
        if (lastEl >= min(arr[i], brr[i]) && lastEl <= max(arr[i], brr[i]))
        {
            closestDiff = 1;
        }
        closestDiff = min(closestDiff, 1 + abs(lastEl - arr[i]));
        closestDiff = min(closestDiff, 1 + abs(lastEl - brr[i]));
    }
    cout << totalCost + closestDiff << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >>
        t;
    while (t--)
    {
        solve();
    }
    return 0;
}