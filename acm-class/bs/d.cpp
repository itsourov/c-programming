#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

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

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {

        int a, b;
        cin >> a >> b;

        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] < a)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        int lPos = l;

        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] <= b)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        int rPos = r;

        cout << rPos - lPos + 1 << " ";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}