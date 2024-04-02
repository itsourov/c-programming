#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int ps[n + 1];
    int x;
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        totalSum += x;
        ps[i + 1] = ps[i] + x;
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int fst = ps[i + 1] - ps[0];

        if (fst == (totalSum - fst))
        {
            count++;
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

    while (t--)
    {
        solve();
    }
}