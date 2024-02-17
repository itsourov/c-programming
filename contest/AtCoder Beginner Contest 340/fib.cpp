#include <bits/stdc++.h>
using namespace std;

#define int long long

int rec(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return rec(n - 1) + rec(n - 2);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << rec(n) << endl;
    // cout << ans << endl;
}