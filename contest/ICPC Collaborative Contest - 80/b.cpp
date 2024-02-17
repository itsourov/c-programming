#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    vector<int> vt;

    while (q--)
    {
        int qtype;
        cin >> qtype;

        if (qtype == 1)
        {
            int x;
            cin >> x;
            vt.push_back(x);
        }
        else if (qtype == 2)
        {
            int k;
            cin >> k;
            int index = vt.size() - k;
            cout << vt[index] << endl;
        }
    }
}