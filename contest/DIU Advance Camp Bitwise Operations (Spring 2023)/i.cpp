#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod = 1e9 + 7;

int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[__builtin_clz(arr[i])]++;
    }
    int count = 0;
    for (auto item : mp)
    {
        if (item.second == 2)
        {
            count++;
        }
        else if (item.second > 2)
        {
            count += (item.second * (item.second - 1)) / 2;
        }
    }
    cout << count << endl;
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