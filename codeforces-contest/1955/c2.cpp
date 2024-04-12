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
    int l = 0, r = n - 1;
    int ans = 0;
    // bool firstTurn = true;

    while (k > 0 && l <= r)
    {

        if (l == r)
        {
            if (k >= arr[l])
            {
                k -= arr[l];
                arr[l] = 0;
                l++;
                ans++;
            }
            break;
        }

        int temp = min(k / 2, arr[l]);
        temp = min(temp, arr[r]);
        // cout << l << " " << r << " " << arr[l] << " " << arr[r] << " " << k << endl;

        if (temp == 0 && k == 1)
        {

            if (arr[l] == 1 || arr[r] == 1)
            {
                arr[l] == 0;
                k--;
                l++;
                ans++;
            }
            break;
        }

        arr[l] -= temp;
        arr[r] -= temp;
        k -= (temp * 2);

        if (arr[l] == 0)
        {
            ans++;
            l++;
        }
        if (arr[r] == 0)
        {
            ans++;
            r--;
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