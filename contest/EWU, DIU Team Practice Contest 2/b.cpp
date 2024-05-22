#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int oneCount1 = 0, oneCount2 = 0;
    int zeroCount1 = 0, zeroCount2 = 0;
    for (auto item : s1)
    {
        if (item == '1')
        {
            oneCount1++;
        }
        else
        {
            zeroCount1++;
        }
    }
    for (auto item : s2)
    {
        if (item == '1')
        {
            oneCount2++;
        }
        else
        {
            zeroCount2++;
        }
    }

    cout << (min(oneCount1, zeroCount2) + min(zeroCount1, oneCount2)) << endl;
}
signed main()
{

    freopen("hamming.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}