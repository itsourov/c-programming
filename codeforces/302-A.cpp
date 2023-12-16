#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }

    for (int i = 0; i < m; i++)
    {
        int l, r, diff;
        cin >> l >> r;
        diff = r - l + 1;

        if (diff % 2 == 0 && mp[-1] >= diff / 2 && mp[1] >= diff / 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}