#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sort(arr, arr + n);
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        auto lb = upper_bound(arr, arr + n, q);

        cout << lb - arr << endl;
    }
}