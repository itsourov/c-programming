#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = INT_MAX;
map<int, bool> mp;
void prec()
{
    int sum = 0;
    int i = 0;
    while (sum <= N)
    {
        sum += i + 1;
        i++;
        mp[sum] = true;
    }
    // cout << mp.size() << endl;
}
void solve()
{
    int n;
    cin >> n;

    if (mp.find(n - 1) != mp.end())
    {
        cout << 1 << " ";
    }
    else
        cout << 0 << " ";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    prec();
    while (t--)
    {
        solve();
    }
    cout << endl;
}