#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int calculate(int mid, int k)
{
    // cout << mid << " ";
    int ans = 0;
    while (mid > 0)
    {
        ans += mid;
        mid /= k;
    }
    // cout << ans << endl;
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int l = 0, r = n;

    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        // cout << l << " " << r << " -- ";
        int temp = calculate(mid, k);

        if (temp < n)
        {
            // cout << "asd " << n << " ";
            l = mid;
        }
        else
        {
            // cout << "bsd ";
            r = mid;
        }
    }
    cout << r << endl;
}