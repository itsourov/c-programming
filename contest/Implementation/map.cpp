#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    map<char, int> mp1, mp2;

    mp1['x']++;
    if (mp1['b'])
    {
        cout << "kichu akta korlam" << endl;
    }

    mp2['x']++;

    // if (mp1 == mp2)
    // {
    //     cout << "same map" << endl;
    // }
    // else
    // {
    //     cout << "not same map" << endl;
    // }
    for (auto item : mp1)
    {
        if (mp2[item.first] != item.second)
        {
            cout << "same map na" << endl;
            return;
        }
    }
    cout << "same map" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
