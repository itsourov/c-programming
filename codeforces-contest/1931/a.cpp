#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                if (i + j + k == n)
                {
                    printf("%c%c%c\n", 'a' + i - 1, 'a' + j - 1, 'a' + k - 1);
                    return;
                }
            }
        }
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
    }
}