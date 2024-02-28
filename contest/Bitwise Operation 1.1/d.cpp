#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (k % (1LL << i) == 0)
    //     {
    //         cout << i + 1 << endl;
    //         break;
    //     }
    // }
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s = s + to_string(i) + s;
        // cout << s << endl;
    }
    cout << s[k - 1] << endl;
}