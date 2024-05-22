#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    char s[n + 2];
    s[0] = '#';
    s[n + 1] = '#';
    int startI, endI;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        if (s[i] == 's')
        {
            startI = i;
        }
        if (s[i] == 'e')
        {
            endI = i;
        }
    }
    if (startI > endI)
        swap(startI, endI);

    if (s[startI - 1] == '0' || s[startI + 1] == '0')
    {
        // process ending;
    }
    if (s[startI - 1] == '#' || s[startI + 1] == '#')
    {
        // process ending;
    }
}
signed main()
{

    // freopen("portals.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }
}