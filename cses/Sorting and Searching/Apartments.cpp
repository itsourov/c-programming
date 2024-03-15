#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int desired[n];
    for (int i = 0; i < n; i++)
    {
        cin >> desired[i];
    }
    sort(desired, desired + n);

    int available[m];
    for (int i = 0; i < m; i++)
    {
        cin >> available[i];
    }
    sort(available, available + m);
    int p1 = 0, p2 = 0;
    int count = 0;
    while (p1 < n && p2 < m)
    {

        // cout << p1 << " " << p2 << endl;
        if (abs(desired[p1] - available[p2]) <= k)
        {
            count++;
            p1++;
            p2++;
        }
        else
        {
            if (desired[p1] < available[p2])
            {
                if (p1 + 1 < n)
                    p1++;
                else
                    p2++;
            }
            else if (desired[p1] > available[p2])
            {
                if (p2 + 1 < m)
                    p2++;
                else
                    p1++;
            }
        }
    }
    cout << count << endl;
}