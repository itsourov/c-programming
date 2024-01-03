#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> vt(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> vt[i];
        sum += vt[i];
    }
    sort(vt.begin(), vt.end());

    int sobaireSameHeightKorteLagbe = vt.back() * n;
    sobaireSameHeightKorteLagbe -= sum;

    if (sobaireSameHeightKorteLagbe <= k)
    {
        k -= sobaireSameHeightKorteLagbe;
        sum = vt.back() * n;

        int ans = vt.back();
        ans += k / n;
        cout << ans << endl;
    }
    else
    {

        int left = 0, right = vt[n - 1];

        while (left < right)
        {
            int mid = (left + right) / 2;
            long long total_cost = 0;

            for (int i = 0; i < n; ++i)
            {
                if (vt[i] < mid)
                {
                    total_cost += mid - vt[i];
                }
            }

            if (total_cost <= k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        cout << left - 1 << endl;
    }
}