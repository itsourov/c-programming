#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp] = i;
    }
    vector<int> vt;
    int at = 1;
    int bla = -1;
    while (at <= n)
    {
        vt.push_back(mp[bla]);
        at++;
        bla = mp[bla];
    }

    for (auto item : vt)
        cout << item << " ";
    cout << endl;
}