#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int pos[100010];
    pos[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        pos[i + 1] = pos[i] + temp;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int worm;
        cin >> worm;

        int ans = lower_bound(pos, pos + n, worm) - pos;
        cout << ans << endl;
    }
}