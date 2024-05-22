#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int j = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        while (s2[j] != s1[i])
        {
            j++;
        }
        cout << j + 1 << " ";
        j++;
    }
    cout << endl;
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
    return 0;
}