#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        auto lb = lower_bound(arr, arr + n, l);
        auto ub = upper_bound(arr, arr + n, r);

        cout << ub - lb << " ";
    }
}