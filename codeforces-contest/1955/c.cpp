
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (k >= sum)
    {
        cout << n << endl;
        return;
    }
    int i = 0, j = n - 1;
    int ans = 0;
    while (k > 0 && i < j)
    {
        if (k >= (2 * min(arr[i], arr[j])))
        {
            ans++;
            k -= (2 * min(arr[i], arr[j]));
            if (arr[i] < arr[j])
            {
                arr[j] -= arr[i];
                i++;
            }
            else if (arr[i] == arr[j])
            {
                i++;
                j--;
                ans++;
            }
            else
            {
                arr[i] -= arr[j];
                j--;
            }
        }
        else if ((k + 1) == (2 * min(arr[i], arr[j])) && arr[i] <= arr[j])
        {
            ans++;
            break;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}