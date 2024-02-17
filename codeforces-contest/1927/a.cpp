#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0;
        int r = n - 1;
        while (s[l] != 'B' && l < n)
        {
            l++;
        }
        while (s[r] != 'B' && r >= 0)
        {
            r--;
        }

        cout << max((int)0, r - l + 1) << endl;
    }
}