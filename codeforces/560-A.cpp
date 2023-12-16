#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int min = arr[0];

    if (min == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}