#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    map<int, int> mpa, mpb;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpa[a[i]] = 1;
    }
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mpb[b[i]] = 1;
    }
    int acount = 0, bcount = 0, sameCount = 0;
    for (int i = 1; i <= k; i++)
    {
        if (mpa[i] && !mpb[i])
        {
            acount++;
        }
        else if (!mpa[i] && mpb[i])
        {
            bcount++;
        }
        else if (mpa[i] && mpb[i])
        {
            sameCount++;
        }
    }

    if (acount >= k / 2 && bcount >= k / 2)
    {
        cout << "YES" << endl;
        return;
    }

    int aneed = (k / 2) - acount;
    int bneed = (k / 2) - bcount;

    // cout << aneed << " " << bneed << " " << sameCount << " " << k << endl;

    if ((max((int)0, aneed) + max((int)0, bneed)) <= sameCount)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << endl;
    }
}