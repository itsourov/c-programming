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
    {
        cin >> arr[i];
    }
    int separate = k - (n - k);
    if (separate > n)
        separate = n;
    int inPair = n - separate;
    int l = 0;
    int r = inPair - 1;
    if (r < 0)
        r = 0;
    if (r >= n)
        r = n - 1;
    int maximum = 0;
    while (l < r)
    {
        maximum = max(arr[l] + arr[r], maximum);
        l++;
        r--;
    }

    for (int i = inPair; i < n; i++)
    {
        maximum = max(arr[i], maximum);
    }
    cout << maximum << endl;
}