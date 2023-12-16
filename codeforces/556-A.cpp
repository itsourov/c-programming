#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<char> vt;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (!vt.empty() && vt.back() != c)
        {
            vt.pop_back();
        }
        else
        {
            vt.push_back(c);
        }
    }
    cout << vt.size() << endl;
}