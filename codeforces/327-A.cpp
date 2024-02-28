#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int max_ones = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            for (int k = i; k <= j; ++k)
            {
                a[k] = 1 - a[k];
            }

            int ones = 0;
            for (int k = 0; k < n; ++k)
            {
                ones += a[k];
            }

            max_ones = max(max_ones, ones);

            for (int k = i; k <= j; ++k)
            {
                a[k] = 1 - a[k];
            }
        }
    }

    cout << max_ones << endl;
}