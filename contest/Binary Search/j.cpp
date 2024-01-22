#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{

    int n, h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = LLONG_MAX;

    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;

        int hit = 0;
        for (int i = 1; i < n; i++)
        {
            hit += min(mid, arr[i] - arr[i - 1]);
        }
        hit += mid;

        if (h > hit)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << r << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}