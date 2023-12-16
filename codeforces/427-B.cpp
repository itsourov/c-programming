#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, c;
    cin >> n >> t >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int total = 0;
    for (int i = 0; i < c - 1; i++)
    {
        total += arr[i];
    }
    int lindex = 0;
    int cnt = 0;
    for (int i = c - 1; i < n; i++)
    {
        total += arr[i];
        if (lindex > 0)
            total -= arr[lindex];
        lindex++;
        if (total <= t)
            cnt++;
    }
    cout << cnt << endl;
}