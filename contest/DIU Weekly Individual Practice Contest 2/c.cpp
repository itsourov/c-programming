
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool isInside(int x, int y, int xi, int yi, int ri)
{
    return (x - xi) * (x - xi) + (y - yi) * (y - yi) <= ri * ri;
}

void solve()
{

    int n, r;
    cin >> n >> r;
    int rarr[n], x[n], y[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> rarr[i] >> x[i] >> y[i];
    }
    int count = 0;

    for (int i = -r; i <= r; ++i)
    {
        for (int j = -r; j <= r; ++j)
        {

            if (i * i + j * j <= r * r)
            {

                bool inside = false;
                for (int k = 0; k < n; ++k)
                {
                    if (isInside(i, j, x[k], y[k], rarr[k]))
                    {
                        inside = true;
                        break;
                    }
                }
                if (inside)
                {
                    ++count;
                }
            }
        }
    }

    cout << count << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}