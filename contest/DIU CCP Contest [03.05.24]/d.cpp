#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    set<int> positonsOnSingleOne;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int oneCount = 0;
        int onePos = 0;
        for (int j = 0; j < k; j++)
        {
            if (s[j] == '1')
            {
                oneCount++;
                onePos = j;
            }
        }
        if (oneCount == 1)
        {
            positonsOnSingleOne.insert(onePos);
        }
    }

    if (positonsOnSingleOne.size() == k)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}