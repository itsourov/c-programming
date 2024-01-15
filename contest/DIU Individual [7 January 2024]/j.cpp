#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int k;
    cin >> k;

    sort(arr, arr + 3, greater<int>());

    for (int i = 0; i < k; i++)
    {
        arr[0] *= 2;
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;
}