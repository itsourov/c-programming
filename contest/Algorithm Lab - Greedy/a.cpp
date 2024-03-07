#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    while (cin >> n >> k)
    {
        int ans = n;

        int butt = n / k;

        int temp = 1;
        while ((temp + (temp * k)) < butt)
        {
            temp += temp * k;
        }

        cout << ans + temp << endl;
    }
}