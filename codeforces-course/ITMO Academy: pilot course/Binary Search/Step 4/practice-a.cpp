#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d;
    cin >> n >> d;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i < d)
            sum += arr[i];
    }
    int l = 0, r = d - 1;
    int maxSum = sum;
    int maxL = l, maxr = r;
    while (r < n)
    {
        if (sum > maxSum)
        {
            maxSum = sum;
            maxL = l + 1;
            maxr = r + 1;
        }
        l++;
        r++;
        if (r < n)
        {
            sum += arr[r];
            sum -= arr[l - 1];
        }
        else
        {
            break;
        }
    }
    cout << maxL << " " << maxr << endl;
}