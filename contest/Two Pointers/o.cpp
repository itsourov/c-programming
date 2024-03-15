#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int j = 0;
    int bCount = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            bCount++;
        }
        while (bCount > k)
        {
            if (s[j] == 'b')
            {
                bCount--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    j = 0;
    int aCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            aCount++;
        }
        while (aCount > k)
        {
            if (s[j] == 'a')
            {
                aCount--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }

    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}