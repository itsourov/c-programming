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

    sort(arr, arr + n, greater<int>());

    int total = 0;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
            total += arr[i] * arr[i];
        else
            total -= arr[i] * arr[i];
    }

    cout << (double)total * 3.1415926536 << endl;
}