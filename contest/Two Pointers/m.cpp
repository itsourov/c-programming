#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prepapred[m];
    for (int i = 0; i < m; i++)
    {
        cin >> prepapred[i];
    }

    sort(arr, arr + n);
    sort(prepapred, prepapred + m);

    int p1 = 0;
    int p2 = 0;
    int count = 0;
    while (p1 < n)
    {
        while (p2 < m && prepapred[p2] < arr[p1])
        {
            // cout << prepapred[p2] << " " << arr[p1] << endl;
            p2++;
        }
        if (p2 < m && prepapred[p2] >= arr[p1])
        {
            count++;
            p2++;
        }

        p1++;
    }
    cout << n - count << endl;
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
}