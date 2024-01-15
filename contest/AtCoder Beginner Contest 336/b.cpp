#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;

    while (n > 0 && n % 2 == 0)
    {
        // cout << n << endl;
        ans++;
        n = n >> 1;
    }
    cout << ans << endl;
}