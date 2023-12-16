#include <bits/stdc++.h>
using namespace std;

#define int long long

int isArithmeticProgression(vector<int> vt)
{
    int vtsize = vt.size();
    if (vtsize == 1)
    {
        return 0;
    }
    int diff = vt[1] - vt[0];
    for (int i = 2; i < vtsize; i++)
    {
        if (vt[i] - vt[i - 1] != diff)
        {
            diff = -1;
            break;
        }
    }
    return diff;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<int, vector<int>> mp;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp].push_back(i + 1);
    }

    vector<pair<int, int>> ans;

    for (auto item : mp)
    {
        int bla = isArithmeticProgression(item.second);
        if (bla != -1)
        {
            ans.push_back({item.first, bla});
        }
    }
    cout << ans.size() << endl;
    for (auto item : ans)
    {
        cout << item.first << " " << item.second << endl;
    }
}