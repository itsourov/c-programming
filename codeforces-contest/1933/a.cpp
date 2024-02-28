#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int dum;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        sum += abs(dum);
    }
    cout << sum << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}