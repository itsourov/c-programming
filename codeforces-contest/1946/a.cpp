#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int upperHalf(int x)
{

    if (x == 0)
        return 0;
    if (x % 2 != 0)
    {
        x++;
    }
    return x / 2;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int middle = upperHalf(n);
    middle--;
    arr[middle]++;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << middle << endl;
    int ans = 1;
    for (int i = middle + 1; i < n; i++)
    {
        if (i > 0)
        {
            if (arr[i] < arr[i - 1])
            {
                ans += abs(arr[i - 1] - arr[i]);
                arr[i] = arr[i - 1];
                // cout << ans << endl;
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}