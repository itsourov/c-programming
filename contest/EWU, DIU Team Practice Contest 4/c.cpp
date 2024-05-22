#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> vt;
    int f, t;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t <= s)
        {
            vt.push_back(f);
        }
        else
        {
            int temp = f - (t - s);
            vt.push_back(temp);
        }
    }
    sort(vt.begin(), vt.end());
    cout << vt.back() << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc << ": ";
        solve();
        tc++;
    }
}