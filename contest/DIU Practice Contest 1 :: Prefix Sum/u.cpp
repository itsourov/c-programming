#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    map<int, int> mpm, mpf;
    char c;
    int a, b;
    for (int i = 0; i < n; i++)
    {

        cin >> c >> a >> b;
        if (c == 'M')
        {
            mpm[a]++;
            mpm[b + 1]--;
        }
        else if (c == 'F')
        {
            mpf[a]++;
            mpf[b + 1]--;
        }
    }
    int effectM = 0, effectF = 0;
    int maxAns = 0;
    for (int i = 0; i <= 400; i++)
    {
        if (mpm.find(i) != mpm.end())
            effectM += mpm[i];

        if (mpf.find(i) != mpf.end())
            effectF += mpf[i];

        maxAns = max(maxAns, min(effectF, effectM) * 2);
    }
    cout << maxAns << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}