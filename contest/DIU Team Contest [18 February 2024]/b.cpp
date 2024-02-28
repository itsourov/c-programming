#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, q;
    cin >> n >> q;
    map<int, int> mp;
    for (int i = 0; i < q; i++)
    {
        int type, s, x, value;
        cin >> type >> s >> x >> value;

        if (type == 2)
        {
            value *= -1;
        }
        mp[s] += value;
        mp[x + 1] -= value;
    }
    bool isFrst = true;
    int effect = 0, power = 0;
    int prevTower = 0;
    int minPower = INT_MAX;
    for (auto item : mp)
    {
        if (isFrst)
        {
            isFrst = false;
            effect += item.second;
            power += effect;
            minPower = min(minPower, power);
            prevTower = item.first;
        }
        else
        {
            int distancce = item.first - prevTower - 1;
            prevTower = item.first;

            power += (effect * distancce);
            minPower = min(minPower, power);

            effect += item.second;
            power += effect;
            minPower = min(minPower, power);
        }
    }

    cout << max(1 - minPower, 1LL) << endl;
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