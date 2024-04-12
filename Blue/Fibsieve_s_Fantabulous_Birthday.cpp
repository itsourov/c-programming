#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int step = sqrt(n);
    if (step * step != n)
    {
        step++;
    }
    int start = (step - 1) * (step - 1) + 1;
    int end = step * step;
    int a, b;

    // cout << start << " " << end << endl;

    if (n <= start + step - 1)
    {
        a = step;
        b = n - start + 1;
    }
    else
    {
        a = end - n + 1;
        b = step;
    }
    if (step % 2 == 0)
    {
        swap(a, b);
    }

    cout << a << " " << b << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}