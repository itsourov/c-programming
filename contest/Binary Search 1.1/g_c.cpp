#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
bool isPossible(int n, int m, int arr[], int size)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > size)
        {
            return false;
        }
        if (sum + arr[i] <= size)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            sum = arr[i];
        }
    }
    return count <= m;
}
void solve()
{
    int n, m;
    while (cin >> n >> m)
    {

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int l = 0, r = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isPossible(n, m, arr, mid))
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        // tc++;
    }
}