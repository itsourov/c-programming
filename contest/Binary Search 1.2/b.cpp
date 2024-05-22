#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int arr[], int n, int k, int mid)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mid)
        {
            count += (arr[i] / (double)mid);
        }
        if (count >= k)
        {
            return true;
        }
    }
    return false;
}
void solve()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        r = max(r, arr[i]);
    }
    sort(arr, arr + n);
    int l = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(arr, n, k, mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << max(0LL, r) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}