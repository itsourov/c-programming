#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long n;
    cin >> n;

    int extra = n + 1;
    int log = 1;
    int saved = 0;
    while (1)
    {
        if (extra < log)
        {
            break;
        }
        extra -= log;
        log++;
        saved++;
    }

    cout << n - saved + 1 << endl;
}