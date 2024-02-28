#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);

signed main()
{
    optimize();
    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> ar(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }
        cout << "Case " << j++ << ":" << endl;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            int a = lower_bound(ar.begin(), ar.end(), x) - ar.begin();
            int b = lower_bound(ar.begin(), ar.end(), y) - ar.begin();

            // cout << b << " - " << ar[b - 1] << " " << y << " ";
            if (b >= 0 && b < n && ar[b] == y)
                b++;
            // cout << ar[b - 1] << endl;

            int ans = b - a;

            cout << ans << endl;
        }
    }
}