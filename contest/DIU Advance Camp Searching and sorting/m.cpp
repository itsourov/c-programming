#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vt;
    int n;
    while (cin >> n)
    {
        vt.push_back(n);
    }
    for (int i = 0; i < vt.size(); i++)
    {
        for (int j = i; j < vt.size(); j++)
        {
            if (vt[i] > vt[j])
            {
                swap(vt[i], vt[j]);
            }
        }
    }
    for (auto item : vt)
        cout << item << " ";
    cout << endl;
}