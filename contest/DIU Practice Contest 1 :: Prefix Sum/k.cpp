#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll n, q;
    cin >> n;
    ll ps[n + 1] = {0};
    ll x;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        ps[i + 1] += ps[i] + x;
    }
    cin >> q;
    ll l, r;

    for (ll i = 0; i < q; i++)
    {
        cin >> l >> r;
        cout << ps[r + 1] - ps[l] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}