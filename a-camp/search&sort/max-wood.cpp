#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int arr[], int n, int mid, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            sum += arr[i] - mid;
        }
    }
    cout << mid << " - " << (sum >= m) << endl;

    return sum >= m;
}
void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int maxHight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxHight = max(maxHight, arr[i]);
    }
    int m;
    cin >> m;

    int l = 0;
    int r = maxHight;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(arr, n, mid, m))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << r << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}