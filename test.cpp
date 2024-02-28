#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n"
const int N = 10e6 + 1;
int mp[N + 100];
void solve(int p)
{

    int n, q;
    cin >> n >> q;
    // int arr[n];
    for (int i = 0; i < n; ++i)
    {
        int dum;
        cin >> dum;
        mp[i] += dum;
        mp[i + 1] -= dum;
    }

    int l, r, v;
    while (q--)
    {
        cin >> l >> r >> v;
        mp[l - 1] += v;
        mp[r - 1 + 1] += (-1) * v;
    }
    int effect = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[i] != 0)
        {
            effect += mp[i];
        }
        cout << effect << " ";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}