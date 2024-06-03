#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int a, b, x, y;
bool isPossible(int mid)
{
    return x * mid <= a && y * mid <= b;
}
void solve()
{
    cin >> a >> b >> x >> y;
    // if (a < b)
    //     swap(a, b);
    // if (x < y)
    //     swap(x, y);
    int gc = gcd(x, y);
    x /= gc;
    y /= gc;

    int l = 0, r = 1;
    while (isPossible(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << x * r << " " << y * r << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}