#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int l = 0, r = 0;
    int sum = 0;
    while (r < n)
    {
        if (sum + arr[r] <= m)
        {
            sum += arr[r];
            r++;
            ans = max(sum, ans);
        }
        else
        {
            sum -= arr[l];
            l++;
        }
    }

    cout << ans << endl;
}